/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:34:13 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/18 12:37:35 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

# include <vector>
# include <deque>

int	main()
{
	{
		std::cout << "\033[31mTest element found in vector\033[0m" << std::endl;
		std::vector<int> v;
		v.push_back(0);
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);

		try {
			std::cout << std::boolalpha << v.empty() << std::endl;
			std::cout << *easyfind(v, 3) << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "\033[31mTest element found in deque\033[0m" << std::endl;

		std::deque<int> d;
		d.push_back(0);
		d.push_back(1);
		d.push_back(2);
		d.push_back(3);
		d.push_back(4);

		try {
			std::cout << std::boolalpha << d.empty() << std::endl;
			std::cout << *easyfind(d, 3) << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "\033[31mTest element NOT found in container\033[0m" << std::endl;
		std::vector<int> v;
		v.push_back(0);
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);

		try {
			std::cout << std::boolalpha << v.empty() << std::endl;
			std::cout << *easyfind(v, 10) << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "\033[31mTest empty container\033[0m" << std::endl;
		std::vector<int> v;

		try {
			std::cout << std::boolalpha << v.empty() << std::endl;
			std::cout << *easyfind(v, 10) << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "\033[31mTest empty container\033[0m" << std::endl;
		std::vector<int> v;

		try {
			std::cout << std::boolalpha << v.empty() << std::endl;
			std::cout << *easyfind(v, 10) << std::endl;
		}
		catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
/*	{
		std::cout << std::endl << "\033[31mTest search float in int container\033[0m" << std::endl;
		std::vector<int> v;

		v.push_back(0);
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		
		try {
			std::cout << std::boolalpha << v.empty() << std::endl;
			std::cout << easyfind(v, 10.42f) << std::endl; // Impossible to compile with flag -Wconversion
		}
		catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
*/
}
