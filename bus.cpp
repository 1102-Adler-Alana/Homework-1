//Author: Alana Adler
//Date: 9/14/2023
//Purpose: Homework 1: Transporting trains and busses.

template<class T>

Bus<T>::Bus(){

    personCount = 0;
    fare = 0.0;

}

template<class T>
Bus<T>::Bus(int pc, T arr, double f){

    personCount = pc;
    fare = f;

    for (int i = 0; i < pc; i++) {
        itemTypeArr[i] = arr[i];
    }
}

template<class T>
void Bus<T>::load(T passenger){

    if (personCount < MAX){

        itemTypeArr[personCount] = passenger;
        personCount++;

    }

    else {

        cout << "This bus is full! Please try again later." << endl;

    }

}


template<class T>
T Bus<T>::unload(){

    if (personCount > 0) {

        personCount--;

        return itemTypeArr[personCount];

    }

    return T();

}

template<class T>
void Bus<T>::empty(){

    personCount = 0;

}

template<class T>
void Bus<T>::move(){

    cout << "The bus has arrived at the next stop." << endl;

}

template<class T>
bool Bus<T>::isEmpty() const {

    if (personCount == 0){

        return true;

    }

    else { 
        
        return false;

    }

}

template<class T>
int Bus<T>::itemCount() const {

    return personCount;

}

//bubble sorting from CS 202

template<class T>
void Bus<T>::orderByHeight(){

T tempItemTypeArr[personCount];

for(int i = 0; i < personCount - 1; i++){
    for (int j = 0; j < personCount - i -1; j++){
        if(itemTypeArr[j] > itemTypeArr[j + 1] ) {

            tempItemTypeArr[j] = itemTypeArr[j];
            itemTypeArr[j] = itemTypeArr[j + 1];
            itemTypeArr[j + 1] = tempItemTypeArr[j];

            }
        }
    }
}


template<class T>
double Bus<T>::getFare (){

    return fare;

}

template<class T>
void Bus<T>::setFare(double fr){

    fare = fr;

}

template<class T>
int Bus<T>::calculateFare() const {

   return fare * personCount;

}