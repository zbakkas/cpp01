/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 19:17:00 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/12 20:55:13 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
   
    if( N<0)
        return NULL;
    Zombie *zombie = new Zombie[N];
    for(int i=0;i<N;i++)
    {
        zombie[i].setName(name);
        zombie[i].announce();
    }
    return zombie;
}