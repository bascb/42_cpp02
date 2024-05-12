/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:26:11 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/12 16:08:53 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0) , y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point( const float ix, const float iy ) : x(ix) , y(iy)
{
	std::cout << "Point Float constructor called" << std::endl;
}

Point::Point( const Point& src) : x(src.x) , y(src.y)
{
	std::cout << "Point Copy constructor called" << std::endl;
}

Point& Point::operator=( const Point&)
{
	std::cout << "Point Copy assignment operator called" << std::endl;
	return (*this);
}

Point::~Point( void )
{
	std::cout << "Destructor called" << std::endl;
}

const Fixed	Point::getX( void ) const
{
	return (x);
}

const Fixed	Point::getY( void ) const
{
	return (y);
}