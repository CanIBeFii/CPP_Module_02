#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed( void );
		Fixed( const Fixed &copy );
		Fixed& operator=( const Fixed &copy );
		~Fixed( void );
	
		int		getRawBits( void ) const ;
		void	setRawBits( const int raw );

	private:
		int					_rawValue;
		const static int	_fractionalBits = 8;
};

#endif 