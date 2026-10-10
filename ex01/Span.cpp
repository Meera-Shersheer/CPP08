/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:11:43 by mshershe          #+#    #+#             */
/*   Updated: 2026/10/10 15:07:50 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():max_N(1)
{
}
Span::Span(unsigned int N)
{
	if (N == 0)
		throw std::runtime_error("The size must be larger than 0");
	this->max_N = N;
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

long long Span::shortestSpan()
{
	long long shortest;
	long long temp = 0;

	if (numbers.size() == 0)
		throw std::runtime_error("The shortest span can't be found : No elements stored");
	else if(numbers.size() == 1)
		throw std::runtime_error("The shortest span can't be found : There is only one element");
	std::vector<int> t = numbers;
	std::sort(t.begin(), t.end());
	shortest = *(t.begin() + 1) - *(t.begin());
	for (std::vector<int>::iterator it = t.begin() + 1; it < t.end() - 1; it++)
	{
		temp = *(it + 1) - *(it);
		shortest = std::min(std::abs(temp), std::abs(shortest));
	}
	return (shortest);
}

long long Span::longestSpan()
{
	long long longest;

	if (numbers.size() == 0)
		throw std::runtime_error("The longest span can't be found : No elements stored");
	else if(numbers.size() == 1)
		throw std::runtime_error("The longest span can't be found : There is only one element");
	std::vector<int> temp = numbers;
	std::sort(temp.begin(), temp.end());
	longest = *(temp.end() - 1) - *(temp.begin());
	return (longest);
}

const std::vector<int>& Span::getNumbers() const
{
	return (this->numbers);
}

int Span::getN() const
{
	return (this->max_N);
}
