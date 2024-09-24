/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:36:12 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 15:16:42 by eagbomei         ###   ########.fr       */
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
	ClapTrap(ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& copy);

	
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName();
	int getAttackDamage();
	int getEnergyPoints();
	int getHitpoints();

	
	void setAttackDamage(int damage);
	void setHitpoint(int hp);
	void setEnergyPoints(int Ep);
	void setName(std::string nameNew);
	~ClapTrap();
};

