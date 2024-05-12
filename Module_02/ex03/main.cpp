/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:37:14 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/12 10:59:24 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
    
    bool result1 = bsp(Point(0.0f, 0.0f), Point(4.0f, 0.0f), Point(0.0f, 2.0f), Point(1.2f,0.5f));
    bool result2 = bsp(Point(3.6f, 5.0f), Point(0.0f, 5.0f), Point(2.0f, 0.0f), Point(2.0f,2.0f));
    bool result3 = bsp(Point(3.6f, 5.0f), Point(0.0f, 5.0f), Point(2.0f, 0.0f), Point(0.0f,0.5f));
    bool result4 = bsp(Point(0.0f, 8.0f), Point(1.0f, 1.0f), Point(4.0f, 8.0f), Point(3.8f,6.0f));
    
    std::cout << "Test Case 1: " << (result1 ? "Inside" : "Outside") << std::endl;

    std::cout << "Test Case 2: " << (result2 ? "Inside" : "Outside") << std::endl;

    std::cout << "Test Case 3: " << (result3 ? "Inside" : "Outside") << std::endl; 

    std::cout << "Test Case 4: " << (result4 ? "Inside" : "Outside") << std::endl;

    return 0;
}
