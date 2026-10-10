/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:11:35 by mshershe          #+#    #+#             */
/*   Updated: 2026/10/10 18:59:37 by mshershe         ###   ########.fr       */
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
		
		template <typename Iterator>
		void addNumbers(Iterator begin, Iterator end)
		{
			if ((this->getNumbers().size() + std::distance(begin, end)) > max_N)
				throw std::runtime_error("No space left for any other elements");
			this->numbers.insert(this->numbers.end(), begin, end);
		}
	
};

