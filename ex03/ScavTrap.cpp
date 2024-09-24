/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:26:55 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 15:18:09 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "someone spawned in ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string newName) 
{
	this->setName(newName);
	std::cout << this->getName() << " spawned in ScavTrap" << std::endl;
	this->setHitpoint(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap& copy)
{
	*this = copy;
	std::cout << "ScavTrap copy constructor called for " << this->getName() << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& copy)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->setHitpoint(copy.getHitpoints());
		this->setName(copy.getName());
		this->setEnergyPoints(copy.getAttackDamage());
		this->setAttackDamage(copy.getAttackDamage());
	}
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
	if (this->getEnergyPoints() == 0)
		std::cout << this->getName() << " has no energy left to attack." << std::endl;
	else if (this->getHitpoints() <= 0)
		std::cout << this->getName() << " is dead, GG!" << std::endl;
	else
		std::cout << this->getName() << " attacks humbly with electicshock" << " causing " << this->getAttackDamage() << " points of damage to "  << target << std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}

ScavTrap::~ScavTrap(){
	std::cout << this->getName() << " sent to the scrapyard." << std::endl;
}

