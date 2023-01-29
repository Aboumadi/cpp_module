#include "easyfind.hpp"
#include <iterator>

int main()
    {
        std::vector<int> vect;
        vect.push_back(1);
        vect.push_back(10);
        vect.push_back(15);
        vect.push_back(2);
        vect.push_back(8);
        vect.push_back(14);
        vect.push_back(4);
        try {
            int t = easyfind(vect, 4);
            std::cout << t << std::endl;
        }
        catch(const std::exception& e) {
            std::cout<< e.what() << std::endl;
        }
    }