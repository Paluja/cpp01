/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:56:42 by pjimenez          #+#    #+#             */
/*   Updated: 2024/11/29 14:53:37 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name)
{
    this->name = name;
    std::cout << this->name <<" has turned into a zombie" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name <<" has died x2"<< std::endl;
}

Zombie* Zombie::newZombie(string name)
{
    Zombie *z = new Zombie(name);
    z->announce();
    return z;
}

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::randomChump(string name) {
	Zombie	Zombie(name);
	Zombie.announce();
	return;
}