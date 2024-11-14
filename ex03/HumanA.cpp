/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:29:24 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/10 13:06:10 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

void HumanA:: attack()
{
    std::cout << name <<" attacks with their " << weapon.getType()<< "\n";
}

//weapon(weap) ===> initializer list
HumanA::HumanA(std::string str, Weapon &weap) : weapon(weap)
{
    name = str;
    // weapon = weap;
}
