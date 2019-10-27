//
//  main.cpp
//  HackerRank_05
//
//  Created by Juan on 18.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>

using namespace std;

class Box
{
private:
    int _length, _breadth, _height;
public:
    // Constructors
    Box() : _length(0), _breadth(0), _height(0) {}
    Box(int length, int breadth, int height) : _length(length), _breadth(breadth), _height(height) {}
    
    // Copy constructors
    Box(const Box& box) : _length(box._length), _breadth(box._breadth), _height(box._height) {};
    
    int getLength() const;
    int getBreadth() const;
    int getHeight() const;
    
    long long CalculateVolume();
    bool operator<(const Box&);
//    friend ostream& operator<<(ostream& out, const Box& box);
};

int Box::getLength() const
{
    return _length;
}

int Box::getBreadth() const
{
    return _breadth;
}

int Box::getHeight() const
{
    return _height;
}

long long Box::CalculateVolume()
{
    return _length * _breadth * _height;
}

bool Box::operator<(const Box& box)
{
    if((_length < box._length) || (_breadth < box._breadth && _length == box._breadth) || (_height < box._height && _breadth == box._breadth && _length == box._length))
    {
        return true;
    }
    else
    {
        return false;
    }
}


       
//ostream& operator<<(ostream& out, const Box& box)
//{
//    out << box._length << box._breadth << box._height << endl;
//    return out;
//}

ostream& operator<<(ostream& out, const Box& box)
{
    out << box.getLength() << box.getBreadth() << box.getHeight() << endl;
    return out;
}




int main(int argc, const char * argv[])
{

    return 0;
}
