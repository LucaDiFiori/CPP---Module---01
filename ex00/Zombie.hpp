/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 09:35:36 by ldi-fior          #+#    #+#             */
/*   Updated: 2024-09-27 09:35:36 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

/******************************************************************************/
/*                               Zombie Class                                 */
/******************************************************************************/
class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void announce();
};


/******************************************************************************/
/*                               Functions                                    */
/******************************************************************************/
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif