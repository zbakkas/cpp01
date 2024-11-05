/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:45:44 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/05 12:11:02 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"



Weapon :: Weapon()
{
    
}
Weapon :: Weapon(std::string str)
{
    type =str;
}
const std::string Weapon:: getType()
{
    return type;
}
void Weapon:: setType(std::string str)
{
    type = str;
}
