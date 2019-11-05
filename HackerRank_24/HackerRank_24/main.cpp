//
//  main.cpp
//  HackerRank_24
//
//  Created by Juan on 29.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#define cin ios_base::sync_with_stdio(false);cin.tie(NULL); cin
#define concatenate add

using namespace std;

template<class T>
class AddElements
{
private:
    T _value;
public:
    AddElements(const T& value) : _value(value) {}
    T add(const T& arg1)
    {
        return _value + arg1;
    }
};

template<>
class AddElements <string>
{
private:
    string* _value;
public:
    AddElements(string &str) : _value(&str) {}
    string concatenate(string& str)
    {
        return *_value + str;
    }
};

int main ()
{
    
    
    int n, i;
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        string type;
        cin >> type;
        if(type == "float")
        {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat (element1);
            cout << myfloat.add(element2) << endl;
        }
        else if(type == "int")
        {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint (element1);
            cout << myint.add(element2) << endl;
        }
        else if(type == "string")
        {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring (element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
