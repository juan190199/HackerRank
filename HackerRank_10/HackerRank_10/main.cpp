//
//  main.cpp
//  HackerRank_10
//
//  Created by Juan on 23.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node
{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val) : prev(p), next(n), key(k), value(val){};
   Node(int k, int val) : prev(NULL), next(NULL), key(k), value(val){};
};

class Cache
{
   
protected:
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};


class LRUCache : public Cache
{
private:
public:
    LRUCache(int capacity) { cp = capacity; }
    void set(int, int);
    int get(int);
    
};


void LRUCache::set(int key, int value)
{
    Node* newNode;
    
    if(mp.empty()) // No Nodes
    {
        newNode = new Node(key, value);
        head = tail = newNode;
        mp[key] = newNode;
        
        return;
    }
    
    auto it = mp.find(key);
    
    if(it != mp.end()) // Found it
    {
        it->second->value = value;
        
        if(head == it->second)
            return;
        
        it->second->prev->next = it->second->next;
        
        if(tail == it->second)
        {
            tail = tail->prev;
        }
        else
        {
            it->second->next->prev = it->second->prev;
        }
        
        it->second->next = head;
        it->second->prev = nullptr;
        head->prev = it->second;
        head = it->second;
//        mp[key] = value;
    }
    else
    {
        newNode = new Node(head->prev, head, key, value);
        head->prev = newNode;
        head = newNode;
        mp[key] = newNode;
        
        if(mp.size() > cp)
        {
            tail = tail->prev;
            mp.erase(tail->next->key);
            delete tail->next;
            tail->next = nullptr;
        }
    }
}



int LRUCache::get(int key)
{
    auto it = mp.find(key);
    if(it != mp.end())
        return it->second->value;
    
    return -1;
}



int main()
{
   int n, capacity, i;
   cin >> n >> capacity;
    
   LRUCache l(capacity);
    
   for(i = 0; i < n; i++)
   {
      string command;
      cin >> command;
      if(command == "get")
      {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      }
      else if(command == "set")
      {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
