/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:36:02 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 14:01:37 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.Hpp"

int main()
{
	ClapTrap Jim("Jim");
	ScavTrap j("Kalle");
	FragTrap f("frodo");
	Jim.setAttackDamage(11);
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
	
	return 0;
}