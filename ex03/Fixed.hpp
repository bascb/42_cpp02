/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:12:35 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/02 19:07:28 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					value;
		static const int	fract = 8;
	public:
		Fixed();
		Fixed( const Fixed& );
		Fixed( const int );
		Fixed( const float );
		Fixed&	operator=( const Fixed& );
		bool	operator<( const Fixed& );
		bool	operator>( const Fixed& );
		bool	operator>=( const Fixed& );
		bool	operator<=( const Fixed& );
		bool	operator==( const Fixed& );
		bool	operator!=( const Fixed& );
		float	operator+( const Fixed& );
		float	operator-( const Fixed& );
		float	operator*( const Fixed& );
		float	operator/( const Fixed& );
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
};

std::ostream &operator<<(std::ostream &os, const Fixed &item);

#endif