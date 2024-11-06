
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

    //Array of function pointers to private member functions
    void(Harl::*cont[4])() = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};

    std::string str[4] ={"DEBUG","INFO","WARNING","ERROR"};
    int  i =0;
    while (str[i]!=level)
    {
        i++;
    }
    while(i<4)
    {
        (this->*cont[i++])();
    }
    if(i>=4)
        return;
    std::cout << "[ Probably complaining about insignificant problems ]";

}