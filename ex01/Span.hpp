/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:44:48 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/18 16:56:24 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iterator>
# include <algorithm>
# include <climits>

class Span {
	private:
		unsigned int		_N;
		std::vector<int>	_vector;

		Span();

	public:
		Span(const Span &s);
		Span &operator=(const Span &s);
		~Span();

		Span(const unsigned int N);

		void addNumber(int n);
		
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
};

#endif
