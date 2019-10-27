//
//  main.cpp
//  HackerRank_03
//
//  Created by Juan on 17.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>

using namespace std;

class Student
{
private:
    int _scores[5];
    static int _best_grades;
public:
    Student(int array[]);
    int totalscore();
};

int Student::totalscore()
{
    int temp = 0;
    for(int i = 0; i < 5; i++)
    {
       temp = this->_scores[i] + temp;
    }
    return temp;
}


int main(int argc, const char * argv[])
{
    int num;
    cout << "Give number of students: " << endl;
    cin >> num;
    
    Student* stud[num];
    for(int k = 0; k < num; k++)
    {
        int scores[5];
        for(int i = 0; i < 5; i++)
        {
            cout << "Give score: " << endl;
            cin >> scores[i];
        }
        stud[k] = new Student(scores);
    }

    int count = 0;
    for(int i = 2; i < num; i++)
    {
        if((*stud[i]).totalscore() > (*stud[1]).totalscore())
        {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
