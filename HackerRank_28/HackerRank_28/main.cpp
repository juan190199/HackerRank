//
//  main.cpp
//  HackerRank_28
//
//  Created by Juan on 31.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


struct Workshop
{
    int Start_Time;
    int Duration;
    int End_Time;
};

struct Available_Workshops
{
    int n;
    vector<Workshop> workshops;
};


Available_Workshops* initialize (int start_time[], int duration[], int n)
{
    Available_Workshops* ptr = new Available_Workshops;
    Workshop ws;
    
    ptr->n = n;
    for(int i = 0; i < n; i++)
    {
        ws.Start_Time = start_time[i];
        ws.Duration = duration[i];
        ws.End_Time = start_time[i] + duration[i];
        
        ptr->workshops.push_back(ws);
    }
    return ptr;
}

bool compare(Workshop w1, Workshop w2)
{
    return (w1.End_Time < w2.End_Time);
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{
    sort(ptr->workshops.begin(), ptr->workshops.end(), compare);
    
    int max = 0;
    int timing = 0;
    
    for(int i = 0; i < ptr->n; i++)
    {
        if(ptr->workshops[i].Start_Time >= timing)
        {
            timing = ptr->workshops[i].End_Time;
            max++;
        }
    }
    return max;
}




int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
