#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
//#include<cstring>

int main(int argc, char **argv)
{
    std::string str;
    int i;
    int s;
    std::ifstream infile;
    std::ofstream outfile;

    if (argc != 4 || !std::string(argv[2]).length() || !std::string(argv[3]).length())
    {
        std::cout << "error in params" << std::endl;
        return 0;
    }
    infile.open(argv[1]);
    if (infile.fail())
    {
        std::cout << "error in file" << std::endl;
        return 0;
    }
    outfile.open((std::string(argv[1]) + ".replace").c_str());
    while(getline(infile, str))
    {
        i = 0;
        s = 0;
        while (i != -1)
        {
            i = str.find(argv[2], s);
            if (i != -1 && (std::string(argv[2]) == std::string(argv[3])))
                s = i + std::string(argv[2]).length();
            if (i != -1 && (std::string(argv[2]) != std::string(argv[3])))
            {
                str.erase(i, std::string(argv[2]).length());
                str.insert(i, argv[3]);
            }
        }
        if (!infile.eof())
            str.append("\n");
        outfile << str;
    }
    infile.close();
    outfile.close();
}
