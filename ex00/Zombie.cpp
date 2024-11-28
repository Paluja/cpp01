/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:56:42 by pjimenez          #+#    #+#             */
/*   Updated: 2024/11/28 20:21:55 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << this->name <<" has died x2"<< std::endl;
}

Zombie* Zombie::newZombie(string name)
{
    Zombie *z = new Zombie(name);
    z->announce();
    return z;
}

void	Zombie::randomChump(string name) {
	Zombie	Zombie(name);
	Zombie.announce();
	return;
}