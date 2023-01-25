#include "convert.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        convert v(argv[1]);
    }
    else
        std::cout<<"wrong arguments"<<std::endl;
}