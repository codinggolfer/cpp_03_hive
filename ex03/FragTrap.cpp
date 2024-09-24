/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:39:38 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 14:07:07 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.Hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap spawned" << std::endl;
}

FragTrap::FragTrap(std::string newName) 
{
	this->setName(newName);
	std::cout << this->getName() << " the FragTrap robot spawned." << std::endl;
	this->setHitpoint(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap& copy)
{
	*this = copy;
	std::cout << "FragTrap copy constructor called for " << this->getName() << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& copy)
{
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &copy)
	{
		this->setHitpoint(copy.getHitpoints());
		this->setName(copy.getName());
		this->setEnergyPoints(copy.getAttackDamage());
		this->setAttackDamage(copy.getAttackDamage());
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "jos sä chennaat nii heitä yläfemmat." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->getName() << " FragTrap executed." << std::endl;
}