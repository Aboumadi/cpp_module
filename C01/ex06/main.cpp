#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl h;
    if (argc == 2)
    {
        h.complain(std::string(argv[1]));
        return 0;
    }
    std::cout << "false arguments" << std::endl;
    return 1;
    //h.complain("DEBUG");
    //h.complain("WARNING");
    //h.complain("INFO");
    //h.complain("ERROR");
}
