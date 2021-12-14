/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:19:25 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/14 20:05:58 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main()
{
	DiamondTrap a("prout");
	a.attack("Olxinos");
	a.takeDamage(1);
	a.beRepaired(50);
	a.guardGate();
	a.HighFiveGuys();
	a.WhoAmI();
	DiamondTrap b(a);
	b.takeDamage(500);
	a.takeDamage(1);
	return (0);
}
