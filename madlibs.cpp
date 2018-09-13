//Authors: Gavin Dacumos
#include <iostream>
#include <string>
using namespace std;

int main()
{

    //Variables and Inputs
    string place;
    std::cout<<"Add a place:\n"<<std::endl;
    std::cin>>place;
    string adj;
    std::cout<<"Add an adjective ending with -er:\n"<<std::endl;
    std::cin>>adj;
    string pluralnoun;
    std::cout<<"Add a pl. noun:\n"<<std::endl;
    std::cin>>pluralnoun;
    int integer;
    std::cout<<"Add an integer:\n"<<std::endl;
    std::cin>>integer;
    string adj2;
    std::cout<<"Add an adjective:\n"<<std::endl;
    std::cin>>adj2;
    string adj3;
    std::cout<<"Add an adjective ending with -er:\n"<<std::endl;
    std::cin>>adj3;
    string noun;
    std::cout<<"Add a noun:\n"<<std::endl;
    std::cin>>noun;

    //Print
 
    std::cout<<place<<" is "<<adj<<" now, since the "<<pluralnoun<<std::endl;
    std::cout<<" conquered it. What were we thinking, trying to fight back against "<<integer<<std::endl;
    std::cout<<" of those "<<adj2<<" things. Maybe things would be "<<adj3<<std::endl;
    std::cout<<" if we were more like the "<<noun<<std::endl;
           
    return 0;
}
