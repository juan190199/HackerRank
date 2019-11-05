//
//  main.cpp
//  HackerRank_26
//
//  Created by Juan on 30.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Matrix
{
private:
    
public:
    vector<vector<int>> a;
    Matrix() {}
    Matrix& operator+ (const Matrix& member);
};



Matrix& Matrix::operator+(const Matrix& member)
{
    
    for(int i = 0; i < this->a.size(); i++)
    {
        for(int j = 0; j < this->a[i].size(); j++)
        {
            this->a[i][j] = member.a[i][j] + this->a[i][j];
        }
    }
    
    return *this;
}

int main ()
{
   int cases, k;
   cin >> cases;
   for(k = 0; k < cases; k++)
   {
      Matrix x;
      Matrix y;
      Matrix result;
      int n, m, i, j;
      cin >> n >> m;
       
      for(i = 0; i < n; i++) // Iteration rows
      {
         vector<int> b;
         int num;
          
         for(j = 0; j < m; j++) // Iteration columns
         {
            cin >> num;
            b.push_back(num);
         }
          
         x.a.push_back(b);
      }
       
      for(i = 0; i < n; i++)
      {
         vector<int> b;
         int num;
          
         for(j = 0; j < m; j++)
         {
            cin >> num;
            b.push_back(num);
         }
          
         y.a.push_back(b);
      }
       
      result = x + y;
       
      for(i = 0; i < n; i++)
      {
         for(j = 0; j < m; j++)
         {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }
   return 0;
}
