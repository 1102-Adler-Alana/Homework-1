//Author: Alana Adler
//Date: 9/14/2023
//Purpose: Homework 1: Transporting trains and busses.

#ifndef CARGO_H
#define CARGO_H

#include <iostream>

using namespace std;

class Cargo {

    private:

    string type;
    double weight;

    public:

        Cargo();
        Cargo(const string, double);
        Cargo(const Cargo&);

        void setType (string);
        string getType() const;

        void setWeight (double);
        double getWeight () const;

        int operator+(int rhs) const;

};

#endif