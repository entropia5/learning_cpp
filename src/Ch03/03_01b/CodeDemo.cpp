// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pat};

//смоделировали корову с помощью структуры
/* struct cow {                                
    std::string name;
    int age;
    cow_purpose purpose;
};
*/
//классы структуры могут быть очень похожи
class cow {                  
public:              
    std::string name;
    int age;
    cow_purpose purpose;
};


int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    std::cout<< my_cow.name << " is a type-" << (int) my_cow.purpose << ' cow.' << std::endl;
    


    std::cout << std::endl << std::endl;
    return (0);
}
