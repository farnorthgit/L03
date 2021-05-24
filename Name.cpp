
//
// Created by Mark Billingsley on 5/18/21.
//

#include "Name.h"
#include <iostream>
using std::cout;
using std::endl;

Name::Name() {
    cout << "This is the default constructor." << endl;
    _x = 32;
}

Name::Name(const Name& original) {
    cout << "This is the copy constructor." << endl;
    _x = original._x;
}

Name::Name(int x) {
    cout << "This is the other constructor." << endl;
    _x = x;
}

Name::~Name() {
    cout << "Destructor called." << endl;
}

int Name::getAge() {
    return _x;
}



