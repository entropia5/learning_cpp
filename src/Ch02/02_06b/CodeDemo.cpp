// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string> //строковый заголовочный файл
#include <cstdint> 

#define CAPACITY 5000
#define DEBUG

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG //добавим условные операторы #ifdef, они работают в сочетании с определенными директивами

    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small; //large = large + small; 
    std::cout << "The Large integer is " << large << std::endl;

   


    std::cout << std::endl << std::endl;
    return (0);
}
