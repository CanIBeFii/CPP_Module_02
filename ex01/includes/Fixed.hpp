#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed( void );
		Fixed( const int intValue );
		Fixed( const float floatValue );
		Fixed( Fixed &copy );
		Fixed& operator=( Fixed const &copy );
		~Fixed( void );
	
		float	toFloat( void );
		int		toInt( void );

		int		getRawBits( void ) const ;
		void	setRawBits( int const raw );

	private:
		int					_rawValue;
		static const int	_fractionalBits = 8;
};

std::ostream & operator << (std::ostream &out, Fixed const &f);

#endif 