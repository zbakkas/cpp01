/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:29:24 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/05 13:22:39 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

void HumanA:: attack()
{
    std::cout << name <<" attacks with their " << weapon.getType()<< "\n";
}


HumanA::HumanA(std::string str, Weapon &weap) : weapon(weap)
{
    name = str;
    // weapon = weap;
}
