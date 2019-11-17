//
//  main.cpp
//  HackerRank_32
//
//  Created by Juan on 13.11.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <strstream>
#include <string>

using namespace std;


int main()
{
    int n, q, i;
    cin >> n >> q;
    string temp;
    vector<string> hrml;
    vector<string> queries;
    
    cin.ignore(); // Used for clear the buffer while taking next line input

    for(i = 0; i < n; i++)
    {
        getline(cin,temp);
        hrml.push_back(temp);
    }
    for(i = 0; i < q; i++)
    {
        getline(cin,temp);
        queries.push_back(temp);
    }

    map<string, string> mp;
    vector<string> tag;

    for(i = 0; i < n; i++)
    {
        temp = hrml[i];
        temp.erase(remove(temp.begin(), temp.end(), '\"' ), temp.end()); // Remove "
        temp.erase(remove(temp.begin(), temp.end(), '>' ), temp.end()); // Remove >

        if(temp.substr(0,2) == "</") // Returns a substring [pos, pos+count)
        {
            tag.pop_back();
        }
        else
        {
            strstream ss;
            ss.str();
            ss << temp;
            string t1 , p1, v1;
            char ch;
            ss >> ch >> t1 >> p1 >> ch >> v1; // ch == < and =, t1 == tag, p1 == attribute name, v1 == value
            string temp1 = "";

            if(tag.size() > 0)
            {
                temp1 = *tag.rbegin(); // Returns an iterator to the reverse-beginning of the given container c or array array.
                temp1 = temp1 + "." + t1;
            }
            else
                temp1 = t1;

            tag.push_back(temp1);
            mp[*tag.rbegin() + "~" + p1] = v1;

            while(ss)
            {
                ss >> p1 >> ch >> v1;
                mp[*tag.rbegin() + "~" + p1] = v1;
            }
        }

    }

    for(i = 0;i < q; i++)
    {
        if (mp.find(queries[i]) == mp.end())
            cout << "Not Found!\n";
        else
            cout << mp[queries[i]] << endl;
    }
    return 0;
}
