/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:46:45 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/02 16:56:55 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
    
typedef  std::string string;

int main()
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    std::cout << "str's adress : " << &str << std::endl;
	std::cout << "str's ptr adress : " << stringPTR << std::endl;
	std::cout << "str's ref adress : " << &stringREF << std::endl;

	std::cout << "str's value : " << str << std::endl;
	std::cout << "str's ptr value : " << *stringPTR << std::endl;
	std::cout << "str 's ref value : " << stringREF << std::endl;
}