
#include "Harl.hpp"


void Harl::debug()
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "debug\n";
}
void Harl::info()
{
    std::cout << "[ INFO ]\n";
    std::cout << "info\n";
}
void Harl::warning()
{
    std::cout << "[ WARNING ]\n";
    std::cout << "warning\n";
}
void Harl::error()
{
    std::cout << "[ ERROR ]\n";
    std::cout << "error\n";
}

void Harl::complain(std::string level)
{

    //Function Pointer to Member Function
        //Syntax
    // return_type (ClassName::*pointer_name)(argument_types) = &ClassName::member_function;
    void(Harl::*cont[4])() = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};

    std::string str[4] ={"DEBUG","INFO","WARNING","ERROR"};
    int  i =0;
    while (str[i]!=level)
        i++;
    if(i>=4)
    {
        std::cout << "[ Probably complaining about insignificant problems ]";
        return ;
    }
    while(i<4)
        (this->*cont[i++])();

}