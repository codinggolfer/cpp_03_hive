/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:08:35 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 15:33:06 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout << "DiamondTrap spawned" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newName) : ClapTrap(newName)
{
	this->name = newName;
	ClapTrap::setName(newName  + "clap_name");
	std::cout << this->name << " the DiamondTrap robot spawned." << std::endl;
	this->setHitpoint(FragTrap::getHitpoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
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
		this->setHitpoint(copy.getHitpoints());
		this->name = copy.name;
		this->setEnergyPoints(copy.getAttackDamage());
		this->setAttackDamage(copy.getAttackDamage());
	}
	return *this;
}

void DiamondTrap::attack(const std::__1::string &target) {
	std::cout << this->getName() << " attacks with golf club" << " causing " << this->getAttackDamage() << " points of damage to "  << target << std::endl;

}

void DiamondTrap::whoAmI(){
	std::cout << "Diamond's name: " << this->name << ". ClapTrap name: " << this->getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->getName() << " is destroyed by diamond deconstructor." << std::endl;
}