/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:36:02 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 16:57:39 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Jim("Jim");
	ClapTrap Bob("Bob");
	ClapTrap Tim;
	
	Jim.attack(Bob.getName());
	std::cout << "Jims energy after attack: " << Jim.getEnergyPoints() << std::endl;
	Bob.takeDamage(Jim.getAttackDamage());
	Bob.beRepaired(5);
	std::cout << "Bobs healt after regen: " << Bob.getHitpoints() << std::endl;
	std::cout << "Bobs energy after regen: " << Bob.getEnergyPoints() << std::endl;
	Tim.takeDamage(Jim.getAttackDamage());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	Jim.attack(Bob.getName());
	
	return 0;
}