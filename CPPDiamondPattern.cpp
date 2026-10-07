#include <iostream>

class A {
public:
    int a_value = 0;
};

class B : public A {
public:
    int b_value = 0;
};

class C : public A {
public:
    int c_value = 0;
};

class D : public B, C {
public:
    int d_value = 0;
};

void CPPDiamondPattern() {
    D *ptr = new D();
    //ptr->a_value = 5;//This causes an error saying D::a_value is ambiguous because we can access a_value through the B 
    //  inheritance or through the C inheritance
    //Can work around by casting to B or C
    ((C*)ptr)->a_value = 5;
    //This also works but not for C for some reason
    ptr->B::a_value = 3;

    CPPDiamondPattern();
    delete ptr;
}

//This creates a thing called a diamond pattern which is dangerous
/*
            A
           / \
          /   \
         B     C
          \   /
           \ /
            D
Each classs has their own letter_value, we can see that D inherits 2 different A values

The compiler (?) doesn't look at it like a diamond but breaks it up into this:

        A      A
        |      |
        |      |
        B     C
         \   /
          \ /
           D

*/


