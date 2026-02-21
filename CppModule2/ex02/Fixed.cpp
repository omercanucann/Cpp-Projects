/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:18:43 by oucan             #+#    #+#             */
/*   Updated: 2025/09/24 16:18:44 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {}

Fixed::Fixed(const int n)
{
    _value = n << _fractionalBits;
}

Fixed::Fixed(const float f)
{
    _value = roundf(f * (1 << _fractionalBits));
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
    return ((float)_value / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
    return (_value >> _fractionalBits);
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

Fixed& Fixed::operator++()
{
    _value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    _value++;
    return(tmp);
}

Fixed& Fixed::operator--()
{
    _value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    _value--;
    return(tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return(a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return(a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return (a > b ? a : b);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}
