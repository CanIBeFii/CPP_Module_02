#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed( void );
		Fixed( Fixed &copy );
		Fixed& operator=( Fixed const &copy );
		~Fixed( void );
	
		int		getRawBits( void ) const ;
		void	setRawBits( int const raw );

	private:
		int					_rawValue;
		static const int	_fractionalBits = 8;
};

#endif 