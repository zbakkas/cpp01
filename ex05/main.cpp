
#include "Harl.hpp"

int main(int arc ,char **arv)
{
    if(arc!=2)
    {
        std::cout<<"bad args";
        return 1;
    }
    Harl harl;
    std::string str = arv[1];
    
    harl.complain(str);
}