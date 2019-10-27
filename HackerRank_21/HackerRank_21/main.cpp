//
//  main.cpp
//  HackerRank_21
//
//  Created by Juan on 27.10.19.
//  Copyright © 2019 Juan. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message
{
private:
    string _text;
    int _id;
    static int _cur_id;
    
public:
    Message()
    {
        _id = _cur_id;
        _cur_id++;
    }
    
    Message(string text) : _text(text)
    {
        _id = _cur_id;
        _cur_id++;
    }
    
    const string& get_text() { return _text; }
    const int get_id() { return _id; }
    void set_text(const string& text) { _text = text; }
    
    friend bool operator < (Message message1, Message message2);
};

bool operator < (Message message1, Message message2)
{
    if(message1.get_id() < message2.get_id())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Message::_cur_id = 1;

class MessageFactory : public Message
{
private:
    vector<Message> _messages;
public:
    MessageFactory() {}
    
    Message create_message(const string& text)
    {
        Message newmessage(text);
        return newmessage;
    }
};

class Recipient
{
private:
    void fix_order()
    {
        sort(messages_.begin(), messages_.end());
    }
    
    vector<Message> messages_;
    
public:
    Recipient() {}
    void receive(const Message& msg)
    {
        messages_.push_back(msg);
    }
    void print_messages()
    {
        fix_order();
        for (auto& msg : messages_)
        {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }

};

class Network
{
public:
    static void send_messages(vector<Message> messages, Recipient& recipient)
    {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());
        for(auto msg : messages)
        {
            recipient.receive(msg);
        }
    }
};

int main()
{
    MessageFactory message_factory;
    Recipient recipient;
    
    vector<Message> messages;
    string text;
    
    while (getline(cin, text))
    {
        messages.push_back(message_factory.create_message(text));
    }
    
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}
