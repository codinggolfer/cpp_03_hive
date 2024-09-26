/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:08:45 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 21:49:16 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.Hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap();
	DiamondTrap(std::string newName);
	DiamondTrap(DiamondTrap& copy);
	DiamondTrap& operator=(DiamondTrap& copy);
	void whoAmI();
	~DiamondTrap();
};