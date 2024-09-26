/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:08:35 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 21:46:49 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap spawned" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newName) : ClapTrap(newName + "_clap_trap"), ScavTrap(newName), FragTrap(newName)
{
	this->name = newName;
	std::cout << this->name << " the DiamondTrap robot spawned." << std::endl;
	this->_hitpoints = FragTrap::getHitpoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	this->_energypoints = 50;
}

DiamondTrap::DiamondTrap(DiamondTrap& copy)
{
	*this = copy;
	std::cout << "DiamondTrap copy constructor called for " << this->name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& copy)
{
	std::cout << "DiamondTrap copy assignment operator called." << std::endl;
	if (this != &copy)
	{
		this->_hitpoints = copy.getHitpoints();
		this->name = copy.name;
		this->_energypoints = copy.getAttackDamage();
		this->_attackDamage = copy.getAttackDamage();
	}
	return *this;
}


void DiamondTrap::whoAmI(){
	std::cout << "Diamond's name: " << this->name << ". ClapTrap name: " << this->getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->name  << " or " << this->getName() << " is destroyed by diamond deconstructor." << std::endl;
}