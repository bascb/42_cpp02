/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:30:22 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/12 13:38:09 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	value = nbr << fract;
}

Fixed::Fixed( const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(nbr * (1 << fract));
}

Fixed::Fixed( const Fixed& src) : value(src.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& src) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src )
		this->value = src.value;
	return (*this);
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	return (value);
}

void	Fixed::setRawBits( int const raw )
{
	value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)(value) / (1 << fract));
}

int		Fixed::toInt( void ) const
{
	return (value >> fract);
}

std::ostream &operator<<(std::ostream &os, const Fixed &item)
{
	os << item.toFloat();
	return (os);
}