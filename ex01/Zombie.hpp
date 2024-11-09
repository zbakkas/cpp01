/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:21:35 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/09 17:03:24 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce( void );
        void setName(std::string str);
        std::string getName();
        Zombie(void);
        Zombie(std::string str);
        ~Zombie();
};


Zombie* zombieHorde( int N, std::string name );

#endif