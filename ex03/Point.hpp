/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:05:42 by bcastelo          #+#    #+#             */
/*   Updated: 2024/05/12 12:05:29 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP


#include <iostream>
#include "Fixed.hpp"

class Point
{
	public:
		Point( void );
		Point( const float, const float );
		Point( const Point& );
		Point&	operator=( const Point& );
		~Point( void );
		const Fixed	getX( void ) const;
		const Fixed	getY( void ) const;
	private:
		Fixed const x;
		Fixed const y;
};

#endif