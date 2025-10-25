/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:30:09 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/25 15:51:23 by hwahmane         ###   ########.fr       */
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
        Fixed(const float int_num);
        Fixed(const Fixed &other);
        ~Fixed();

        Fixed &operator = (const Fixed &other);

        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& cout, const Fixed& other);
