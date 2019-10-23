//
//  Passenger.h
//  CISB354 Project
//
//  Created by Leo's MBA on 13/5/15.
//  Copyright (c) 2015 Leo's MBA. All rights reserved.
//
#include <vector>
#ifndef CISB354_Project_Passenger_h
#define CISB354_Project_Passenger_h
using namespace std;

class Passenger{
public:
    //Constructor Passenger, contain ID, name, password
    Passenger(string, string, string);
    
    //Functions to set Passenger information
    void setAccount(string, string, string);
    //Functions to get Passenger information
    string getPassengerName();
    string getPassengerID();
    //Functions to let client use
    void Registration();
    void printWelcomePage();
    
private:
    string passengerName;
    string passengerID;
    string passengerPassword;
    vector <Passenger>plist;
};

#endif
