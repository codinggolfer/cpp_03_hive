/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:36:12 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/23 16:07:09 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int _hitpoints = 10;
	int _energypoints = 10;
	int _attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string newName);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setAttackDamage(int damage);
	std::string getName();
	int getAttackDamage();
	~ClapTrap();
};

