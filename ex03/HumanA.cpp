/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:16:48 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/04 10:54:20 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(string name, Weapon &weapon) : name(name), weapon(weapon)
{
    std::cout << "HumanA with name:" << name << std::endl;
    std::cout << weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}