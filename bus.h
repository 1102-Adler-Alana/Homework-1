//Author: Alana Adler
//Date: 9/14/2023
//Purpose: Homework 1: Transporting trains and busses.

#ifndef BUS_H
#define BUS_H

#include "transporter.h"

    template <class T> 
    
    class Bus: public Transporter<T> {

        //Referenced slides from 3_Review
        static const int MAX = 50;
        T itemTypeArr[MAX];
        int personCount;
        double fare;
    
    public:

        Bus();
        Bus(int, T, double);

        virtual void load(T) override;
        virtual T unload() override;
        virtual void empty() override;
        virtual void move() override;
        virtual bool isEmpty() const override;
        virtual int itemCount() const override;

        double getFare();
        void setFare(double);

        void orderByHeight();
        int calculateFare() const;

};

#include "bus.cpp"
#endif