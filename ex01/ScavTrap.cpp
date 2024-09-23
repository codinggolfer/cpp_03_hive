/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:26:55 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/23 16:50:04 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "someone spawned in ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : name(newName){
	std::cout << this->getName() << " spawned in ScavTrap" << std::endl;
}





ScavTrap::~ScavTrap(){
	std::cout << "someone died" << std::endl;
}