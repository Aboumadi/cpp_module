#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream file("data.csv");
    std::string   line;
    std::string   value;
    
    if(!file.is_open())
    {
        std::cout << "Error : Data Not Found" << std::endl;
		exit(EXIT_FAILURE);
    }
    while (std::getline(file, line))
    {
        int pos = line.find(",");
        std::string date = line.substr(0, pos);
        value = line.substr(pos + 1);
        double val = std::atof(value.c_str());
        btc.insert(std::pair<std::string,double>(date, val));
    }
    file.close();
    std::map<std::string, double>::iterator it;
    it = btc.begin();
}

BitcoinExchange::~BitcoinExchange()
{
}

void    BitcoinExchange::reading_file(char *infile)
{
    std::ifstream file (infile);
    std::string   line;
    std::string   date;
    std::string   value;

    if(!file.is_open())
    {
        std::cout << "File Not Found" << std::endl;
		exit(EXIT_FAILURE);
    }
    std::map<std::string, double>::iterator it;
    getline(file, line);
    if (line == "date | value")
    {
        while (getline(file, line))
        {
            size_t pos = line.find(" | ");
            if (pos == std::string::npos)
	    	{
	    		std::cout << "Error: bad input => " <<line<< std::endl;
	    		continue;
	    	}
            date = line.substr(0, pos);
            value = line.substr(pos + 3);
            double  v = 0;
            if (!ft_check_date(date))
            {
                std::cout << "Error: bad input => "<< date <<  std::endl;
                continue;
            }
            if (!ft_check_value(value, &v))
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            else if (v < 0)
            {
                std::cout << "Error: not a positive number."<< std::endl;
                continue;
            }
            else if(v > 1000)
            {
                std::cout << "Error: too large a number."<< std::endl;
                continue;
            }
            it = btc.lower_bound(date);
            if (it->first != date && it != btc.begin())
                --it;
            std::cout<<date << " => " << v << " = " << it->second * v << std::endl;
        }
    }
    else
    {
        std::cout<<"Error: File without header"<<std::endl;
        exit (EXIT_FAILURE);
    }
}

bool    BitcoinExchange::ft_check_date(std::string date)
{
    int year;
    int month;
    int day;
    int i;
    int j;
    int k;
    int c;

    i = 0;
    k = 0;
    while (date[i] != '-' && date[i])
    {
        if (!std::isdigit(date[i]))
            return false;
        i++;
        k++;
    }
    if (k == 4)
        year = std::atoi(date.substr(0, i).c_str());
    else
        return false;
    i++;
    j = i;
    k = 0;
    c = 0;
    while (date[k++])
        if (date[k] == '-')
            c++;
    if (c != 2)
        return false;
    k = 0;
    while (date[i] != '-' && date[i])
    {
        if (!std::isdigit(date[i]))
            return false;
        i++;
        k++;
    }
    if (k == 2)
        month = std::atoi(date.substr(j, i).c_str());
    else
        return false;
    i++;
    j = i;
    k = 0;
    while (date[i] != '-' && date[i])
    {
        if (!std::isdigit(date[i]))
            return false;
        i++;
        k++;
    }
    if (k == 2)
        day = std::atoi(date.substr(j, i).c_str());
    else
        return false;
    if (!ft_is_valid(year, month, day))
    {
        return false;
    }
    return true;
}

bool    BitcoinExchange::ft_check_value(std::string value, double *val)
{
    int i;
    int pt;
    int mn;

    i = 0;
    pt = 0;
    mn = 0;
    if (!value[i])
        return false;
    // if (value[i] == '-' && std::isdigit(value[i + 1]))
    //     mn++;
    // else
    //     mn++;
    i = -1;
    while (value[++i])
    {
        if (value[0] == '-' && i == 0)
            continue;
        if (value[i] == '.')
        {
            pt++;
            continue;
        }
        if (!std::isdigit(value[i]))
            return false;
    }
    if (pt >= 2)
        return false;
    i = 0;
    while (value[i])
    {
        if (!std::isdigit(value[i]) && value[i] != '.' && value[i] != '-')
            return false;
        i++;
    }
    *val = std::atof(value.c_str());
    return (true);
}

bool    BitcoinExchange::ft_is_valid(int year, int month, int day)
{
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;
    if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30) {
			return false;
		}
	}
    else if (month == 2)
    {
        if (year % 4 == 0)
        {
            if (day > 29)
                return false;
        }
        else
            if (day > 28)
                return false;
    }
    return true;
}
