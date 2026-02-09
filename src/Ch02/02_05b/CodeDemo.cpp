// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 
//Вывод типов... Это удобный способ создания переменной с типом который соответствует значению которые мы хотим присвоить переменной;
//только важно инициализировать переменную перед объявлением


#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 1234678901;
    auto c = 3.14f; //float
    auto d = 3.14; //double
    auto e = true; 
    auto f = 'd';
    auto g = "C++ rocks! ";

    std::cout<<"The type if a is " << typeid(a).name() << std::endl;
    std::cout<<"The type if b is " << typeid(b).name() << std::endl;
    std::cout<<"The type if c is " << typeid(c).name() << std::endl;
    std::cout<<"The type if d is " << typeid(d).name() << std::endl;
    std::cout<<"The type if e is " << typeid(e).name() << std::endl;
    std::cout<<"The type if f is " << typeid(f).name() << std::endl;
    std::cout<<"The type if g is " << typeid(g).name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
