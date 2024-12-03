/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:35:01 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/02 15:21:34 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, string name )
{
    int i = -1;
    Zombie *horde = new Zombie[n];
    
    while (++i < n)
    {
        horde[i].setName(name);
        horde[i].announce();
    }
    return horde;
}