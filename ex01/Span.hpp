/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:11:35 by mshershe          #+#    #+#             */
/*   Updated: 2026/10/10 01:10:20 by mshershe         ###   ########.fr       */
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
		Span();	
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
	
		void addNumber( int num);
		long long shortestSpan();
		long long longestSpan();
		
		const std::vector<int>& getNumbers() const;
        int getN() const;
		
		//void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		template <typename Iterator>
		void addNumbers(Iterator begin, Iterator end)
		{
			while (begin != end)
			{
				addNumber(*begin);
				++begin;
			}
		}
	
};

