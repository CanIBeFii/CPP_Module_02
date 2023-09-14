#include "Point.hpp"

int	main( void )
{
    if ( bsp( Point( 1, 1 ), Point( 6, 1 ), Point( 3, 4 ), Point( 3, 3 ) ) == true ) 
        std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;

    if ( bsp( Point( 1, 1 ), Point( 6, 1 ), Point( 3, 4 ), Point( 2, 3 ) ) == true ) 
        std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;

    if ( bsp( Point( 1, 1 ), Point( 6, 1 ), Point( 3, 4 ), Point( 1, 1 )) == true ) 
        std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	
	if ( bsp( Point( 1, 1 ), Point( 6, 1 ), Point( 3, 4 ), Point( 5, 2 ) ) == true ) 
        std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
    return ( 0 );
}