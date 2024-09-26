/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:26:55 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 21:51:04 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->name = "Scavman";
	this->_hitpoints = 100;
	this->_attackDamage = 20;
	this->_energypoints = 50;
	std::cout << this->name << " spawned in ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string newName)
{
	this->name = newName;
	this->_hitpoints = 100;
	this->_attackDamage = 20;
	this->_energypoints = 50;
	std::cout << this->getName() << " spawned in ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy)
{
	std::cout << "ScavTrap copy constructor called for " << this->getName() << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(ScavTrap& copy)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_hitpoints = copy._hitpoints;
		this->_attackDamage = copy._attackDamage;
		this->_energypoints = copy._energypoints;
		this->name = copy.name;
	}
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() <= 0)
		std::cout << this->getName() << " has no energy left to attack." << std::endl;
	else if (this->getHitpoints() <= 0)
		std::cout << this->getName() << " is dead, GG!" << std::endl;
	else
		std::cout << this->getName() << " attacks humbly with electicshock" << " causing " << this->getAttackDamage() << " points of damage to "  << target << std::endl;
	this->_energypoints -= 1;
}

ScavTrap::~ScavTrap(){
	std::cout << this->getName() << " sent to the scrapyard." << std::endl;
}

