/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:37:55 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/12 19:13:00 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <exception>

template <typename T>
T easyfind(std::vector<T> &v, const int i);

class ElementNotFoundException : public std::exception {
	public:
		virtual const char *what() const throw();
};

# include "easyfind.tpp"

#endif
