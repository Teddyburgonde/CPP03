/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:49:15 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/07 13:56:46 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Adrien");
    ClapTrap b("Benoit");
    int damage = 500;

    a.setAttackDamage(damage);
    b.setAttackDamage(damage);
    std::cout << std::endl;
    std::cout << "Les valeurs de " << a << std::endl;
    std::cout << "Les valeurs de " << b << std::endl;
    std::cout << std::endl;
    a.attack("Benoit");
    b.takeDamage(damage);
    std::cout << "Les valeurs de " << b << std::endl;
    std::cout << std::endl;
    b.beRepaired(5);
    std::cout << std::endl;
    std::cout << "Les valeurs de " << a << std::endl;
    std::cout << "Les valeurs de " << b << std::endl;
    std::cout << std::endl;
}
