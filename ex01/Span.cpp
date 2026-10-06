/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:11:43 by mshershe          #+#    #+#             */
/*   Updated: 2026/10/07 02:27:35 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
Span::Span(unsigned int N): max_N(N)
{
}

Span::Span(const Span& other): max_N(other.max_N), numbers(other.numbers)
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->max_N = other.max_N;
		this->numbers = other.numbers;
	}
	return (*this);
}

Span::~Span()
{
}
void Span::addNumber(int num)
{
	if (numbers.size() == max_N)
		throw std::runtime_error("No space left for any other elements");
	else
	{
		numbers.push_back(num);
	}
}
template <typename it>
void Span::addNumbers(it begin, it end)
{
	int add_range_length = std::distance(begin, end);
	int i = 0;
	try
	{
		while(i < add_range_length)
		{
			addNumber(*begin);
			begin++;
			i++;
		}
	}
	catch(const std::exception& e)
	{
		throw std::runtime_error("No space left for any other elements");
	}
	
}
long long Span::shortestSpan()
{
	long long shortest;
	long long temp = 0;

	if (numbers.size() == 0)
		throw std::runtime_error("No elements stored");
	else if(numbers.size() == 1)
		throw std::runtime_error("There is only one element");

	std::sort(numbers.begin(), numbers.end());
	shortest = *(numbers.begin() + 1) - *(numbers.begin());
	for (std::vector<int>::iterator it = numbers.begin() + 1; it < numbers.end(); it++)
	{
		temp = *(it + 1) - *(it);
		shortest = std::min(temp, shortest);
	} 
	return (shortest);
}

long long Span::longestSpan()
{
	long long longest;
	
	if (numbers.size() == 0)
		throw std::runtime_error("No elements stored");
	else if(numbers.size() == 1)
		throw std::runtime_error("There is only one element");
	
	std::sort(numbers.begin(), numbers.end());
	longest = *(numbers.end()) - *(numbers.begin());
	return (longest);
}


