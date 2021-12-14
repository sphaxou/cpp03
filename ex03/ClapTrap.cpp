/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:01:19 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/14 18:50:57 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	Hitpoints = 10;
	Energypoints = 10;
	Attackdamage = 10;
}

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << "Name constructor called" << std::endl;
	Hitpoints = 10;
	Energypoints = 10;
	Attackdamage = 10;
	Name = name;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	Name = src.Name;
	Hitpoints = src.Hitpoints;
	Energypoints = src.Energypoints;
	Attackdamage = src.Attackdamage;
	return (*this);
}



void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attackdamage
		<<  " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int n)
{
	Hitpoints -= n;
	std::cout <<"ClapTrap " << Name << " takes " << n << " points of damage, ";
	if (Hitpoints > 0)
		std::cout << "leaving it with " << Hitpoints << " Hitpoints" << std::endl;
	else
		std::cout << "it is now Dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int n)
{
	Hitpoints += n;
	std::cout << "ClapTrap " << Name << " is being repaired for " << n
		<< " Hitpoints, it now has " << Hitpoints << std::endl;
}
