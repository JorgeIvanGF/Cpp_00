/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:01:52 by jorgutie          #+#    #+#             */
/*   Updated: 2025/04/25 14:01:58 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int ac, char **av)
{
    if(ac ==1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    for(int i = 1; i < ac; i++ )
    {
        for(int j = 0; av[i][j]; j++)
        {
            std::cout << static_cast<char>(std::toupper(av[i][j]));
        
        }
        if(av[i + 1])
        std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}