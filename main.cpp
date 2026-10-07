#include <iostream>

// Forward declare the functions that exist in separate files to keep things clean.

// CPPAbstract.cpp
void CPPAbstract();

//CPPDIamondPattern.cpp
void CPPDiamondPattern();

//CPPTemplates.cpp
void CPPTemplates();

// ConstructorDestructorExamples.cpp
void ConstructorDestructorExamples();
void CallingConstructors();

// VectorExamples.cpp
void VectorExamples();

int main()
{
    CPPTemplates();
    // CPPDiamondPattern();
    // CPPAbstract();

    // Invoke our Constructor/Destructor example
    //ConstructorDestructorExamples();
    //CallingConstructors();

    // Ivoke the Vector Example code that is in the VectorExamples.cpp file
    //VectorExamples();
    
    return 0;
}