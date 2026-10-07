#include <iostream>
#include "Vehicle.h"
#include "Bike.h"
#include "Truck.h"

class IInterface {//With an interface, you MUST inherit this function from the derived class
    virtual void InterfaceFunction() = 0;
};

class AbstractClass {
public:
    virtual void AbstractFunction() = 0;//To create a pure virtual function (there is no code in the function), you add = 0
};

class DerivedFromAbstract : public AbstractClass, IInterface {
public:
    void AbstractFunction() override {};
    void InterfaceFunction() override {};
};

void CPPAbstract()
{
    //AbstractClass *ptr1 = new AbstractClass();
    //  Once we make the Abstract class pure virtual (by having at least one pure virtual function) then we cannot make an
    //  object from it anymore due to it being an abstract class

    DerivedFromAbstract *ptr2 = new DerivedFromAbstract();//Now this gave errors from making the base class abstract due to
    //  the fact that we hadn't overrided the pure virtual function in our derived class yet. So once we did that then the 
    //  error went away

    //ptr1->AbstractFunction();
    ptr2->AbstractFunction();
}