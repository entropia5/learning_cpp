// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float flt;
    int32_t sgn;
    int32_t unsgn;

   flt = - 2.55; 
   sgn = flt;
   sgn = unsgn;

    std::cout << "float: " << flt << std::endl;
    std::cout << "int32: " <<sgn << std::endl;
    std::cout << "uint32: " <<unsgn<< std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
