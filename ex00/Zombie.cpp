/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 09:36:18 by ldi-fior          #+#    #+#             */
/*   Updated: 2024-09-27 09:36:18 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Zombie")
{
	std::cout << "Zombie: " << this->_name << " is born" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie: " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie: " << this->_name << " is dead" << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
