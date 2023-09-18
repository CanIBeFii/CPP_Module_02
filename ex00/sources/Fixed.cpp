#include "Fixed.hpp"

Fixed::Fixed( void ) : _rawValue( 0 ) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	//_rawValue = copy.getRawBits();
}

Fixed& Fixed::operator = ( const Fixed &copy ) {
	std::cout << "Copy assigment operator called" <<std::endl;

	if ( this != &copy ) {
		this->_rawValue = copy.getRawBits();
	}
	return ( *this );
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	
	return ( _rawValue );
}

void	Fixed::setRawBits( const int raw ) {
	std::cout << "setRwBits member function called" << std::endl;

	_rawValue = raw;
}