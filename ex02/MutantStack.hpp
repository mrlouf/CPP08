/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:39:02 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/18 18:02:13 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <algorithm>
# include <iterator>

class MutantStack : public std::stack {
	private:

	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &m);
		MutantStack &operator=(const MutantStack &m);



};

#endif
