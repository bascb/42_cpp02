/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:12:35 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/12 14:58:10 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed( const int );
		Fixed( const float );
		Fixed( const Fixed& );
		Fixed&	operator=( const Fixed& );
		bool	operator<( const Fixed& );
		bool	operator>( const Fixed& );
		bool	operator>=( const Fixed& );
		bool	operator<=( const Fixed& );
		bool	operator==( const Fixed& );
		bool	operator!=( const Fixed& );
		Fixed	operator+( const Fixed& );
		Fixed	operator-( const Fixed& );
		Fixed	operator*( const Fixed& );
		Fixed	operator/( const Fixed& );
		Fixed	operator++( int );
		Fixed&	operator++( void );
		Fixed	operator--( int );
		Fixed&	operator--( void );
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed&	min( Fixed&, Fixed& );
		static Fixed&	max( Fixed&, Fixed& );
		static const Fixed&	min( const Fixed&, const Fixed& );
		static const Fixed&	max( const Fixed&, const Fixed& );
	private:
		int					value;
		static const int	fract = 8;	
};

std::ostream &operator<<(std::ostream &os, const Fixed &item);

#endif