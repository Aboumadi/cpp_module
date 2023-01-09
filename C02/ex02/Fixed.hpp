#pragma once
# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					fixedvalue;
		static const int	nbfrac;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const &copy);
		Fixed(const int value);
		Fixed(const float f);
		int toInt() const;
		float toFloat() const;
		Fixed	&operator=(Fixed const &copy);
		int		getRawBits(void) const;
		void	setRawBits(int const rawbits);
		//Operators
		bool  operator>(Fixed const &nbfixed) const;
		bool  operator<(Fixed const &nbfixed) const;
		bool  operator>=(Fixed const &nbfixed) const;
		bool  operator<=(Fixed const &nbfixed) const;
		bool  operator==(Fixed const &nbfixed) const;
		bool  operator!=(const Fixed &copy) const;
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		Fixed operator+(const Fixed &nbfixed) const;
		Fixed operator-(const Fixed &nbfixed) const;
		Fixed operator*(const Fixed &nbfixed) const;
		Fixed operator/(const Fixed &nbfixed) const;
		static Fixed &min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &min(Fixed const &fixed1, Fixed const &fixed2);
		static Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &max(Fixed const &fixed1, Fixed const &fixed2);
};
	std::ostream &operator <<(std::ostream &str, Fixed const &fixed_nbr);

