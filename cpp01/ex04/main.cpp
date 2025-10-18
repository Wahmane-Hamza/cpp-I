/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:58:16 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/18 17:15:41 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    size_t pos;
    std::string line;
    std::string s1;
    std::string s2;

    if (ac == 4)
    {
        s1 = std::string(av[2]);
        s2 = std::string(av[3]);
        if (s1 == "")
        {
            std::cerr << "S1 empty" << std::endl;
            return (1);
        }
        std::ifstream infile(av[1]);

        if (infile.is_open())
        {
            std::string filename = std::string(av[1]) + ".replace";
            std::ofstream outfile(filename.c_str());
            if (!outfile.is_open())
                std::cerr << "Error opening outfile." << std::endl;
            while (std::getline(infile, line))
            {
                pos = 0;
                while ( (pos = line.find(s1, pos)) != std::string::npos)
                {
                    std::cout << pos << std::endl;
                    line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
                    pos = pos + s2.length();
                }
                outfile << line;
                if (!infile.eof())
                    outfile << std::endl;
            }
        }
        else
            std::cerr << "Error opening infile." << std::endl;
    }
    else
    {
        std::cout << "Number of argument" << std::endl;
        return (1);
    }
    return 0;
}
