//
//  Train.h
//  CISB354 Project
//
//  Created by Leo's MBA on 14/5/15.
//  Copyright (c) 2015 Leo's MBA. All rights reserved.
//
#ifndef CISB354_Project_Train_h
#define CISB354_Project_Train_h
using namespace std;

class Train{
public:
    //constructor
    Train(string, string, string, int, bool);
    //set Train information
    void setTrain(string, string, string, int, bool);
    //get Train information
    Train getTrain();
    Train searchTrain(string);
    
    bool determineSeatFull();
    
private:
    string trainID;
    string DestinationStation;
    string DepartureStation;
    int numOfTrain;
    bool fullOrNot;
    vector<Train>tlist;
    vector<bool>seat;
};

#endif
