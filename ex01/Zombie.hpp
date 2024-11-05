/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:21:35 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/04 19:51:33 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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