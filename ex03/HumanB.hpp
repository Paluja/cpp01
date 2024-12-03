/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:02:53 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/03 13:19:09 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanB
{
	private:
		string name;
		Weapon		weapon;
	public:
		HumanB(string name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon weapon);
};