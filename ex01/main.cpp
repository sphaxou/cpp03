/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:19:25 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/14 19:10:40 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap a("Clappy");
	ScavTrap o("Olxinos");
	a.attack("Olxinos");
	o.takeDamage(10);
	a.takeDamage(9);
	o.attack("Popool");
	a.beRepaired(10);
	a.takeDamage(25);
	o.beRepaired(50);
	o.guardGate();
	return (0);
}
