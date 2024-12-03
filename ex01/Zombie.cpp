/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:56:42 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/02 15:45:39 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << this->name <<" has turned into a zombie" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name <<" has died x2"<< std::endl;
}


void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


void	Zombie::setName(string name) {
	this->name = name;
}