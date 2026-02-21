/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:18:51 by oucan             #+#    #+#             */
/*   Updated: 2025/09/24 16:18:52 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point const& a, Point const& b, Point const&  c)
{
    Fixed res = (a.getX() * (b.getY() - c.getY()) 
                + b.getX() * (c.getY() - a.getY())
                + c.getX() * (a.getY() - b.getY())) / Fixed(2);
    if (res < Fixed(0))
    {
        res = res * Fixed(-1);
    }
    return (res);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed areaABC = area(a, b, c);
    Fixed areaPAB = area(point, a, b);
    Fixed areaPBC = area(point, b, c);
    Fixed areaPCA = area(point, c, a);

    if (areaPAB == Fixed(0) || areaPBC == Fixed(0) || areaPCA == Fixed(0))
        return (false);

    return (areaABC == (areaPAB + areaPBC + areaPCA));
}