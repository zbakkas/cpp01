/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:45:35 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/05 12:48:58 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define  HUMANA_HPP


#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon  &weapon;
        std::string name;
    public:
        void attack();
        HumanA();
        HumanA(std::string);
        HumanA(std::string str, Weapon &weap);
};
#endif