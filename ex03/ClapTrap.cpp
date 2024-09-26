/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:36:26 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 21:45:47 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("baseman"), _hitpoints(10), _energypoints(10), _attackDamage(0) {
	std::cout << "someone spawned and inhereted stuff" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) 
	: name(newName), _hitpoints(10), _energypoints(10), _attackDamage(0)  {
	std::cout << this->name << " spawned." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
	*this = copy;
	std::cout << "claptrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "claptrap copy assigment operator called" << std::endl;
	if (this != &copy)
	{
		this->_hitpoints = copy._hitpoints;
		this->name = copy.name;
		this->_energypoints = copy._energypoints;
		this->_attackDamage = copy._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energypoints == 0)
		std::cout << this->name << " has no energy left to attack." << std::endl;
	else if (this->_hitpoints <= 0)
		std::cout << this->name << " is dead, GG!" << std::endl;
	else
		std::cout << this->name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energypoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " takes " << amount << " damage!" << std::endl;
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
		std::cout << this->name << " got RKO'ed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energypoints <= 0)
		std::cout << this->name << " Has no energy to heal!" << std::endl;
	else if (this->_hitpoints <= 0)
		std::cout << this->name << " is dead, GG!" << std::endl;
	else
		std::cout << this->name << " heals " << amount << " hitpoints!" << std::endl;
	this->_hitpoints += amount;
	this->_energypoints--;
}

std::string ClapTrap::getName(){
	return (name);
}

int ClapTrap::getAttackDamage(){
	return (_attackDamage);
}

int ClapTrap::getEnergyPoints(){
	return _energypoints;
}

int ClapTrap::getHitpoints()
{
	return _hitpoints;
}

ClapTrap::~ClapTrap(){
	std::cout << "DeconsturctorDaddy called R.I.P " << this->name <<  std::endl;
}