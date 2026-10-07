#include <iostream>

// void func(std::string a, std::string b) {
//     std::cout << "non template function" << std::endl;
//     std::cout << "a: " << a << std::endl;
//     std::cout << "b: " << b << std::endl;
// }

//What if we want to do the same thing in func but for float, int, double, etc. We don't want to copy and make the same 
//  function over and over so that's where a template comes into effect

//template <typename T> -- same as below but an C way of writing it
template <class T>//T stands for any type
void func(T a, T b) {
    std::cout << "Template function" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
}
//At compile time, the compiler will see the below func calls for different types. So for each new type it finds that it hasn't
//  done this for already, it will recreate the function using the typename instead of T. Eg. if it comes along a 
//  func(int, int) call it will create the function declaration and definition using the int class instead of T. And do the 
//  same if it comes across double or std::string or any type

//If we have a function of the same name as the template wtih a specific type defined then the compiler will use that, rather
//  than use the template function
void func(int a, int b) {
    std::cout << "non template function" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
}

//Can add another class to a template as well tot take two different types
template <class T, class G>
void func(T a, G b) {
    std::cout << "Double Template function" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    // b = b + a; If we have this in and a call below passing in func(std::string, int) then it won't show any error until
    //  we try to compile because the code works fine, it's just the attempt and making an int result from a string and int
    //  will cause an issue.
}

void CPPTemplates() {
    int x = 0;
    int y = 0;
    func(x, y);
    func("hi", "world"); //These are const char*, string literal
    func(x, 'a');//This would call func(int, int) because chars are a number and so it can call that way, however once we 
    //  add the other template with class G as well, it will call that becuase it now recognizes the two types
}