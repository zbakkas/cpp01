/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:32:08 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/05 13:24:26 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB:: attack()
{
    std::cout << name <<" attacks with their " << weapon->getType()<<"\n";
}

HumanB::HumanB(std::string str)
{
    name = str;
}
HumanB::HumanB(std::string str, Weapon weap)
{
    name = str;
    weapon = NULL;
}
void HumanB::setWeapon(Weapon& weap)
{
    weapon = &weap;
}