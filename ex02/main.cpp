/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:10:26 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/12 15:04:24 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void	compare( void );

void	calc( void );

int	main( void )
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	//compare();
	//calc();
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return (0);
}

void	compare( void )
{
	Fixed	a(0.5f);
	Fixed	b(2);
	Fixed	c(3.5f);
	bool	res;

	res = a > c;
	std::cout << "0? " << res << std::endl;
	res = a == c;
	std::cout << "0? " << res << std::endl;
	res = a < c;
	std::cout << "1? " << res << std::endl;
	res = a != c;
	std::cout << "1? " << res << std::endl;
	res = a != a;
	std::cout << "0? " << res << std::endl;
}

void	calc( void )
{
	Fixed	a(0.5f);
	Fixed	b(2);
	Fixed	c(3.5f);
	Fixed	res;

	res = a + c;
	std::cout << "4? " << res << std::endl;
	res = a * c;
	std::cout << "1.75? " << res << std::endl;
	res = b * c;
	std::cout << "7? " << res << std::endl;
	res = c - b;
	std::cout << "1.5? " << res << std::endl;
}