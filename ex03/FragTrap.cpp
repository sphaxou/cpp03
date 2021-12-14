/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:34:59 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/14 19:19:33 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called"<< std::endl;
	Hitpoints = 100;
	Energypoints = 100;
	Attackdamage = 30;
}

FragTrap::FragTrap(const std::string &name):ClapTrap(name)
{
	Hitpoints = 100;
	Energypoints = 100;
	Attackdamage = 30;
	std::cout << "FragTrap name constructor called"<< std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap copy constuctor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destuctor called"<< std::endl;
}


FragTrap &FragTrap::operator=(const FragTrap &src)
{
	Name = src.Name;
	Hitpoints = src.Hitpoints;
	Energypoints = src.Energypoints;
	Attackdamage = src.Attackdamage;
	return (*this);
}

void	FragTrap::HighFiveGuys()
{
	std::cout << Name << " is calling for a High Five, don't embarass him" << std::endl;
}
