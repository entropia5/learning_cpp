// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

//объявлю два символьных массива как в C и два строковых объекта как в C++ в main 
//Первый массив символов будет называться array_str1 и инициализирую его строковой константой 


int main(){
    const size_t LENGTH1 = 25;

    char array_str1 [LENGTH1] = "Hey! ";
    char array_str2 [] = "What's  up? ";

    std:: string std_str1 = "Hi! ";
    std:: string std_str2 = "How's the going?  ";

    strncat(array_str1, array_str2, LENGTH1);
    std::cout << array_str1 << std::endl; 
    std::cout << std_str1 + std_str2  << std::endl; 

    
    std::cout << std::endl << std::endl;
    return (0);
}
