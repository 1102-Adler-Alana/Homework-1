//Author: Alana Adler
//Date: 9/14/2023
//Purpose: Homework 1: Transporting trains and busses.

#ifndef TRANSPORTER_INTERFACE
#define TRANSPORTER_INTERFACE

#include <iostream>

template <class T> 

    class Transporter {

        public:

        virtual void load(T) = 0;
        virtual T unload() = 0;
        virtual void empty() = 0;
        virtual void move() = 0;
        virtual bool isEmpty() const = 0;
        virtual int itemCount() const = 0;

};
#endif

