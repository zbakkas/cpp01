
#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string str;
    while (str.empty())
    {
        std::cout << "[.] Enter The String1: ";
        std::getline(std::cin, str);
    }
    harl.complain(str);
}