/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougrin <abougrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:36:16 by abougrin          #+#    #+#             */
/*   Updated: 2021/12/10 16:26:17 by abougrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	ClapTrap player1("Mr.Qdoor");
	ClapTrap player2("Ms.Qdoora");

	player1.attack(player2.getName());
	player2.takeDamage(10);
	player2.beRepaired(5);
	
	std::cout << std::endl;
	
	ScavTrap player3("abdeljalil");
	ScavTrap player4("bougrine");

	player4.guardGate();
	player3.attack(player4.getName());
	player3.takeDamage(55);
	player3.beRepaired(98);
	
	std::cout << std::endl;

	FragTrap player5("nike");
	FragTrap player6("adidas");
	
	player6.highFivesGuys();
	player5.attack(player6.getName());
	player6.takeDamage(23);
	player6.beRepaired(18);
	

	return (0);
}