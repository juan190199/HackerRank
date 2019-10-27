//
//  main.cpp
//  HackerRank_01
//
//  Created by Juan on 16.08.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;


int max_of_four(int a, int b, int c, int d)
{
    int List_of_numb[4] = {a, b, c, d};
    int max = List_of_numb[0];
    
    for(int i = 0; i <= 3; i++)
    {
        if(max < List_of_numb[i])
            max = List_of_numb[i];
    }
    
    return max;
}

int abs(int a)
{
    if(a >= 0)
    {
        return a;
    }
    else
    {
        return (-1)*a;
    }
}

void updating(int* a, int* b)
{
    int copy = *a;
    *a = copy + *b;
    *b = abs(copy - *b);
}

vector<int> parseInts(string str)
{
    stringstream ss(str);
    vector<int> out;
    
    char ch;
    int temp;
    
    while(ss>>temp)
    {
        out.push_back(temp);
        ss>>ch;
    }
    return out;
}

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main(int argc, const char * argv[])
{
//    // Challenge 1
//    cout << "Hello, World!\n" << endl;
//
//    // Challenge 2
//    int a, b, c;
//
//    cout << "Give 3 numbers: " << endl;
//    cin >> a;
//    cin >> b;
//    cin >> c;
//
//    int result = a + b + c;
//
//    cout << result << endl;
//
//    // Challenge 3
//    int numb;
//
//    cout << "Give a number: " << endl;
//    cin >> numb;
//
//    if(numb == 0)
//        cout << "zero" << endl;
//    else if (numb == 1)
//        cout << "one" << endl;
//    else if (numb == 2)
//        cout << "two" << endl;
//    else if (numb == 3)
//        cout << "three" << endl;
//    else if (numb == 4)
//        cout << "four" << endl;
//    else if (numb == 5)
//        cout << "five" << endl;
//    else if (numb == 6)
//        cout << "six" << endl;
//    else if (numb == 7)
//        cout << "seven" << endl;
//    else if (numb == 8)
//        cout << "eight" << endl;
//    else if (numb == 9)
//        cout << "nine" << endl;
//    else
//        cout << "Greater than 9" << endl;
//
//    // Challenge 4
//    int a, b;
//
//    cout << "Give 2 numbers: " << endl;
//
//    cin >> a;
//    cin >> b;
//
//    for(; a <= b; a++)
//    {
//        if(a > 9)
//        {
//            if(a % 2 == 0)
//                cout << "even" << endl;
//            else
//                cout << "odd" << endl;
//        }
//        else
//        {
//            switch(a)
//            {
//                case 1:
//                    cout << "one" << endl;
//                    break;
//                case 2:
//                    cout << "two" << endl;
//                    break;
//                case 3:
//                    cout << "three" << endl;
//                    break;
//                case 4:
//                    cout << "four" << endl;
//                    break;
//                case 5:
//                    cout << "five" << endl;
//                    break;
//                case 6:
//                    cout << "six" << endl;
//                    break;
//                case 7:
//                    cout << "seven" << endl;
//                    break;
//                case 8:
//                    cout << "eight" << endl;
//                    break;
//                case 9:
//                    cout << "nine" << endl;
//                    break;
//            }
//        }
//    }
//
//    // Challenge 5
//    int a, b, c, d;
//    cout << "Give 4 numbers: " << endl;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//
//    cout << max_of_four(a, b, c, d) << endl;
//
//    // Challenge 6
//    int a, b;
//    cout << "Give 2 numbers: " << endl;
//    scanf("%d %d", &a, &b);
//
//    updating(&a, &b);
//
//    printf("%d\n%d", a, b);
//
//    cout << endl;
//
//    // Challenge 7
//    int Number_Elem;
//    int Element;
//
//    cout << "Give number of elements: " << endl;
//    cin >> Number_Elem;
//
//    int List_of_Elements[Number_Elem];
//
//    for(int i = 0; i < Number_Elem; i++)
//    {
//        cout << "Give element: " << endl;
//        cin >> Element;
//        List_of_Elements[i] = Element;
//    }
//
//    for(int i = Number_Elem - 1; i >= 0; i--)
//    {
//        cout << List_of_Elements[i] << " ";
//    }
//
//    // Challenge 8
//    int n, q, size, value, i, j; // n = Length main array, q = Number of queries, size = Size SubVector, value = Element of SubVector, i = Position first vector, j = Position SubVector
//
//    cout << "Give length main array and number of queries: " << endl;
//    cin >> n >> q;
//
//    cout << "Length main array: " << n << ". Number of queries: " << q << endl;
//
//    vector<vector<int>> TwoDVector;
//
//    for(int z = 0; z < n; z++)
//    {
//        cout << "Give length SubVector and its elements: " << endl;
//        cin >> size;
//        vector<int> OneDVector;
//        for(int y = 0; y < size; y++)
//        {
//            cin >> value;
//            OneDVector.push_back(value);
//        }
//        TwoDVector.push_back(OneDVector);
//    }
//
//    for(int k = 0; k < q; k++)
//    {
//        cout << "Give querie" << endl;
//        cin >> i >> j;
//        cout << TwoDVector[i][j] << endl;
//    }
//    // Challenge 9
    
//    // Challenge 10
//    string str;
//    cin >> str;
//    vector<int> integers = parseInts(str);
//    for(int i = 0; i < integers.size(); i++)
//    {
//        cout << integers[i] << "\n";
//    }
//
//    // Challenge 11
//    string str_a, str_b;
//
//    cin >> str_a;
//    cin >> str_b;
//
//    int len_a = str_a.size();
//    int len_b = str_b.size();
//
//    cout << len_a << " " << len_b << endl;
//
//    string str_c = str_a + str_b;
//
//    char temp = str_a[0];
//    str_a[0] = str_b[0];
//    str_b[0] = temp;
//
//    cout << str_c << endl;
//    cout << str_a << " " << str_b << endl;
//
//    // Challenge 12
//    Student NewStudent;
//    cout << "Give age of student" << endl;
//    cin >> NewStudent.age;
//    cout << "Give first name of student" << endl;
//    cin >> NewStudent.first_name;
//    cout << "Give last name of student" << endl;
//    cin >> NewStudent.last_name;
//    cout << "Give standard of student" << endl;
//    cin >> NewStudent.standard;
//
//    cout << NewStudent.age << " " << NewStudent.first_name << " " << NewStudent.last_name << " " << NewStudent.standard << endl;
//
    return 0;
}
