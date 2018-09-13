//Authors: Gavin Dacumos
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Variables

    char place, p;
    char adj, a;
    char adj2;
    char adj3;
    char noun, n;
    int integer, i;
    char pluralnoun, l;
    
    //Inputs
    char place;
    std::cout<<"Add a place:\n"<<std::endl;
    std::cin>>place;
    char adj;
    std::cout<<"Add an adjective ending with -er:\n"<<std::endl;
    std::cin>>adj;
    char pluralnoun;
    std::cout<<"Add a pl. noun:\n"<<std::endl;
    std::cin>>pluralnoun;
    char integer;
    std::cout<<"Add an integer:\n"<<std::endl;
    std::cin>>integer;
    int adj2;
    std::cout<<"Add an adjective:\n"<<std::endl;
    std::cin>>adj2;
    char adj3;
    std::cout<<"Add an adjective:\n"<<std::endl;
    std::cin>>adj3;
    char noun;
    std::cout<<"Add a noun:\n"<<std::endl;
    std::cin>>noun;

    //Print
 
    std::cout<<place<<std::endl;
    std::cout<<"is"<<adj<<std::endl;
    std::cout<<"now, since the"<<pluralnoun<<std::endl;
    std::cout<<"conquered it. What were we thinking, trying to fight back against"<<integer<<std::endl;
    std::cout<<"of those"<<adj2<<"things. Maybe things would be"<<adj3<<std::endl;
    std::cout<<"if we were more like the"<<noun<<std::endl;
           
    return 0;
}
