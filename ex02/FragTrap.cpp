/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:39:38 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 21:50:02 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.Hpp"

FragTrap::FragTrap(){
	this->name = "Fraggy";
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackDamage = 30;
	std::cout << this->name << "FragTrap spawned" << std::endl;
}

FragTrap::FragTrap(std::string newName) 
{
	this->name = newName;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_attackDamage = 30;
	std::cout << this->getName() << " the FragTrap robot spawned." << std::endl;
}

FragTrap::FragTrap(FragTrap& copy)
{
	*this = copy;
	std::cout << "FragTrap copy constructor called for " << this->getName() << " was created again. LOL" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& copy)
{
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &copy)
	{
		this->_hitpoints =copy.getHitpoints();
		this->name = copy.getName();
		this->_energypoints = copy.getAttackDamage();
		this->_attackDamage = copy.getAttackDamage();
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "jos sä chennaat nii heitä yläfemmat." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->getName() << " FragTrap Fragged." << std::endl;
}