/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:49:15 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/14 16:42:16 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
}
