/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:36:02 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 18:36:54 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.Hpp"

int main()
{
	{
		ClapTrap Jim("Jim");
		ClapTrap Bob("Bob");
		ClapTrap Tim;

		std::cout << std::endl;
		std::cout << std::endl;
		
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
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	{
		ClapTrap Jim("Jim");
		ClapTrap Bob("Bob");
		ScavTrap Kalle("Kalle");
		ScavTrap GZA("GZA");
		ScavTrap ghostface(GZA);
		
		ScavTrap TesterGza;
		
		TesterGza = GZA;

		std::cout << std::endl;
		std::cout << std::endl;
		
		Jim.attack(Bob.getName());
		std::cout << "Jims energy after attack: " << Jim.getEnergyPoints() << std::endl;
		Bob.takeDamage(Jim.getAttackDamage());
		GZA.attack(Bob.getName());
		Bob.takeDamage(GZA.getAttackDamage());
		ghostface.beRepaired(100);
		std::cout << "GZA healt after regen: " << ghostface.getHitpoints() << std::endl;
		ghostface.attack(Kalle.getName());
		Kalle.takeDamage(ghostface.getAttackDamage());
		std::cout << "Bobs healt after regen: " << Kalle.getHitpoints() << std::endl;
		std::cout << "Bobs energy after regen: " << ghostface.getEnergyPoints() << std::endl;
		ghostface.attack(Jim.getName());
		Jim.takeDamage(ghostface.getAttackDamage());
		std::cout << "actial GZA energy after regen: " << GZA.getHitpoints() << std::endl;
		ghostface.attack(GZA.getName());
		GZA.takeDamage(ghostface.getAttackDamage());
		ghostface.attack(GZA.getName());
		GZA.takeDamage(ghostface.getAttackDamage());
		std::cout << "actual GZA after attack: " << GZA.getHitpoints() << std::endl;
		ghostface.attack(GZA.getName());
		GZA.takeDamage(ghostface.getAttackDamage());
		ghostface.attack(GZA.getName());
		GZA.takeDamage(ghostface.getAttackDamage());
		ghostface.attack(GZA.getName());
		GZA.takeDamage(ghostface.getAttackDamage());
		std::cout << "test actial GZA healt after attacks: " << GZA.getHitpoints() << std::endl;
		std::cout << "GZA energy after regen: " << ghostface.getEnergyPoints() << std::endl;
		std::cout << "GZA healt: " << ghostface.getHitpoints() << std::endl;
		std::cout << "actual GZA energy: " << GZA.getEnergyPoints() << std::endl;
		std::cout << "actial GZA healt after attacks: " << GZA.getHitpoints() << std::endl;

		Kalle.guardGate();
		GZA.guardGate();
		ghostface.guardGate();
		TesterGza.guardGate();
	}

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		
	{
		ClapTrap Jim("Jim");
		ScavTrap j("Kalle");
		FragTrap f("frodo");
		
		std::cout << std::endl;
		std::cout << std::endl;
		
		Jim.attack(j.getName());
		j.takeDamage(Jim.getAttackDamage());
		j.attack(Jim.getName());
		Jim.takeDamage(j.getAttackDamage());
		Jim.attack(j.getName());
		ClapTrap Bob("Bob");
		ClapTrap Bob2 = Bob;
		j.attack(Bob.getName());
		Bob.takeDamage(j.getAttackDamage());
		Bob.attack(j.getName());
		j.guardGate();
		ScavTrap b = j;
		b.attack(j.getName());
		j.takeDamage(b.getAttackDamage());
		j.beRepaired(30);
		f.highFivesGuys();
		f.attack(Bob.getName());
		Bob.takeDamage(f.getAttackDamage());
	}
	return 0;
}