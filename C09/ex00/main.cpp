#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout<<"Bad Arguments..."<<std::endl;
        exit (EXIT_FAILURE);
    }
    std::ifstream infile;
    infile.open(av[1]);
    if (!infile)
    {
        std::cout<<"File Not Found.."<<std::endl;
        exit (EXIT_FAILURE);
    }
    BitcoinExchange();
    BitcoinExchange bit(av[1]);
}