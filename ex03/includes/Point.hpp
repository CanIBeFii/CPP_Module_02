#ifndef POINT_HPP
# define POINT_HPP

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

class	Point {
	public:
		Point( void );
		Point( const float xValue, const float yValue );
		Point( Point const &copy );
		Point&	operator=( const Point& copy );
		~Point( void );

		Fixed	getX( void ) const ;
		Fixed	getY( void ) const ;

		void	setX( const Fixed x );
		void	setY( const Fixed y );

	private:
		Fixed	_x;
		Fixed	_y;
};

bool	bsp( const Point a, const Point b, const Point c, const Point point );

#endif
