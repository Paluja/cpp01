/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:09:21 by pjimenez          #+#    #+#             */
/*   Updated: 2024/11/29 15:55:25 by pjimenez         ###   ########.fr       */
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
        void announce();
    public:
        Zombie(string name);
        Zombie* newZombie(string name);
        void randomChump(string name);
        ~Zombie();
        
};

#endif