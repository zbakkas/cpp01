/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:26:11 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/04 18:46:21 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"




void Zombie::announce()
{
    std::cout << name <<": BraiiiiiiinnnzzzZ...\n";
}
void Zombie::setName(std::string str)
{
    name =str;
}
std::string  Zombie:: getName()
{
    return name;
}
Zombie :: Zombie()
{
    
}
Zombie :: Zombie(std::string str)
{
    setName(str);
    announce();
}

Zombie ::~Zombie()
{
    std::cout<<  name <<": baaaaay\n";
}


