#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed( void );
		Fixed( const int intValue );
		Fixed( const float floatValue );
		Fixed( const Fixed& copy );
		Fixed& operator=( const Fixed &copy );
		~Fixed( void );
	
		float	toFloat( void ) const ;
		int		toInt( void ) const ;

		int		getRawBits( void ) const ;
		void	setRawBits( const int raw );
		
	private:
		int					_rawValue;
		static const int	_fractionalBits = 8;
};

std::ostream& operator << ( std::ostream& out, const Fixed& f );

#endif 
