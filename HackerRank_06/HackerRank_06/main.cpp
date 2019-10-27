//
//  main.cpp
//  HackerRank_06
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
    
    int getLength();
    int getBreadth();
    int getHeight();
    
    long long CalculateVolume();
    bool operator<(const Box&);
    friend ostream& operator<<(ostream& out, const Box& box);
};

int Box::getLength()
{
    return _length;
}

int Box::getBreadth()
{
    return _breadth;
}

int Box::getHeight()
{
    return _height;
}

long long Box::CalculateVolume()
{
    return (long long)_length * _breadth * _height;
}

bool Box::operator<(const Box& box)
{
    if((this->_length < box._length) || (this->_breadth < box._breadth && this->_length == box._breadth) || (this->_height < box._height && this->_breadth == box._breadth && this->_length == box._length))
    {
        return true;
    }
    else
    {
        return false;
    }
}
       
ostream& operator<<(ostream& out, const Box& box)
{
    out << box._length << " " << box._breadth << " " << box._height;
    return out;
}


void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    check2();
}
