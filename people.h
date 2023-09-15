//Author: Alana Adler
//Date: 9/14/2023
//Purpose: Homework 1: Transporting trains and busses.

#ifndef PEOPLE_H
#define PEOPLE_H

#include <iostream>

using namespace std;

class People {

    private:

    string name;
    double height;

    public:

        People();
        People(const string, double);
        People(const People&);

        void setName(string);
        string getName() const;

        void setHeight(double);
        double getHeight() const;
        
        bool operator<(const People& h);
};

#endif