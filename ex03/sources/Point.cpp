#include "Point.hpp"

Point::Point( void ) : _x( 0 ), _y ( 0 ) {
	std::cout << "Point Default constructor called" << std::endl;
}

Point::Point( float const xValue, float const yValue ) : _x( xValue ), _y( yValue ) {
	std::cout << "Point float values constructor called" << std::endl;
}

Point::Point( Point const &copy ) {
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
	std::cout << "Deconstructo called" << std::endl;
}

Fixed	Point::getX( void ) const {
	return ( _x );
}

Fixed	Point::getY( void ) const {
	return ( _y );
}

void	Point::setX( Fixed const x ) {
	_x = x;
}

void	Point::setY( Fixed const y ) {
	_y = y;
}

