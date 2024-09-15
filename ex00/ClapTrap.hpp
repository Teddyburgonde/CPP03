/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:50:59 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/14 16:11:34 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap& rhs);

	public:
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	public:
	std::string getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;

	private:
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

};

std::ostream& operator<<(std::ostream& os, const ClapTrap& clapTrap);

#endif
