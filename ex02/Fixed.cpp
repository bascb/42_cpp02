/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:30:22 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/02 19:07:56 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
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

Fixed& Fixed::operator=( const Fixed& src) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src )
		this->value = src.getRawBits();
	return (*this);
}

bool Fixed::operator<( const Fixed& second) 
{
	return (this->value < second.getRawBits());
}

bool Fixed::operator>( const Fixed& second) 
{
	return (this->value > second.getRawBits());
}

bool Fixed::operator>=( const Fixed& second) 
{
	return (this->value >= second.getRawBits());
}

bool Fixed::operator<=( const Fixed& second) 
{
	return (this->value <= second.getRawBits());
}

bool Fixed::operator==( const Fixed& second) 
{
	return (this->value == second.getRawBits());
}

bool Fixed::operator!=( const Fixed& second) 
{
	return (this->value != second.getRawBits());
}

float Fixed::operator+( const Fixed& second) 
{
	return (this->toFloat() + second.toFloat());
}

float Fixed::operator-( const Fixed& second) 
{
	return (this->toFloat() - second.toFloat());
}

float Fixed::operator*( const Fixed& second) 
{
	return (this->toFloat() * second.toFloat());
}

float Fixed::operator/( const Fixed& second) 
{
	return (this->toFloat() / second.toFloat());
}

Fixed Fixed::operator++( int ) 
{
	Fixed	temp(*this);
	value++;
	return (temp);
}

Fixed& Fixed::operator++( void ) 
{
	value++;
	return (*this);
}

Fixed Fixed::operator--( int ) 
{
	Fixed	temp(*this);
	value++;
	return (temp);
}

Fixed& Fixed::operator--( void ) 
{
	value++;
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

Fixed&	Fixed::min( Fixed& a, Fixed& b )
{
	if (a.value <= b.value)
		return (a);
	return (b);
}

Fixed&	Fixed::max( Fixed& a, Fixed& b )
{
	if (a.value >= b.value)
		return (a);
	return (b);
}

const Fixed&	Fixed::min( const Fixed& a, const Fixed& b )
{
	if (a.value <= b.value)
		return (a);
	return (b);
}

const Fixed&	Fixed::max( const Fixed& a, const Fixed& b )
{
	if (a.value >= b.value)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &os, const Fixed &item)
{
	os << item.toFloat();
	return (os);
}