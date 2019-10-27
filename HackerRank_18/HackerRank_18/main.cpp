//
//  main.cpp
//  HackerRank_18
//
//  Created by Juan on 27.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
using namespace std;

class Rectangle
{
protected:
    int _width, _height;
    
public:
    virtual void display() { cout << _width << ' ' << _height << endl; }
    
};

class RactangleArea : public Rectangle
{
private:
    
public:
    void read_input();
    void display();
};

void RactangleArea::read_input()
{
    cin >> _width >> _height;
}

void RactangleArea::display()
{
    cout << _width * _height << endl;
}





int main(int argc, const char * argv[])
{
    return 0;
}
