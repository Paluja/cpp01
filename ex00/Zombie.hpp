/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:09:21 by pjimenez          #+#    #+#             */
/*   Updated: 2024/11/28 13:43:13 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.cpp"

typedef std::string string;

class Zombie{
    private:
        string name;
        void announce();
    public:
        Zombie(string name);
        Zombie* newZombie(string name);
        ~Zombie();
        
}