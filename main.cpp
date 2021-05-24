#if 0
Write a program that uses your class from Lab 2 that reports when it is created, copied, and destroyed.
        In this program you should
    Create a raw pointer to a dynamically allocated object of your class. Is this object ever destroyed?
    Create a unique_ptr to an object of your class. Note when the object is created, and that it is eventually destroyed. This object should be created with your "other constructor," which takes a parameter.
    Transfer ownership of that object to a different unique_ptr. Note that the object itself is not copied.
    Demonstrate the calling of a member function of your object through the unique_ptr.
    Make a shared_ptr to a dynamically allocated object of your class.
    Make another shared_ptr that points at the same object. Note that the object does not get destroyed until both shared_ptrs go out of scope.
Before each step, print a line to the console explaining what you're doing, like "Creating raw pointer.", "Creating unique_ptr.", "Transferring ownership to new unique_ptr.", "Calling a member function.", "Creating shared_ptr.", "Creating another shared_ptr to the same object."
Be sure to use make_shared and make_unique, do not call the constructors for shared_ptr and unique_ptr directly.
#endif

#include <iostream>
#include <vector>
#include "Name.h"
using std::cout;
using std::endl;

int main() {
    cout << "Calling default constructor: ";
    Name timothy;
    cout << "Calling copy constructor: ";
    Name andrew = timothy;
    cout << "Calling other constructor: ";
    Name caroline(34);
    cout << "Calling getAge member function: ";
    cout << andrew.getAge() << endl;
    cout << "Constructing list of 5 names: ";
    std::vector<Name> list(5);
    cout << "Creating raw pointer to dynamically allocated memory for a Name object: ";
    auto *nPtr = new Name;
    delete nPtr;
    cout << "Creating unique_ptr: ";
    auto unique_nPtr = std::make_unique<Name> (74);
    cout << "Transferring ownership to new unique_ptr: Note that the object itself is not copied." << endl;
    auto unique_nPtr2 = std::move(unique_nPtr);
    cout << "Calling a member function: ";
    cout << unique_nPtr2->getAge() << endl;
    cout << "Creating shared_ptr: ";
    auto share_nPtrA = std::make_shared<Name> (97);
    cout << "Creating another shared_ptr to the same object: ";
    auto share_nPtrB = share_nPtrA;
    return 0;
}
