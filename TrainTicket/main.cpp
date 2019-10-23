//
//  main.cpp
//  CISB354 Project
//
//  Created by Leo's MBA on 13/5/15.
//  Copyright (c) 2015 Leo's MBA. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "Passenger.h"
#include "Train.h"

using namespace std;

void Registration(vector <Passenger>list)
{
    string p_N, p_ID, p_PW;
    
    Passenger *f1;
    
    cout << "Please Enter Your Name: ";
    cin >> p_N;
    cout << "Please Enter Your ID: ";
    cin >> p_ID;
    cout << "Please Set Up Your Password(should be less than 12 letters and at least a capital letter): ";
    cin >> p_PW;
    
    f1 = new Passenger(p_N, p_ID, p_PW);
    cout << "your account ID is :" << f1->getPassengerID() << endl;
    cout << "your account Name is :" << f1->getPassengerName()<< endl;
    list.push_back(*f1);
}

void Login(vector <Passenger>list)
{
    string input_ID;
    string input_Password;
    
    cout << "ID: ";
    cin >> input_ID;
    cout << endl;
    cout << "Password:";
    cin >> input_Password;
    cout << endl;
    
    
}

void BookTicketSystem(vector <Passenger>plist, vector<Train>tlist)
{
    int i = 0;
    cout << " ***********Welcome to the Railway Ticket System!********** " << endl;
    cout << "Choose the Operation that you like to take:" << endl;
    cout << "1. Registration" << endl;
    cout << "2. Login" << endl;
    cin >> i;
    if (i == 1){
        Registration(plist);
    }
    else if(i == 2){
        Login(plist);
    }
    
}

int main()
{
    vector <Passenger>plist;
    vector <Train>tlist;
    vector<bool>seat(20, 0);
    BookTicketSystem(plist,tlist);
}