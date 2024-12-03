/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:53:34 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/03 13:12:37 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

typedef std::string string;

class Weapon{
    private:
        string type;
    public:
        Weapon(string type);
        ~Weapon(void);
        const string& getType(void ) const;
        void setType(string type);
};


#endif