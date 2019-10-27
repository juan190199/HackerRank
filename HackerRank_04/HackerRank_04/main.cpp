//
//  main.cpp
//  HackerRank_04
//
//  Created by Juan on 18.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student
{
private:
    int _scores[5];
    static int _best_grades;
public:
    Student() {}
    void input();
    int calculateTotalScore();
};

int Student::calculateTotalScore()
{
    int temp = 0;
    for(int i = 0; i < 5; i++)
    {
       temp = this->_scores[i] + temp;
    }
    return temp;
}

void Student::input()
{
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        (*this)._scores[i] = arr[i];
    }
}



int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
