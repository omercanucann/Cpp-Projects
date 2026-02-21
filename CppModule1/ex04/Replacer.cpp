/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oucan <oucan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:32:10 by oucan             #+#    #+#             */
/*   Updated: 2025/09/14 16:32:11 by oucan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(const std::string &filename, const std::string &s1, const std::string &s2)
    : _filename(filename), _s1(s1), _s2(s2) {};

std::string Replacer::replaceLine(const std::string &line)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(_s1, pos)) != std::string::npos)
    {
        result.append(line.substr(pos, found - pos));
        result.append(_s2);
        pos = found + _s1.length();
    }
    result.append(line.substr(pos));
    return (result);
}

bool Replacer::process()
{
    std::ifstream infile(_filename.c_str());
    if (!infile)
    {
        std::cerr << "Error: Cannot open file " << _filename << std::endl;
        return (false);
    }
    std::ofstream outfile((_filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: Cannot create output file " << _filename << std::endl;
        return (false);
    }
    std::string line;
    while (std::getline(infile, line))
    {
        outfile << replaceLine(line);
        if (!infile.eof())
            outfile << std::endl;
    }
    infile.close();
    outfile.close();
    return (true);
}