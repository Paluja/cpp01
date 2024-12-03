/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:09:21 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/02 15:45:31 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string string;

class Zombie{
    private:
        string name;
    public:
        ~Zombie();
        Zombie();
        void setName(string name);
        void announce();
};
        Zombie* zombieHorde( int n, string name );

#endif