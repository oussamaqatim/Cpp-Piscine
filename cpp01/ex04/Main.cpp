/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:37:27 by oqatim            #+#    #+#             */
/*   Updated: 2023/03/31 17:33:17 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void ft_replace(std::ofstream &opfile, std::string datafile, std::string str1, std::string str2)
{
	size_t	pos;
	
	pos = datafile.find(str1);
	while (pos != std::string::npos)
	{
		datafile = datafile.erase(pos, str1.length());
		datafile = datafile.insert(pos, str2);
		pos = datafile.find(str1, pos + str2.length());
	}
    opfile << datafile;
    opfile.close();
}

int ft_check(std::ifstream &infile)
{
    if (!infile.is_open())
    {
        std::cout << "Your File is cannot be open" << std::endl;       
        return (1);
    }
    if (!infile.good())
    {
        std::cout << "Error : Permission denied" << std::endl;
        return (1);
    }
    infile.seekg(0, std::ios::end);
    if (infile.tellg() == 0)
    {
        std::cout << "File : Is empty" << std::endl;
        return (1);
    }
    infile.seekg(0);
    return (0);
}
int main(int ac, char **av)
{
    if (ac != 4)
        std::cout << "Error : Bad Arguments" << std::endl;
    
    std::ifstream infile;
    std::ofstream opfile;
    std::string newfile;
    std::string datafile;
    
    infile.open(av[1]);
    if (ft_check(infile) != 0)
        return (1);
    newfile = av[1];
    opfile.open(newfile.append(".replace"));
    getline(infile, datafile, '\0');
    ft_replace(opfile, datafile, av[2], av[3]);
    infile.close();
}


