/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:45:39 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/05 13:24:38 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define  HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;

    public:
        void attack();
        HumanB();
        HumanB(std::string);
        HumanB(std::string, Weapon weap);
        void setWeapon(Weapon& weap);
};
#endif
