/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:30:09 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/27 17:37:40 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _fixedPoint;
        static int const _fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int int_num);
        Fixed(const float float_num);
        Fixed(const Fixed &other);
        ~Fixed();

        Fixed &operator = (const Fixed &other);
        
        //TODO: The 6 comparison operators: >, <, >=, <=, == and !=.
        bool operator < (const Fixed &toComp) const;
        bool operator > (const Fixed &toComp) const;
        bool operator <= (const Fixed &toComp) const;
        bool operator >= (const Fixed &toComp) const;
        bool operator == (const Fixed &toComp) const;
        bool operator != (const Fixed &toComp) const;

        //TODO: The 4 arithmetic operators: +, -, *, and /
        Fixed   operator + (const Fixed &toAdd) const;
        Fixed   operator - (const Fixed &toSub) const;
        Fixed   operator * (const Fixed &toMult) const;
        Fixed   operator / (const Fixed &toDiv) const;

        //TODO: The 4 increment/decrement : ++, --
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

        //TODO: min max
        static 			Fixed&		min(Fixed& f1, Fixed& f2);
		static	const	Fixed&		min(const Fixed& f1, const Fixed& f2);
		static 			Fixed&		max(Fixed& f1, Fixed& f2);
		static	const	Fixed&		max(const Fixed& f1, const Fixed& f2);

        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& cout, const Fixed& other);
