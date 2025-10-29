/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:46:09 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/29 20:17:50 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point(void);
    Point(const float x,const float y);
    Point(const Point &copy);
    Point &operator = (const Point &copy);
    ~Point();

    const Fixed &getY() const;
    const Fixed &getX() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);