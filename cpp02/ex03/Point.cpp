/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:49:20 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/29 20:04:02 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0.0f) , y(0.0f){}

Point::Point(float x, float y): x(x) , y(y){}

Point::Point(const Point &copy): x(copy.x), y(copy.y) {}

Point &Point::operator = (const Point &copy)
{
    (void)copy;
    std::cout << "You can't copy constant attributes!!" << std::endl;
    return (*this);
}

Point::~Point(){}

const Fixed &Point::getX() const
{
    return(this->x);
}

const Fixed &Point::getY() const
{
    return(this->y);
}
