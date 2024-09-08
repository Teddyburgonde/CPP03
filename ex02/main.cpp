/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:49:15 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/08 18:26:34 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    std::cout << "------------------------" << std::endl;
    ScavTrap c("Cyril");
    ScavTrap d("David");
    int damage2 = 500;
    
    c.setAttackDamage(damage2);
    d.setAttackDamage(damage2);
    std::cout << std::endl;
    std::cout << "Les valeurs de " << c << std::endl;
    std::cout << "Les valeurs de " << d << std::endl;
    std::cout << std::endl;
    c.attack("David");
    d.takeDamage(damage2);
    std::cout << "Les valeurs de " << d << std::endl;
    std::cout << std::endl;
    d.beRepaired(5);
    std::cout << std::endl;
    std::cout << "Les valeurs de " << c << std::endl;
    std::cout << "Les valeurs de " << d << std::endl;
    std::cout << std::endl;
    c.guardGate();
    d.guardGate();
    std::cout << std::endl;
    
    std::cout << "------------------------" << std::endl;
    FragTrap e("Eddy");
    FragTrap f("Fabrice");
    int damage3 = 500;
    
    e.setAttackDamage(damage3);
    f.setAttackDamage(damage3);
    std::cout << std::endl;
    std::cout << "Les valeurs de " << e << std::endl;
    std::cout << "Les valeurs de " << f << std::endl;
    std::cout << std::endl;
    e.attack("Fabrice");
    f.takeDamage(damage3);
    std::cout << "Les valeurs de " << f << std::endl;
    std::cout << std::endl;
    f.beRepaired(5);
    std::cout << std::endl;
    std::cout << "Les valeurs de " << e << std::endl;
    std::cout << "Les valeurs de " << f << std::endl;
    std::cout << std::endl;
    e.highFivesGuys();
    f.highFivesGuys();
    std::cout << std::endl;
    return (0);

}
