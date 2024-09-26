/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:27:10 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/26 21:46:30 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string newName);
	ScavTrap(ScavTrap& copy);
	ScavTrap& operator=(ScavTrap& cpy);
	void attack(const std::string& target) override;
	void guardGate();
	~ScavTrap();
};

