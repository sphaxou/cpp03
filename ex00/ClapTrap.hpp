/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:01:18 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/14 18:06:43 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <string>

class ClapTrap
{
	private:
		std::string	Name;
		int			Hitpoints;
		int			Energypoints;
		int			Attackdamage;
	
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
