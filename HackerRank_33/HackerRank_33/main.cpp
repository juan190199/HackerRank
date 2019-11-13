//
//  main.cpp
//  HackerRank_33
//
//  Created by Juan on 12.11.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>

#define POWER pow(2, 31)

using namespace std;

double modulo(double numb)
{
    if(numb < POWER)
        return numb;
    else
    {
        while(numb > POWER)
            numb = numb - POWER;
        return numb;
    }
}

template<typename T>
vector<T> sequence(int N, T S, T P, T Q)
{
    vector<T> seq;
    seq[0] = modulo(S);
    
    for(int i = 1; i <= N - 1; i++)
    {
        seq[i] = seq[i-1] * P + modulo(Q);
    }
    
    return seq;
}

template<typename T>
int differentNumbers(vector<T> seq, int N)
{
    vector<T> diff;
    
    
    for(int i = 1; i <= N; i++)
    {
        for(int j = 0; j <= diff.size(); j ++)
        {
            if(seq[i] == diff[j])
                break;
        }
        
        diff.push_back(seq[i]);
    }
    
    return diff.size();
}







int main(int argc, const char * argv[])
{
    int N, S, P, Q;
    cin >> N >> S >> P >> Q;
    
    cout << differentNumbers(sequence(N, S, P, Q), N) << endl;;
    
    return 0;
}
