/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:10:26 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/03 17:16:13 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int	main( void )
{
	Point	test;
	Point	testf( 1.33f, 2.55f );
	Point	test2( testf );
	Point	A(2,3);
	Point	B(0,0);
	Point	C(4,0);
	Point	P1(2,2);
	Point	P2(2,3);
	bool	inside;
	
	Fixed x = test.getX();
	Fixed y = test.getY();
	Fixed xf = testf.getX();
	Fixed yf = testf.getY();
	Fixed x2 = test2.getX();
	Fixed y2 = test2.getY();
	std::cout << "Develop BSP tests. X Y: " << x << " " << y << std::endl;
	std::cout << "Develop BSP tests. Xf Yf: " << xf << " " << yf << std::endl;
	std::cout << "Develop BSP tests. X2 Y2: " << x2 << " " << y2 << std::endl;
	
	inside = bsp(A, B, C, P1);
	std::cout << "P1 is inside: " << inside << std::endl;
	inside = bsp(A, B, C, P2);
	std::cout << "P2 is not inside: " << inside << std::endl;

	return (0);
}