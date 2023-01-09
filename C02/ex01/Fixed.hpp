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
};
	std::ostream &operator <<(std::ostream &str, Fixed const &fixed_nbr);

