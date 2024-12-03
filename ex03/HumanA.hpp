/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:28:24 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/03 16:36:00 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

class HumanA{
    private:
        string name;
        Weapon  weapon;
    public:
        HumanA(string name, Weapon &weapon);
        ~HumanA();
        void attack();
        void setWeapon(Weapon weapon);
};