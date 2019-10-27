//
//  main.cpp
//  HackerRank_02
//
//  Created by Juan on 17.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string _first_name;
    string _last_name;
    int _age;
    int _standard;
public:
    Student(string first_name, string last_name, int age, int standard); // Constructor
    
    void get_stud();
};

Student::Student(string first_name, string last_name, int age, int standard)
{
    _first_name = first_name;
    _last_name = last_name;
    _age = age;
    _standard = standard;
}

void Student::get_stud()
{
    cout << _age << "," << _first_name << "," << _last_name << "," << _standard << endl;
}



int main(int argc, const char * argv[])
{
    string str1, str2;
    int a, s;
    
    cout << "Give first name: " << '\t';
    cin >> str1;
    
    cout << "Give last name: " << '\t';
    cin >> str2;
    
    cout << "Give age: " << '\t';
    cin >> a;
    
    cout << "Give standard: " << '\t';
    cin >> s;
    
    Student stud(str1, str2, a, s);
    
    stud.get_stud();
    
    return 0;
}
