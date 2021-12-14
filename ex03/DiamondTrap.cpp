/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:33:16 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/14 20:05:48 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	Attackdamage = 30;
	Hitpoints = 100;
}


DiamondTrap::DiamondTrap(const std::string &name)
{
	std::string tmp;
	Name = name;
	tmp = name + "_clap_name";
	std::cout << "DiamondTrap Name constructor called" << std::endl;
	ClapTrap::Name = tmp;
	Attackdamage = 30;
	Hitpoints = 100;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	Name = src.Name;
	ClapTrap::Name = src.ClapTrap::Name;
	Attackdamage = src.Attackdamage;
	Energypoints = src.Energypoints;
	Hitpoints = src.Hitpoints;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{std::cout << "DiamondTrap destructor called" << std::endl;}

void	DiamondTrap::WhoAmI()
{
	std::cout << Name << " " << ClapTrap::Name << std::endl;
}
