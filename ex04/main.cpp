/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 10:55:54 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/04 13:12:01 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

typedef std::string string;

string replaceSubstr(const string line, const string search, const string replace)
{
    std::ostringstream buffer;
    size_t startPos = 0;
    size_t foundPos;
    
    while ((foundPos = line.find(search, startPos)) != std::string::npos) {
        buffer << line.substr(startPos, foundPos - startPos);
        buffer << replace;
        startPos = foundPos + search.length();
    }
    buffer << line.substr(startPos);
    return buffer.str();
}


int main(int ac, char **av)
{
    if (ac != 4)
    {   
        std::cout << "Usage : ./replace file_in s1 s2" << std::endl; return 0;
    }
    
    string  infile = av[1];
    string  out_file = infile + ".replace";
    string  search = av[2];
    string  replace = av[3];
    string  line;

    std::ifstream input(infile.c_str());
    std::ofstream output(out_file.c_str());

    if (input.is_open()) {
		while (std::getline(input, line)) {
			line = replaceSubstr(line, search, replace);
			output << line;
			if (!input.eof())
				output << std::endl;
		}
		input.close();
		output.close();
	}
	else
		std::cout << "Error: cannot open file." << std::endl;
	return 0;

}