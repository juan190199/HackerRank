//
//  main.cpp
//  HackerRank_17
//
//  Created by Juan on 27.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
#include <ostream>
#include <stdexcept>

using namespace std;

int largest_proper_divisor(int n)
{
    if(n == 0)
    {
        throw invalid_argument("largest proper divisor is not defined for n=0");
    }
    if(n == 1)
    {
        throw invalid_argument("largest proper divisor is not defined for n=1");
    }
    for(int i = n/2; i >= 1; --i)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return -1; // will never happen
}

void process_input(int n)
{
    try
    {
        int d = largest_proper_divisor(n);
        cout << "result = " << d << endl;
    }
    
    catch(const invalid_argument& error)
    {
        cerr << error.what() << endl;
    }
    
    cout << "returning control flow to caller" << endl;
}


int main()
{
    int n;
    cin >> n;
    process_input(n);
    return 0;
}
