//
//  main.cpp
//  HackerRank_32
//
//  Created by Juan on 13.11.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
#include <map>


using namespace std;


map<string, string> tagMap;

void createMap(int &N, string pretag)
{
    if(!N)
        return;
    
    string line;
    string tag;
    string attr;
    string value;
    
    getline(cin, line);
    
    int i = 1;
    if(line[i] == '/') // Closing tag
    {
        while(line[i] != '>')
            i++;
        if(pretag.size() > (i-2))
            tag = pretag.substr()
            
    }
    
    
    
}


int main(int argc, const char * argv[])
{
    int N, Q;
    cin >> N >> Q;
    
    
    
    
    
   
    
    return 0;
}
