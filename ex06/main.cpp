
#include "Harl.hpp"

int main(int arc,char **arv)
{
    if(arc==2)
    {
        Harl harl;
        harl.complain(arv[1]);
    }
    else
    {
        std::cout<< "one arg\n";
    }
}