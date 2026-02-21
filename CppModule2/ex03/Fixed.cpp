/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:18:53 by oucan             #+#    #+#             */
/*   Updated: 2025/09/24 16:18:54 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {}

Fixed::Fixed(const int n)
{
    _value = n << _bits;
}

Fixed::Fixed(const float f)
{
    _value = roundf(f * (1 << _bits));
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other )
    {
        _value = other._value;
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (_value);
}

void Fixed::setRawBits(int const raw)
{
    _value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)_value / (1 << _bits));
}

int Fixed::toInt(void) const
{
    return (_value >> _bits);
}

bool Fixed::operator>(const Fixed& other) const
{
    return(_value > other._value);
}

bool Fixed::operator<(const Fixed& other) const
{
    return(_value < other._value);
}

bool Fixed::operator>=(const Fixed& other) const
{
    return(_value >= other._value);
}

bool Fixed::operator<=(const Fixed& other) const
{
    return(_value <= other._value);
}

bool Fixed::operator==(const Fixed& other) const
{
    return(_value == other._value);
}

bool Fixed::operator!=(const Fixed& other) const
{
    return(_value  !=other._value);
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return(Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return(Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return(Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return(Fixed(this->toFloat() / other.toFloat()));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}
