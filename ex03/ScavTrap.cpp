/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:34:59 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/14 19:09:53 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called"<< std::endl;
	Hitpoints = 100;
	Energypoints = 50;
	Attackdamage = 20;
}

ScavTrap::ScavTrap(const std::string &name):ClapTrap(name)
{
	Hitpoints = 100;
	Energypoints = 50;
	Attackdamage = 20;
	std::cout << "ScavTrap name constructor called"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap copy constuctor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destuctor called"<< std::endl;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	Name = src.Name;
	Hitpoints = src.Hitpoints;
	Energypoints = src.Energypoints;
	Attackdamage = src.Attackdamage;
	return (*this);
}

void	ScavTrap::attack(const std::string &name)
{
	std::cout << "ScavTrap " << Name << " deals TONS of damage (" << Attackdamage
		<< ") to " << name << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << Name << " has entered Gate Keeper mode" << std::endl;
}
