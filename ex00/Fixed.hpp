/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:12:35 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/12 12:05:51 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed( const Fixed& );
		Fixed& operator=( const Fixed& );
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int					value;
		static const int	fract = 8;
};

#endif