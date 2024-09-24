/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:39:14 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/24 13:50:14 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
private:
	
public:
	FragTrap();
	FragTrap(std::string newName);
	FragTrap(FragTrap& copy);
	FragTrap& operator=(FragTrap& cpy);
	void highFivesGuys();
	~FragTrap();
};

