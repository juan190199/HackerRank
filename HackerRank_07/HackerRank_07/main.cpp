//
//  main.cpp
//  HackerRank_07
//
//  Created by Juan on 18.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException
{
private:
    int _length;
public:
    BadLengthException(int length) : _length(length) {}
    int what() {return _length;}
    
};


bool checkUsername(string username)
{
    bool isValid = true;
    int n = username.length();
    if(n < 5)
    {
        throw BadLengthException(n);
    }
    
    for(int i = 0; i < n-1; i++)
    {
        if(username[i] == 'w' && username[i+1] == 'w')
        {
            isValid = false;
        }
    }
    return isValid;
}



int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string username;
        cin >> username;
        try
        {
            bool isValid = checkUsername(username);
            if(isValid)
            {
                cout << "Valid" << '\n';
            }
            else
            {
                cout << "Invalid" << '\n';
            }
        }
        catch(BadLengthException e)
        {
            cout << "Too short: " << e.what() << '\n';
        }
    }
    return 0;
}
