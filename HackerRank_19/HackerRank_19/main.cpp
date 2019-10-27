//
//  main.cpp
//  HackerRank_19
//
//  Created by Juan on 27.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle
{
public:
    void triangle(){ cout << "I am a triangle\n"; }
};

class Isosceles : public Triangle
{
public:
    void isosceles() { cout << "I am an isosceles triangle\n"; }
};

class Equilateral : public Isosceles
{
public:
    void equilateral() { cout << "I am an equilateral triangle\n"; }
};

int main()
{
    Equilateral eqr;
    eqr.equilateral();
    eqr.isosceles();
    eqr.triangle();
    
    return 0;
}
