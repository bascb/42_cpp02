/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:10:26 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/12 16:06:08 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point);

int	main( void )
{
	Point	A(2,3);
	Point	B(0,0);
	Point	C(4,0);
	Point	P1(2,2);
	Point	P2(2,3);
	bool	inside;
	
	inside = bsp(A, B, C, P1);
	std::cout << "P1 is inside: " << inside << std::endl;
	inside = bsp(A, B, C, P2);
	std::cout << "P2 is not inside: " << inside << std::endl;

	return (0);
}