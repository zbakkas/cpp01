
#include "Harl.hpp"


void Harl::debug()
{
    std::cout << "===>debug";
}
void Harl::info()
{
    std::cout << "===>info";
}
void Harl::warning()
{
    std::cout << "===>warning";
}
void Harl::error()
{
    std::cout << "===>error";
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
    if(i<4 && level==str[i])
    {
        (this->*cont[i])();
        return;
    }
    std::cout << "[ Probably complaining about insignificant problems ]";

}