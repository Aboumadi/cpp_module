#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout<<"Error: could not open file."<<std::endl;
        exit (EXIT_FAILURE);
    }
    std::ifstream infile;
    //need to verify the name
    infile.open(av[1]);
    if (!infile)
    {
        std::cout<<"Error: could not open file."<<std::endl;
        exit (EXIT_FAILURE);
    }
    BitcoinExchange btc;
    btc.reading_file(av[1]);
}