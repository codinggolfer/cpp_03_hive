/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:27:10 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/23 16:48:58 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
private:
	/* data */
public:
	ScavTrap();
	ScavTrap::ScavTrap(std::string newName);
	~ScavTrap();
};

