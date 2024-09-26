/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:36:12 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 16:51:07 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int _hitpoints;
	int _energypoints;
	int _attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string newName);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int getEnergyPoints();
	int getHitpoints();
	int getAttackDamage();
	std::string getName();
	
	~ClapTrap();
};

