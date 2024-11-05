/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:45:56 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/05 12:10:56 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>


class Weapon
{
    private:
        std::string type;
    public:
        const std::string getType();
        void setType(std::string str);
        Weapon();
        Weapon(std::string str);
};
#endif

