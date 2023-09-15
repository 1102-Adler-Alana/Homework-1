//Author: Alana Adler
//Date: 9/14/2023
//Purpose: Homework 1: Transporting trains and busses.

template<class T>
Train<T>::Train(){

    cargoCount = 0;

}

template<class T>
Train<T>::Train(int cc, T* arr){

    cargoCount = cc;

    for (int i = 0; i < cc; i++) {
        itemTypeArr[i] = arr[i];
    }
}

template<class T>
void Train<T>::load(T totalCargo){

    if (cargoCount < MAX){

        itemTypeArr[cargoCount] = totalCargo;
        cargoCount++;

    }

    else {

        cout << "This train is at max capacity. Please try again later." << endl;

    }

}

template<class T>
T Train<T>::unload(){

    if (cargoCount > 0) {

        cargoCount--;

        return itemTypeArr[cargoCount];

    }

    return T();

}

template<class T>
void Train<T>::empty(){

    cargoCount = 0;

}

template<class T>
void Train<T>::move(){

    cout << "The train has arrived at it's next destination." << endl;

}

template<class T>
bool Train<T>::isEmpty() const {

    if (cargoCount == 0){

        return true;

    }

    else { 
        
        return false;

    }

}

template<class T>
int Train<T>::itemCount() const {

    return cargoCount;

}

template <class T>
int Train<T>::calculateWeight() {

    int totalWeight = 0;

    for(int i = 0; i < cargoCount; i++){

        totalWeight = itemTypeArr[i] + totalWeight;
    }

    return totalWeight;

}
