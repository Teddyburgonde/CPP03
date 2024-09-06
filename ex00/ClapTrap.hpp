/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:50:59 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/06 14:21:23 by tebandam         ###   ########.fr       */
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
	ClapTrap &operator=(const ClapTrap& copy);

	public:
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	private:
	std::string _name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif






/* public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &copy);
        void    attack(std::string const & target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    setName(std::string name);
        std::string getName(void);
        void    setHitPoints(int hitPoints);
        int     getHitPoints(void);
        void    setEnergyPoints(int energyPoints);
        int     getEnergyPoints(void);
        void    setAttackDamage(int attackDamage);
        int     getAttackDamage(void);
    private:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage; */