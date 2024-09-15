/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:00:32 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/14 16:52:04 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_gateKeeperMode = false;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_gateKeeperMode = false;
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    this->_gateKeeperMode = copy._gateKeeperMode;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& rhs)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

void ScavTrap::guardGate()
{
    if (this->_gateKeeperMode == false)
    {
        this->_gateKeeperMode = true;
        std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
    }
}

void ScavTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! It hurts!" << std::endl;
        _energyPoints--;
    }
    else if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " doesn't have enough energy to attack" << std::endl;
    }
    else
        std::cout << _name << "Not enough hit points" << std::endl;
}
