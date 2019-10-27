//
//  main.cpp
//  HackerRank_09
//
//  Created by Juan on 19.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
private:
//    string _name;
//    int _age;

public:
//    Person(string name, int age) : _name(name), _age(age) {}
    virtual void putdata() = 0;
    virtual void getdata() = 0;
};


class Professor : public Person
{
private:
    string _name;
    int _age;
    int _publications;
    int _ID;
    static int _curID;
public:
//    Professor();
    void putdata();
    void getdata();
};


class Student : public Person
{
private:
    string _name;
    int _age;
    int _arr[6];
    int _ID;
    static int _curID;
public:
//    Student();
    void putdata();
    void getdata();
    int sumGrades();
};

int Professor::_curID = 1;
int Student::_curID = 1;

void Professor::getdata()
{
    cout << "Name: " << '\n';
    cin >> _name;
    
    cout << "Age: " << '\n';
    cin >> _age;
    
    cout << "Publications: " << '\n';
    cin >> _publications;
    
    _ID = _curID;
    _curID++;
}

void Professor::putdata()
{
    cout << _name << " " << _age << " " << _publications << " " << _ID << '\n';
}

void Student::getdata()
{
    cout << "Name: " << '\n';
    cin >> _name;
    
    cout << "Age: " << '\n';
    cin >> _age;
    
    cout << "Grades: " << '\n';
    for(int i = 0; i < 6; i++)
    {
        cin >> _arr[i];
    }
    
    _ID = _curID;
    _curID++;
}

int Student::sumGrades()
{
    int total = 0;
    for(int i = 0; i < 6; i++)
    {
        total = total + _arr[i];
    }
    return total;
}

void Student::putdata()
{
    cout << _name << " " << _age << " " << sumGrades() << " " << _ID << '\n';
}


int main()
{
    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++)
    {
        cin >> val;
        if(val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
        {
            per[i] = new Student; // Else the current object is of type Student
        }
        
        per[i]->getdata(); // Get the data from the user.
    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
