#include "Point.hpp"

Point::Point( void ) : _x( 0 ), _y ( 0 ) {
	// std::cout << "Point Default constructor called" << std::endl;
}

Point::Point( const float xValue, const float yValue ) : _x( xValue ), _y( yValue ) {
	// std::cout << "Point float values constructor called" << std::endl;
}

Point::Point( const Point& copy ) {
	setX( copy.getX() );
	setY( copy.getY() );
}

Point&	Point::operator=( const Point& copy ) {
	if ( this != &copy ) {
		setX( copy.getX() );
		setY( copy.getY() );
	}
	return ( *this );
}


Point::~Point( void ) {
	// std::cout << "Deconstructor called" << std::endl;
}

Fixed	Point::getX( void ) const {
	return ( _x );
}

Fixed	Point::getY( void ) const {
	return ( _y );
}

void	Point::setX( const Fixed x ) {
	_x = x;
}

void	Point::setY( const Fixed y ) {
	_y = y;
}

