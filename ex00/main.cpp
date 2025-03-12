/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:34:13 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/12 19:14:32 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int	main()
{
	{
		std::vector<int> v;
		v.push_back(0);
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);

		try {
			std::cout << std::boolalpha << v.empty() << std::endl;
			std::cout << easyfind(v, 3) << std::endl;
			std::cout << easyfind(v, 10) << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
}
