//
//  main.cpp
//  HackerRank_11
//
//  Created by Juan on 23.10.19.
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
    cout << "Number of integers: " << '\t';
    cin >> num;
    
    vector<int> vector;
    int elem;
    
    for(int i = 0; i < num; i++)
    {
        cin >> elem;
        vector.push_back(elem);
    }
    
    sort(vector.begin(), vector.end());
    
    for(int i = 0; i < num; i++)
    {
        cout << vector[i] << " ";
    }
    
    
    
    return 0;
}
