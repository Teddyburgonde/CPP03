/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:49:15 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/14 17:11:50 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap a("Adrien");
    ClapTrap b("Benoit");


    std::cout << std::endl;
    std::cout << "Values of " << a << std::endl;
    std::cout << "Values of " << b << std::endl;
    std::cout << std::endl;

    a.attack("Denis");
    std::cout << std::endl;
    b.takeDamage(1);
    std::cout << "Values of " << b << std::endl;
    std::cout << std::endl;
    b.beRepaired(1);
    std::cout << std::endl;
    std::cout << "Values of " << a << std::endl;
    std::cout << "Values of " << b << std::endl;
    std::cout << std::endl;

    std::cout << "------------------------" << std::endl;
    ScavTrap c("Cyril");
    ScavTrap d("David");

    std::cout << std::endl;
    std::cout << "Values of " << c << std::endl;
    std::cout << "Values of " << d << std::endl;
    std::cout << std::endl;
    c.attack("OVNI");
    std::cout << std::endl;
    d.takeDamage(10);
    std::cout << "Values of " << d << std::endl;
    std::cout << std::endl;
    d.beRepaired(5);
    std::cout << std::endl;
    std::cout << "Values of " << c << std::endl;
    std::cout << "Values of " << d << std::endl;
    std::cout << std::endl;
    c.guardGate();
    d.guardGate();
    std::cout << std::endl;
    
    std::cout << "------------------------" << std::endl;
    FragTrap e("Eddy");
    FragTrap f("Fabrice");
    std::cout << std::endl;
    
    std::cout << "Values of " << e << std::endl;
    std::cout << "Values of " << f << std::endl;
    std::cout << std::endl;
    e.attack("a Panda");
    std::cout << std::endl;
    f.takeDamage(20);
    f.beRepaired(5);
    std::cout << std::endl;
    std::cout << "Values of " << e << std::endl;
    std::cout << "Values of " << f << std::endl;
    std::cout << std::endl;
    e.highFivesGuys();
    f.highFivesGuys();
    std::cout << std::endl;
    return (0);

}
