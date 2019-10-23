//
//  Passenger.cpp
//  CISB354 Project
//
//  Created by Leo's MBA on 14/5/15.
//  Copyright (c) 2015 Leo's MBA. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "Passenger.h"

using namespace std;

Passenger::Passenger(string passengerName, string passengerID, string passengerPassword)
{
    setAccount(passengerName, passengerID, passengerPassword);
}
//set Function
void Passenger::setAccount(string p_N, string p_ID, string p_PW)
{
    passengerName = p_N;
    passengerID = p_ID;
    passengerPassword = p_PW;
}
//get functions
string Passenger::getPassengerName()
{
    return passengerName;
}
string Passenger::getPassengerID()
{
    return passengerID;
}
//user functions
void Passenger::Registration()
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
    //cout << "your account ID is :" << f1->getPassengerID() << endl;
    //cout << "your account Name is :" << f1->getPassengerName()<< endl;
    list.push_back(*f1);
}
