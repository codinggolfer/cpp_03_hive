/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:36:26 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/23 16:22:20 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "someone spawned" << " spawned." << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : name(newName) {
	std::cout << this->name << " spawned." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energypoints == 0)
		std::cout << this->name << " has no energy left to attack." << std::endl;
	else if (this->_hitpoints <= 0)
		std::cout << this->name << " is dead, GG!" << std::endl;
	else
		std::cout << this->name << " attacks " << target << " causing " << this->_attackDamage << "points of damage!" << std::endl;
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
	if (this->_energypoints == 0)
		std::cout << this->name << " Has no energy to heal!" << std::endl;
	else if (this->_hitpoints <= 0)
		std::cout << this->name << " is dead, GG!" << std::endl;
	else
		std::cout << this->name << " heals " << amount << " hitpoints!" << std::endl;
	this->_hitpoints += amount;
	this->_energypoints--;
}
void ClapTrap::setAttackDamage(int damage){
	_attackDamage = damage;
	std::cout << this->name <<" Attack damage set to " << damage << "." << std::endl;
}

std::string ClapTrap::getName(){
	return (name);
}

int ClapTrap::getAttackDamage(){
	return (_attackDamage);
}

ClapTrap::~ClapTrap(){
	std::cout << "DeconsturctorDaddy called R.I.P " << this->name <<  std::endl;
}