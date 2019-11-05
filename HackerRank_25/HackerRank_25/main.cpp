//
//  main.cpp
//  HackerRank_25
//
//  Created by Juan on 29.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//



#define INF (int)((1 << 31) - 1)
#define io(v) cin >> v
#define toStr(str) #str
#define foreach(v, i) for(int i = 0; i < v.size(); i++)
#define FUNCTION(name,operator) inline void name(int &current, int candidate) {!(current operator candidate) ? current = candidate : false;}
#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    foreach(v, i)
    {
        io(v)[i];
    }

    int mn = INF;
    int mx = -INF;

    foreach(v, i)
    {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }

    int ans = mx + mn;
    cout << toStr(Result =) << ' ' << ans;

    return 0;

}
