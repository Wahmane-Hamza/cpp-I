/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:36:50 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/27 17:40:32 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPoint = 0;
}

Fixed::Fixed(const int int_num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPoint = int_num << this->_fractionalBits;
}

Fixed::Fixed(const float float_num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPoint = roundf(float_num * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &other): _fixedPoint(other._fixedPoint)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator = (const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixedPoint = other._fixedPoint;
    return (*this);
}

float Fixed::toFloat( void ) const
{
    return ((float)this->_fixedPoint / (1 << this->_fractionalBits));
}

int Fixed::toInt( void ) const
{
    return (this->_fixedPoint >> this->_fractionalBits);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixedPoint = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream&	operator<<(std::ostream& cout, const Fixed& other)
{
	cout << other.toFloat();
	return (cout);
}

//TODO: The 6 comparison operators: >, <, >=, <=, == and !=.
bool Fixed::operator < (const Fixed &toComp) const
{
    return (this->toFloat() < toComp.toFloat());
}

bool Fixed::operator > (const Fixed &toComp) const
{
    return (this->toFloat() > toComp.toFloat());
}

bool Fixed::operator <= (const Fixed &toComp) const
{
    return (this->toFloat() <= toComp.toFloat());
}

bool Fixed::operator >= (const Fixed &toComp) const
{
    return (this->toFloat() >= toComp.toFloat());
}

bool Fixed::operator == (const Fixed &toComp) const
{
    return (this->toFloat() == toComp.toFloat());
}

bool Fixed::operator != (const Fixed &toComp) const
{
    return (this->toFloat() == toComp.toFloat());
}

 //TODO: The 4 arithmetic operators: +, -, *, and /
Fixed   Fixed::operator + (const Fixed &toAdd) const
{
    Fixed   sum;

    sum._fixedPoint = this->_fixedPoint + toAdd._fixedPoint;
    return (sum);
}

Fixed   Fixed::operator - (const Fixed &toSub) const
{
    Fixed   sub;

    sub._fixedPoint = this->_fixedPoint - toSub._fixedPoint;
    return (sub);
}

Fixed   Fixed::operator * (const Fixed &toMult) const
{
    Fixed   mult;

    mult._fixedPoint = (this->_fixedPoint * toMult._fixedPoint) / (1 << this->_fractionalBits);
    return (mult);
}

Fixed   Fixed::operator / (const Fixed &toDiv) const
{
    Fixed   div;

    div._fixedPoint = ((float)this->_fixedPoint / toDiv._fixedPoint) * (1 << this->_fractionalBits);
    return (div);
}


//TODO: The 4 increment/decrement : ++, --
Fixed&	Fixed::operator++()
{
	this->_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	oldObj(*this);
	
	this->_fixedPoint++;
	return (oldObj);
}

Fixed&	Fixed::operator--()
{
	this->_fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	oldObj(*this);
	
	this->_fixedPoint--;
	return (oldObj);
}

//TODO: min max
Fixed&		Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

const Fixed&		Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed&		Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}

const Fixed&		Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
}