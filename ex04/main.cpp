#include <iostream>
#include <fstream>
// #include <string>


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
    std::cout << "[.] Enter The String1: ";
    std::getline(std::cin, s1);
    std::cout << "[.] Enter The String2: ";
    std::getline(std::cin, s2);

    while (std::getline(fileone,buffer,'\n'))
    {
        std::cout<< buffer<< "\n";
        size_t i =0;
        size_t j =0;
        while ((i = buffer.find(s1,i) )!= std::string::npos)
        {
            buffer =buffer.substr(0,i)+s2+buffer.substr(i+s2.length(),buffer.length());
        }
        filetwo<< buffer<<"\n";
        
    }
    

}