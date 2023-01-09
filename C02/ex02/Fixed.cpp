

#include "Fixed.hpp"

const int	Fixed::nbfrac = 8;

Fixed::Fixed(void): fixedvalue(0)
{
}

Fixed::Fixed(const int value) {
	fixedvalue = (value << 8);
}

Fixed::Fixed(const float f){
	fixedvalue = roundf(f * (1 << nbfrac));
}

int Fixed::toInt() const {
    return fixedvalue >> nbfrac;
}

float Fixed::toFloat() const {
    return (float)fixedvalue / (1 << nbfrac);
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(Fixed const & copy)
{
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	this->fixedvalue = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedvalue);
}

void	Fixed::setRawBits(const int rawbits)
{
	this->fixedvalue = rawbits;
}

bool Fixed::operator>(Fixed const &nb) const {
	return this->fixedvalue > nb.fixedvalue;
}

bool Fixed::operator<(const Fixed &nb) const {
	return this->fixedvalue < nb.fixedvalue;
}

bool Fixed::operator>=(const Fixed &nb) const {
	return this->fixedvalue >= nb.fixedvalue;
}

bool Fixed::operator<=(const Fixed &nb) const {
	return this->fixedvalue <= nb.fixedvalue;
}

bool Fixed::operator==(const Fixed &nb) const {
	return this->getRawBits() == nb.getRawBits();
}

Fixed	&Fixed::operator++()
{
	this->fixedvalue++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->fixedvalue--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	aux;
	aux = *this;
	this->fixedvalue++;
	return (aux);
}

Fixed	Fixed::operator--(int)
{
	Fixed	aux;
	aux = *this;
	this->fixedvalue--;
	return (aux);
}

bool	Fixed::operator!=(const Fixed &val) const
{
	return (this->fixedvalue != val.fixedvalue);
}

Fixed Fixed::operator+(const Fixed &nbfixed) const {
	return Fixed(this->toFloat() + nbfixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &nbfixed) const {
	return Fixed(this->toFloat() - nbfixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &nbfixed) const {
	return Fixed(this->toFloat() * nbfixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &nbfixed) const {
	if (nbfixed > 0)
	return Fixed(this->toFloat() / nbfixed.toFloat());
	else
	throw std::runtime_error("must be longer than 0");
}

Fixed &Fixed::min(Fixed &n1, Fixed &n2) {
	if(n1.fixedvalue < n2.fixedvalue)
	return n1;
	else
	return n2;
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2) {
	if(n1.fixedvalue < n2.fixedvalue)
	return n1;
	else
	return n2;
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2) {
	if(n1.fixedvalue > n2.fixedvalue)
	return n1;
	else
	return n2;
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2) {
	if(n1.fixedvalue > n2.fixedvalue)
		return n1;
	else
		return n2;
}

std::ostream	&operator<<(std::ostream &output, Fixed const &fixed_nbr)
{
	output << fixed_nbr.toFloat();
	return (output);
}
