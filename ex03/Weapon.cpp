/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:08:33 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/03 16:36:10 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(string type)
{
    this->type = type;
}

const string& Weapon::getType(void) const
{
    return (this->type);
}
Weapon::Weapon(string type)
{
    this->type = type;
}

Weapon::~Weapon(void)
{
}
