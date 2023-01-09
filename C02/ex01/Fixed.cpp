

#include "Fixed.hpp"

const int	Fixed::nbfrac = 8;

Fixed::Fixed(void): fixedvalue(0)
{
	std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	fixedvalue = (value << 8);
	//std::cout << fixedvalue << std::endl;
}

Fixed::Fixed(const float f){
	std::cout << "Float constructor called" << std::endl;
	fixedvalue = roundf(f * (1 << nbfrac));
    //std::cout << fixedvalue << std::endl;
}

int Fixed::toInt() const {
    return fixedvalue >> nbfrac;
}

float Fixed::toFloat() const {
    //std::cout << fixedvalue << std::endl;
    return (float)fixedvalue / (1 << nbfrac);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl; 
}

Fixed::Fixed(Fixed const & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "assignment operator called" << std::endl;
	this->fixedvalue = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedvalue);
}

void	Fixed::setRawBits(const int rawbits)
{
	this->fixedvalue = rawbits;
}

std::ostream	&operator<<(std::ostream &output, Fixed const &fixed_nbr)
{
	output << fixed_nbr.toFloat();
	return (output);
}
