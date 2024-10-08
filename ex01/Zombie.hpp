/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 14:58:14 by ldi-fior          #+#    #+#             */
/*   Updated: 2024-09-27 14:58:14 by ldi-fior         ###   ########.fr       */
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
		
		void setName(std::string name);

		void announce();
};


/******************************************************************************/
/*                               Functions                                    */
/******************************************************************************/
Zombie* zombieHorde( int N, std::string name );

#endif