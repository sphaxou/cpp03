/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 18:01:18 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/14 18:48:36 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <string>

class ClapTrap
{
	protected:
		std::string	Name;
		int			Hitpoints;
		int			Energypoints;
		int			Attackdamage;
	
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &);
		ClapTrap(const std::string &name);
		~ClapTrap(void);

		ClapTrap &operator=(const ClapTrap &);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
