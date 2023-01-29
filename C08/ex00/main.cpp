#include "easyfind.hpp"
#include <iterator>

/*int main()
    {
        std::array<int, 5> arr = {10, 20, 30, 40, 50};
        std::array<int, 5>::iterator it;

        std::cout << "array: [ ";
        for (it = arr.begin(); it != arr.end(); it++) {
            std::cout << *it << " ";
        }
        std::cout << "]" << std::endl;
        try {
            *it = easyfind(arr, 10);
            std::cout << *it << std::endl;
            *it = easyfind(arr, 84);
        }
        catch(const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }*/

int main()
{
    std::vector<float> vect;

    vect.push_back(1);
    vect.push_back(5);
    vect.push_back(8.5);
    vect.push_back(3);
    vect.push_back(22);
    vect.push_back(0);
    vect.push_back(6);
    vect.push_back(6);
    vect.push_back(88);
    try
    {
        /* code */
        std::cout << easyfind(vect, 88)<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}