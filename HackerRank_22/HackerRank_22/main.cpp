//
//  main.cpp
//  HackerRank_22
//
//  Created by Juan on 28.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include<iostream>

using namespace std;

class A
{
private:
    int callA;
    void inc() { callA++; }
    
protected:
    void func(int& a)
    {
        a = a * 2;
        inc();
    }
    
public:
    A() { callA = 0; }
    int getA() { return callA; }
};


class B
{
private:
    int callB;
    void inc() { callB++; }
    
protected:
    void func(int & a)
    {
        a = a * 3;
        inc();
    }
    
public:
    B() { callB = 0; }
    int getB() { return callB; }
};

class C
{
    
private:
    int callC;
    void inc(){ callC++; }
    
protected:
    void func(int & a)
    {
        a = a * 5;
        inc();
    }

public:
    C() { callC = 0; }
    int getC() { return callC; }
};

class D : public A, B, C
{
private:
    int val;
    
public:
    //Initially val is 1
    D() { val = 1; }
    
    //Implement this function
    void update_val(int new_val)
    {
        int a = new_val;
        while(a % 2 == 0)
        {
            a = a/2;
            A::func(val);
        }
        
        while(a % 3 == 0)
        {
            a = a/3;
            B::func(val);
        }
        
        while(a % 5 == 0)
        {
            a = a/5;
            C::func(val);
        }
    }
    //For Checking Purpose
    void check(int); //Do not delete this line.
};


void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}


int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);
}
