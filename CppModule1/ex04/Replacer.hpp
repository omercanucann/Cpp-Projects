/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:32:13 by oucan             #+#    #+#             */
/*   Updated: 2025/09/14 16:32:14 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_H
#define REPLACER_H

#include <iostream>
#include <string>
#include <fstream>

class Replacer {
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;

        std::string replaceLine(const std::string &line);

    public:
        Replacer(const std::string &filename, const std::string &s1, const std::string &s2);
        bool process();
};

#endif