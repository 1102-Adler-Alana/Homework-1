//Author: Alana Adler
//Date: 9/14/2023
//Purpose: Homework 1: Transporting trains and busses.

#ifndef TRAIN_H
#define TRAIN_H

#include "transporter.h"

    template <class T> 
    
    class Train: public Transporter<T> {

        static const int MAX = 50;
        T itemTypeArr[MAX];
        int cargoCount;
    
    public:

        Train();
        Train(int, T*);
        
        virtual void load(T) override;
        virtual T unload() override;
        virtual void empty() override;
        virtual void move() override;
        virtual bool isEmpty() const override;
        virtual int itemCount() const override;

        int calculateWeight();
    

};

#include "train.cpp"

#endif