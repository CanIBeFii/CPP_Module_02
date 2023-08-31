#include "Fixed.hpp"

Fixed::Fixed( void ) : _rawValue( 0 ) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int intValue) {
	std::cout << "Int value constructor called" << std::endl;

	_rawValue = intValue << _fractionalBits;
}

Fixed::Fixed( const float floatValue ) {
	std::cout << "Float value constructor called" << std::endl;

	_rawValue = round(floatValue * (1 << _fractionalBits));
}

Fixed::Fixed( const Fixed &copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	//_rawValue = copy.getRawBits();
}

Fixed & Fixed::operator = ( Fixed const &copy ) {
	std::cout << "Copy assigment operator called" <<std::endl;

	if ( this != &copy ) {
		this->_rawValue = copy.getRawBits();
	}
	return ( *this );
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::toInt( void ) const {
	return ( _rawValue >> _fractionalBits );
}

float	Fixed::toFloat( void ) const {
	return ( (float)_rawValue / (float)(1 << _fractionalBits) );
}

int		Fixed::getRawBits( void ) const {
	return ( _rawValue );
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRwBits member function called" << std::endl;

	_rawValue = raw;
}

std::ostream & operator << ( std::ostream &out, Fixed const &f ) {
	out << f.toFloat();
	return ( out );
}