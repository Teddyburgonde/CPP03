/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:52:34 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/14 16:44:22 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :_name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& rhs)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    _name = rhs._name;
    _hitPoints = rhs._hitPoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {    
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " doesn't have enough energy to attack" << std::endl;
    }
    else
        std::cout << _name << "Not enough hit points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
        _hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << _name << " cannot repair because it is out of service (0 hit points)!" << std::endl;
        std::cout << _name << " is dead." << std::endl;
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout << _name << " has no energy left to repair!" << std::endl;
        return ;
    }
    _hitPoints += amount;
    _energyPoints--;
    std::cout << _name << " recovers " << amount << " hit points!" << std::endl;
}

std::string ClapTrap::getName() const
{
    return _name;
}

int ClapTrap::getHitPoints() const
{
    return _hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return _energyPoints;
}

int ClapTrap::getAttackDamage() const
{
    return _attackDamage;
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& clapTrap)
{
    os << clapTrap.getName()
       << " : Hit Points: " << clapTrap.getHitPoints()
       << " | Energy Points: " << clapTrap.getEnergyPoints()
       << " | Attack Damage: " << clapTrap.getAttackDamage();
    return os;
}
