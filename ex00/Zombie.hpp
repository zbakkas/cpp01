/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:21:35 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/09 17:04:46 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_hpp
#define ZOMBIE_hpp
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


void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif