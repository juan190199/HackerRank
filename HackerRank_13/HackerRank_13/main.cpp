//
//  main.cpp
//  HackerRank_13
//
//  Created by Juan on 24.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int num;
    cin >> num;
    
    int Elem;
    vector<int> vec;
    for(int i = 0; i < num; i++)
    {
        cin >> Elem;
        vec.push_back(Elem);
    }
    
    int numq, querie;
    cin >> numq;
    for(int i = 0; i < numq; i++)
    {
        cin >> querie;
        vector<int>::iterator low = lower_bound(vec.begin(), vec.end(), querie);
    
        if(vec[low - vec.begin()] == querie)
        {
            cout << "Yes " << (low - vec.begin() + 1) << endl;
        }
        else
        {
            cout << "No " << (low - vec.begin() + 1) << endl;
        }
    }
    
    
    return 0;
}

