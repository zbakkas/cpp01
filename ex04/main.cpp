#include <iostream>
#include <fstream>


int main()
{
    std::string filename;
    std::string filenametwo;
    std::string s1;
    std::string s2;
    std::fstream fileone;
    std::fstream filetwo;

    int positionn =0;
    std::string buffer;

    std::cout<< "[.] Enter The FileName: ";
    std::getline(std::cin, filename);
    fileone.open(filename,std::ios::in);
    if(!fileone.is_open())
    {
        std::cout<< filename<<"is not open\n";
        return 0;
    }
    
    positionn =filename.find_last_of('.');
    filenametwo = filename.substr(0,positionn)+".replace";
    filetwo.open(filenametwo,std::ios::out);

    if(!filetwo.is_open())
    {
        std::cout<< filenametwo<<"is not open\n";
        return 0;
    }
    while (s1.empty())
    {
    std::cout << "[.] Enter The String1: ";
        std::getline(std::cin, s1);
    }
    
    while (s2.empty())
    {
    std::cout << "[.] Enter The String2: ";
        std::getline(std::cin, s2);
    }
    
    // if(s2==s1)
    //     return 1;

    while (std::getline(fileone,buffer,'\n'))
    {
        // std::cout<< buffer<< "\n";
        size_t i =0;

        while (s2 != s1 && (i = buffer.find(s1,i) )!= std::string::npos)
        {
            std::cout<<"===>" <<buffer.substr(0,i)<< "\n";
            // i-=(s1.length()-1);
            buffer =buffer.substr(0,i)+s2+buffer.substr(i+s1.length(),buffer.length());
            // std::cout<< buffer<< "\n";
        }
        filetwo << buffer <<"\n";
        
    }


}