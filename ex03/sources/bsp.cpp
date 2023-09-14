#include "Point.hpp"

float	absolute( float number ) {
	return ( number < 0 ? number * -1 : number );
}

float	trianguleArea( Point const a, Point const b, Point const c ) {
	return ( 0.5 * absolute((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()))
			+ (b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()))
			+ (c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat()))));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point ) {
	float	area1 = trianguleArea(a, b, point);
	float	area2 = trianguleArea(b, c, point);
	float	area3 = trianguleArea(a, c, point);
	float	areaOfTriangule = trianguleArea(a, b, c);

	if ( area1 == 0 || area2 == 0 || area3 == 0 ) {
		return ( false );
	}
	if ( area1 + area2 + area3 != areaOfTriangule ) {
		return ( false );
	}
	return ( true );
}