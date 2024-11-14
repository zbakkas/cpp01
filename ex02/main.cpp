/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zouhirbakkas@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:48:37 by zbakkas           #+#    #+#             */
/*   Updated: 2024/11/10 11:48:06 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str= "HI THIS IS BRAIN";
    std::string *stringPTR =&str;
    std::string &stringREF =str;

    std::cout<< "The memory address of the string variable: "<< &str<<"\n";
    std::cout<< "The memory address held by stringPTR:      "<<stringPTR<<"\n";
    std::cout<< "The memory address held by stringREF:      "<< &stringREF<<"\n";

    std::cout<< "The value of the string variable:    "<< str<<"\n";
    std::cout<< "The value pointed to by stringPTR:   "<<*stringPTR<<"\n";
    std::cout<< "• The value pointed to by stringREF: "<< stringREF<<"\n";
    
}