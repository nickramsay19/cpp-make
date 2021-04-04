#include <iostream>
#include "funcs.cpp"
#include "../include/dog.h"

using namespace std;

int main() {
    dog* myDog = new dog();
    myDog->setHeight(4);

    cout << func(5,myDog->getHeight()) << endl;

    return 0;
}