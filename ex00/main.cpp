/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:19:25 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/14 18:21:41 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap a("Clappy");
	
	a.attack("Olxinos");
	a.takeDamage(9);
	a.beRepaired(10);
	a.takeDamage(25);
	return (0);
}
