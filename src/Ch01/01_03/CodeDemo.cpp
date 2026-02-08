// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string> // чтобы получить строку от пользователя вкл заголовочный файл string

int main(){
    std::string str; //объявляем строковую переменную str и используем её для хранения пользовательского ввода. std::string — это тип, как int или double, только он хранит текст, а не число.
    
    std::cout << "Enter your name: " << std::flush;
    std::cin >> str; //для ввода. После того как юзер введет данные, они будут в str
    std::cout <<"Nice to meet you, "<< str << "!" << std::endl; //для вывода str

    std::cout << std::endl << std::endl;
    return (0);
}
