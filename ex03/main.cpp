/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:36:02 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 21:45:11 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.Hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap Jim("Jim");
	ScavTrap j;
	FragTrap f;
	DiamondTrap g("Goblin");

	std::cout << std::endl;
	std::cout << std::endl;

	g.whoAmI();
	std::cout << "j healt: " << j.getHitpoints() << std::endl;
	std::cout << "j energy: " << j.getEnergyPoints() << std::endl;
	std::cout << "j attackdamege: " << j.getAttackDamage() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;	
	
	std::cout << "g healt: " << g.getHitpoints() << std::endl;
	std::cout << "g energy: " << g.getEnergyPoints() << std::endl;
	std::cout << "g attackdamege: " << g.getAttackDamage() << std::endl;
	
	

	g.attack(Jim.getName());
	// Jim.attack(j.getName());
	// j.takeDamage(Jim.getAttackDamage());
	// j.attack(Jim.getName());
	// Jim.takeDamage(j.getAttackDamage());
	// Jim.attack(j.getName());
	// ClapTrap Bob("Bob");
	// ClapTrap Bob2 = Bob;
	// j.attack(Bob.getName());
	// Bob.takeDamage(j.getAttackDamage());
	// Bob.attack(j.getName());
	// j.guardGate();
	// ScavTrap b = j;
	// b.attack(j.getName());
	// j.takeDamage(b.getAttackDamage());
	// j.beRepaired(30);
	// f.highFivesGuys();
	// f.attack(Bob.getName());
	// Bob.takeDamage(f.getAttackDamage());
	g.whoAmI();
	
	return 0;
}