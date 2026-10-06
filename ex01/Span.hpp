/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:11:35 by mshershe          #+#    #+#             */
/*   Updated: 2026/10/07 02:25:06 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <vector>

class Span
{
	private:
		unsigned int max_N;
		std::vector<int> numbers;
		
	public:	
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
	
		void addNumber( int num);
		template <typename it>
		void addNumbers(it begin, it end);
		long long shortestSpan();
		long long longestSpan();

};

