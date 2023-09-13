#ifndef POINT_H
# define POINT_h

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

class	Point {
	public:
		Point( void );
		Point( float const xValue, float const yValue );
		Point( Point const &copy );
		Point &	operator=( Point const &copy );
		~Point( void );

		Fixed	getX( void ) const ;
		Fixed	getY( void ) const ;

		void	setX( Fixed const x );
		void	setY( Fixed const y );

	private:
		Fixed	_x;
		Fixed	_y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif
