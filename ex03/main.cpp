/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:11:18 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/03 13:23:15 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon kat("Katana");
	HumanA kanekro("Kanekro", kat);
	kanekro.attack();
	
    Weapon gS("GreatSword");
	HumanB juan("Juan");
	juan.setWeapon(gS);
	juan.attack();
}