//
//  main.cpp
//  HackerRank_12
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
    
    int temp;
    cin >> temp;
    if(vector.size() > temp)
        vector.erase(vector.begin() + temp - 1);
    
    int a, b;
    cin >> a >> b;
    if(vector.size() > a && vector.size() > b)
        vector.erase(vector.begin() + a - 1, vector.begin() + b - 1);
    
    cout << vector.size() << endl;
       for(int i = 0; i < vector.size(); i++)
       {
           cout << vector[i] << ' ';
       }
       
    
    return 0;
    
}
