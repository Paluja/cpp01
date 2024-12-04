/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:38:52 by pjimenez          #+#    #+#             */
/*   Updated: 2024/12/04 20:13:00 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl; return 0;
	}
	
	Harl	Harl;
	
	Harl.complain(av[1]);
}