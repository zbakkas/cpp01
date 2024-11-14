#include <iostream>
#include <fstream>


int main(int arc,char ** arv)
{
    if(arc!=4)
    {
        std::cout<<"bad args";
        return 1;
    }
    std::string filename =arv[1];
    std::string filenametwo;
    std::string s1 =arv[2];
    std::string s2=arv[3];
    std::fstream fileone;
    std::fstream filetwo;

    int positionn =0;
    std::string buffer;

    // std::cout<< "[.] Enter The FileName: ";
    // std::getline(std::cin, filename);
    fileone.open(filename,std::fstream::in);
    if(!fileone.is_open())
    {
        std::cout<< filename<<"is not open\n";
        return 0;
    }
    
    positionn =filename.find_last_of('.');
    filenametwo = filename.substr(0,positionn)+".replace";
    filetwo.open(filenametwo,std::fstream::out);

    if(!filetwo.is_open() )
    {
        std::cout<< filenametwo<<" is not open\n";
        return 0;
    }
    // while (s1.empty() )
    // {
    //     std::cout << "[.] Enter The String1: ";
    //     std::getline(std::cin, s1);
    // }
    if(std::cin.eof())
        exit(0);
    
    // while (s2.empty())
    // {
    // std::cout << "[.] Enter The String2: ";
    //     std::getline(std::cin, s2);
    // }
    if(std::cin.eof())
        exit(0);
    // if(s2==s1)
    //     return 1;

    while (std::getline(fileone,buffer,'\n'))
    {
        // std::cout<< buffer<< "\n";
        size_t i =0;
        // size_t pos =0;
        std::string str;
        str = buffer;
        while (s2 != s1 && (i = buffer.find(s1) )!= std::string::npos)
        {
            //te teerminating with uncaught
            // buffer =buffer.substr(0,i)+buffer.substr(i+s1.length(),buffer.length());
           str =  buffer.substr(0,i)+s2 + buffer.substr(i+s1.length(),buffer.length());
           buffer = buffer.substr(i+s1.length(),buffer.length());
        //    std::cout << buffer<<"\n";

            // std::cout<< buffer<< "\n";
        }
            filetwo<< str <<"\n";
    }


}