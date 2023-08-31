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
	_rawValue = raw;
}

// Comparison Operators

int		Fixed::operator > ( const Fixed &f ) const {
	if ( this->toFloat() > f.toFloat() )
		return ( 1 );
	return ( 0 );
}

int		Fixed::operator < ( const Fixed &f ) const {
	if ( this->toFloat() < f.toFloat() )
		return ( 1 );
	return ( 0 );
}

int		Fixed::operator >= ( const Fixed &f ) const {
	if ( this->toFloat() >= f.toFloat() )
		return ( 1 );
	return ( 0 );
}

int		Fixed::operator <= ( const Fixed &f ) const {
	if ( this->toFloat() <= f.toFloat() )
		return ( 1 );
	return ( 0 );
}

int		Fixed::operator == ( const Fixed &f ) const {
	if ( this->toFloat() == f.toFloat() )
		return ( 1 );
	return ( 0 );
}

int		Fixed::operator != ( const Fixed &f ) const {
	if ( this->toFloat() != f.toFloat() )
		return ( 1 );
	return ( 0 );
}

// Arithmetic Operators

Fixed	Fixed::operator + ( const Fixed &f ) const {
	Fixed	newFixed( this->toFloat() + f.toFloat() );

	return ( newFixed );
}

Fixed	Fixed::operator - ( const Fixed &f ) const {
	Fixed newFixed( this->toFloat() - f.toFloat() );

	return ( newFixed );
}

Fixed	Fixed::operator * ( const Fixed &f ) const {
	Fixed	newFixed( this->toFloat() * f.toFloat() );

	return ( newFixed );
}

Fixed	Fixed::operator / ( const Fixed &f ) const {
	Fixed	newFixed( this->toFloat() / f.toFloat() );

	return ( newFixed );
}

// Pre-Increment/Pre-Decrement Operators

Fixed	Fixed::operator ++ ( void ) {
	Fixed	newFixed( *this );
	int		newRawBits;

	newRawBits = newFixed.getRawBits();
	newRawBits++;
	newFixed.setRawBits( newRawBits );
	return ( newFixed );
}

Fixed	Fixed::operator -- ( void ) {
	Fixed	newFixed( *this );
	int		newRawBits;

	newRawBits = newFixed.getRawBits();
	newRawBits++;
	newFixed.setRawBits( newRawBits );
	return ( newFixed );
}

// Pos-Increment/Pos-Decrement Operators

Fixed	Fixed::operator ++ ( int ) {
	Fixed	newFixed( *this );
	int		newRawBits;

	newRawBits = newFixed.getRawBits();
	++newRawBits;
	newFixed.setRawBits( newRawBits );
	return ( newFixed );
}

Fixed	Fixed::operator -- ( int ) {
	Fixed	newFixed( *this );
	int		newRawBits;

	newRawBits = newFixed.getRawBits();
	--newRawBits;
	newFixed.setRawBits( newRawBits );
	return ( newFixed );
}

// Min and Max Functions

Fixed	&Fixed::min( Fixed &f1, Fixed &f2 ) {
	return ( f1 < f2 ? f1 : f2);
}

Fixed	&Fixed::min( const Fixed &f1, const Fixed &f2 ) {
	return ( Fixed::min( (Fixed &)f1, (Fixed &)f2) );
}

Fixed	&Fixed::max( Fixed &f1, Fixed &f2 ) {
	return ( f1 < f2 ? f1 : f2);
}

Fixed	&Fixed::max( const Fixed &f1, const Fixed &f2 ) {
	return ( Fixed::max( (Fixed &)f1, (Fixed &)f2) );
}

std::ostream & operator << ( std::ostream &out, Fixed const &f ) {
	out << f.toFloat();
	return ( out );
}