#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
		Fixed( void );
		Fixed( const int intValue );
		Fixed( const float floatValue );
		Fixed( const Fixed &copy );
		Fixed& operator=( Fixed const &copy );
		~Fixed( void );
	
		float	toFloat( void ) const ;
		int		toInt( void ) const ;

		int		getRawBits( void ) const ;
		void	setRawBits( int const raw );

		// Comparison Operators

		int	operator > ( const Fixed &f ) const ;
		int operator < ( const Fixed &f ) const ;
		int operator >= ( const Fixed &f ) const ;
		int operator <= ( const Fixed &f ) const ;
		int operator == ( const Fixed &f ) const ;
		int operator != ( const Fixed &f ) const ;

		// Arithmetic Operators

		Fixed	operator + ( const Fixed &f ) const ;
		Fixed	operator - ( const Fixed &f ) const ;
		Fixed	operator * ( const Fixed &f ) const ;
		Fixed	operator / ( const Fixed &f ) const ;

		// Pre-Increment/Pre-Decrement Operators

		Fixed	operator ++ ( void );
		Fixed	operator -- ( void );

		// Pos-Increment/Pos-Decrement Operators

		Fixed	operator ++ ( int );
		Fixed	operator -- ( int );

		// Min and Max Functions

		static Fixed	&min( Fixed &f1, Fixed &f2 );
		static Fixed	&min( const Fixed &f1, const Fixed &f2 );
		static Fixed	&max( Fixed &f1, Fixed &f2 );
		static Fixed	&max( const Fixed &f1, const Fixed &f2 );

	private:
		int					_rawValue;
		static const int	_fractionalBits = 8;
};

std::ostream & operator << ( std::ostream &out, Fixed const &f );

#endif 

