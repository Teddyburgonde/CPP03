/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:52:34 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/06 15:55:38 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :_name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    
}

// constructor par copie 






ClapTrap::ClapTrap(std::string name) :_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}


// Overloaded Operators 
// copie les valeurs des variables de Claptrap dans un autre objet ClapTrap 





void	ClapTrap::attack(const std::string& target)
{
    if (_hitPoints && _energyPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
        <<_attackDamage << " points of domage!" <<std::endl;
        _energyPoints-= 10;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " has not enough hit points or energy points to attack!" << std::endl;
    }
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    _hitPoints -= amount;
    
}