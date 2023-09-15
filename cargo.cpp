//Author: Alana Adler
//Date: 9/14/2023
//Purpose: Homework 1: Transporting trains and busses.


#include "cargo.h"

Cargo::Cargo() { 

    type = "";
    weight = 0;

}

Cargo::Cargo(const string t, double w){

    type = t;
    weight = w;

}

Cargo::Cargo(const Cargo& rhs) {

    type = rhs.type;
    weight = rhs.weight;

}

void Cargo::setType (string tp){

    type = tp;

}

string Cargo::getType() const{

    return type;

}

void Cargo::setWeight (double wt){

    weight = wt;

}

double Cargo::getWeight() const{

    return weight;

}

int Cargo::operator+(int rhs) const {

    int total;

    weight + rhs;

return total;

}