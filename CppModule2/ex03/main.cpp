/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:18:18 by oucan             #+#    #+#             */
/*   Updated: 2025/09/24 16:18:19 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point inside(3, 3);
    Point outside(10, 10);
    Point edge(5, 0);
    Point example(4, 2);

    std::cout << "Inside (3,3): " << bsp(a, b, c, inside) << std::endl;
    std::cout << "Outside (10,10): " << bsp(a, b, c, outside) << std::endl;
    std::cout << "Edge (5,0): " << bsp(a, b, c, edge) << std::endl;
    std::cout << "Example (4, 2): " << bsp(a, b, c, example) << std::endl;

    return (0);
}