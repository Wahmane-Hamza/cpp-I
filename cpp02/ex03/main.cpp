/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:58:16 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/29 20:24:58 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::string	boolToString(bool flag)
{
	if (flag)
		return ("True");
	return ("False");
}

int main( void )
{
	bool isInside;

	Point a(0.0f, 0.0f);
	Point b(1.0f, 7.0f);
	Point c(10.0f, 1.0f);

	Point point1(2.75f, 5.5f);
	Point point2(10.0f, 2.5f);
	
	isInside = bsp(a, b, c, point1);
	std::cout << boolToString(isInside) << std::endl;

	isInside = bsp(a, b, c, point2);
	std::cout << boolToString(isInside) << std::endl;

	return 0;
}
