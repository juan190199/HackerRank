//
//  main.cpp
//  HackerRank_14
//
//  Created by Juan on 24.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <deque>
#include <algorithm>

#include <iomanip>
using namespace std;


//void printKMax(int arr[], int n, int k)
//{
//    deque<int> deq;
//    deque<int> maxs;
//    int max = 0;
//
//    for(int j = 0; j < k; j++)
//    {
//        deq.push_back(arr[j]);
//    }
//
//    for(int i = k; i <= n; i++)
//    {
//        for(int l = 0; l < k; l++)
//        {
//            if(max < deq[l])
//                max = deq[l];
//        }
//
//        maxs.push_back(max);
//        max = 0;
//        deq.pop_front();
//        deq.push_back(arr[i]);
//    }
//
//    for(int r = 0; r < maxs.size(); r++)
//    {
//        cout << maxs[r] << " ";
//    }
//}

int max(deque<int> myDeque)
{

    int max = myDeque[0];
    for (int i = 0; i < myDeque.size(); i++)
    {
        if(max < myDeque[i])
        {
            max = myDeque[i];
        }
    }
    return max;
}

void printKMax(int arr[], int n, int k)
{
    deque<int> myDeque;
    int maxActual;
    
    for (int i = 0; i < k; i++)
    {
        myDeque.push_back(arr[i]);
    }
    
    maxActual = max(myDeque);
    
    cout << maxActual << " ";
    
    for(int i = 0; i < n - k; i++)
    {
        if(maxActual != myDeque.front() && maxActual > arr[i+k])
        {
            cout << maxActual << " ";
            myDeque.pop_front();
            myDeque.push_back(arr[i+k]);
        }
        else if(maxActual!= myDeque.front() && maxActual < arr[i+k]){
            maxActual = arr[i+k];
            cout << maxActual << " ";
            myDeque.pop_front();
            myDeque.push_back(arr[i+k]);
        }
        else{
            myDeque.pop_front();
            myDeque.push_back(arr[i+k]);
            maxActual =  max(myDeque);
            cout << maxActual << " ";
        }
    }
    cout << endl;
}





int main()
{
//    int num;
//    cin >> num;
//    set<int> st;
//
//    for(int i = 0; i < num; i++)
//    {
//        int type, number;
//        cin >> type >> number;
//        set<int>::iterator itr = st.find(number);
//        switch(type)
//        {
//            case 1:
//                st.insert(number);
//                break;
//            case 2:
//                if(itr == st.end())
//                    break;
//                else
//                {
//                    st.erase(number);
//                    break;
//                }
//            case 3:
//                if(itr == st.end())
//                    cout << "No" << endl;
//                else
//                    cout << "Yes" << endl;
//            default:
//                break;
//        }
//    }
    
    
    
    
//    int num, mark, type;
//    map<string, int> mp;
//    string name;
//
//    cin >> num;
//
//
//    for(int i = 0; i < num; i++)
//    {
//        cin >> type;
//        cin >> name;
//
//        map<string, int>::iterator itr = mp.find(name);
//
//        switch(type)
//           {
//               case 1:
//                   cin >> mark;
//                   if(itr == mp.end())
//                       mp.insert(make_pair(name, mark));
//                   else
//                       mp[name] += mark;
//                   break;
//               case 2:
//                   if(itr == mp.end())
//                       break;
//                   else
//                   {
//                       mp.erase(name);
//                       break;
//                   }
//               case 3:
//                   if(itr == mp.end())
//                   {
//                       cout << 0 << endl;
//                   }
//                   else
//                   {
//                       cout << mp[name] << endl;
//                   }
//                   break;
//
//               default:
//                   break;
//           }
//    }
   
    
    
//   int T; cin >> T;
//   cout << setiosflags(ios::uppercase);
//   cout << setw(0xf) << internal;
//   while(T--)
//   {
//       double A; cin >> A;
//       double B; cin >> B;
//       double C; cin >> C;
//
//       cout << hex << left << showbase << nouppercase;
//       cout << (long long) A << endl;
//
//       cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
//       cout << B << endl;
//
//       cout << scientific << uppercase << noshowpos << setprecision(9);
//       cout << C << endl;
//   }
    
    
    int t;
    cin >> t;
    while(t>0)
    {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    
    return 0;
}

