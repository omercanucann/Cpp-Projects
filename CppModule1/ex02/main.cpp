/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:31:46 by oucan             #+#    #+#             */
/*   Updated: 2025/09/14 16:31:47 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";

    std::string* strptr = &str;
    std::string& strref = str;

    std::cout << "Memory address of str: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << strptr << std::endl;
    std::cout << "Memory address held by stringREF: " << &strref << std::endl;

    std::cout << "Value of str: " << str << std::endl;
    std::cout << "Value pointed by stringPTR: " << *strptr << std::endl;
    std::cout << "Value referred by stringREF: " << strref << std::endl;

    return (0);
}