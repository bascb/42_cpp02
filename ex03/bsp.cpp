/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcastelo <bcastelo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:29:19 by bcastelo          #+#    #+#             */
/*   Updated: 2024/03/03 17:17:01 by bcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	Ax = a.getX();
	Fixed	Bx = b.getX();
	Fixed	Cx = c.getX();
	Fixed	Px = point.getX();
	Fixed	Ay = a.getY();
	Fixed	By = b.getY();
	Fixed	Cy = c.getY();
	Fixed	Py = point.getY();

	Fixed crossABAP = (Bx - Ax) * (Py - Ay) - (By - Ay) * (Px - Ax);
    Fixed crossBCBP = (Cx - Bx) * (Py - By) - (Cy - By) * (Px - Bx);
    Fixed crossCACP = (Ax - Cx) * (Py - Cy) - (Ay - Cy) * (Px - Cx);

    Fixed zero(0);
    return (crossABAP > zero && crossBCBP > zero && crossCACP > zero) || 
           (crossABAP < zero && crossBCBP < zero && crossCACP < zero);
}