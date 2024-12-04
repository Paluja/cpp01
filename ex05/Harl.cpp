/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:38:57 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/04 20:00:22 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug() const {
	std::cout << "[DEBUG] - I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info() const {
	std::cout << "[INFO] - I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning() const {
	std::cout << "[WARNING] - I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error() const {
	std::cout << "[ERROR] - This is unacceptable ! I want to speak to the manager now.";
}

void    Harl::complain(string level)
{
    void (Harl::*function)(void) const = NULL;
    void (Harl::*arrayFunc[4]) (void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    string arrayLevel[4] = {"debug", "info", "warning", "error"};
    int    i = -1;

    while (++i < 4) {
		if (arrayLevel[i] == level)
			function = arrayFunc[i];
	}
	if (!function) {
		std::cout << "Invalid Harl's complain !" << std::endl; return;
	}
	(this->*function)();
}
