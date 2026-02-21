/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:19:02 by oucan             #+#    #+#             */
/*   Updated: 2025/09/24 16:19:03 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
    private:
        Fixed const _x;
        Fixed const _y;

    public:
        Point();
        Point(float x, float y);
        Point(const Point& other);
        Point& operator=(const Point& other);
        ~Point();
        
        Fixed getX() const;
        Fixed getY() const;
};

#endif