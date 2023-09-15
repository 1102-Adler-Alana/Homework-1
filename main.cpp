//Author: Alana Adler
//Date: 9/14/2023
//Purpose: Homework 1: Transporting trains and busses.

#include <iostream>

#include "people.h"
#include "train.h"
#include "cargo.h"
#include "bus.h"

using namespace std;

int main() {

    int personCount, cargoCount;

    Train<Cargo> cargoTrain;
    Bus<People> packTransit;

    People thing1("James", 7);
    People thing2("Jeffree", 6);
    People thing3("Patrick", 8);
    People thing4("Gary", 8);

    packTransit.load(thing1);
    packTransit.load(thing2);
    packTransit.load(thing3);

    Cargo cargo1("Bamboo", 50);
    Cargo cargo2("Gold", 100);
    Cargo cargo3("Diamond", 200);

    cargoTrain.load(cargo1);
    cargoTrain.load(cargo2);
    cargoTrain.load(cargo3);

    if (cargoTrain.isEmpty()) {
         
        cout << "The train is empty." << endl;

    } else {

        cout << "The train is not empty." << endl;
    }

    int totalWeight = cargoTrain.calculateWeight();
    cout << "The total cargo weight on the train is: " << totalWeight << " pounds! Wow!" << endl;

    cargoTrain.move();    

    packTransit.load(thing4);

    cout << "Welcome our new passenger: " << thing4.getName() << "!" << endl;


    if (packTransit.isEmpty()) {
         
        cout << "The transit is empty." << endl;

    } else {

        

        cout << "The transit is not empty, come on in!" << endl;
    }

    packTransit.orderByHeight();

    return 0;
}








