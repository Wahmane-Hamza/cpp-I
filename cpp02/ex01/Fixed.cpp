/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:36:50 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/25 15:52:02 by hwahmane         ###   ########.fr       */
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
    this->_fixedPoint = round(float_num * (1 << this->_fixedPoint));
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
        this->_fixedPoint = other.getRawBits();
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
