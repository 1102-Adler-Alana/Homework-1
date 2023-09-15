//Author: Alana Adler
//Date: 9/14/2023
//Purpose: Homework 1: Transporting trains and busses.

#include "people.h"

People::People() { 

    name = "";
    height = 0;

}

People::People(const string n, double h){

    name = n;
    height = h;

}

People::People(const People& rhs) {

    name = rhs.name;
    height = rhs.height;

}

void People::setName (string nm){

    name = nm;

}

string People::getName() const{

    return name;

}

void People::setHeight (double ht){

    height = ht;

}

double People::getHeight() const{

    return height;

}

bool People::operator<(const People& other) {
    
    return height < other.height;
}