/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 21:11:25 by mshershe          #+#    #+#             */
/*   Updated: 2026/10/10 01:33:21 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Span.hpp"

int main(void)
{

//Normal small cases
try
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
    sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;
//duplicates
try
{
	Span sp = Span(10);

	sp.addNumber(6);
	sp.addNumber(9);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
    sp.addNumber(11);
	sp.addNumber(6);
    sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;

//negative numbers
try
{
	Span sp = Span(6);

	sp.addNumber(-6);
	sp.addNumber(3);
	sp.addNumber(-17);
	sp.addNumber(9);
	sp.addNumber(17);
    sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;

//negative numbers
try
{
	Span sp = Span(6);

	sp.addNumber(-6);
	sp.addNumber(-3);
	sp.addNumber(-17);
	sp.addNumber(-9);
	sp.addNumber(-16);
    sp.addNumber(-11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;

//one element
try
{
	Span sp = Span(5);

	sp.addNumber(6);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}

std::cout<< " ----------------------------------------------------------- " <<std::endl;

//empty Span
try
{
	Span sp = Span(7);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;

//2 elements
try
{
	Span sp = Span(3);

	sp.addNumber(0);
	sp.addNumber(6);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;

//0 space span
try
{
	Span sp = Span(0);

	std::cout << "----------------------------" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;


//les than N elements
try
{
	Span sp = Span(16);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
    sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}

std::cout<< " ----------------------------------------------------------- " <<std::endl;


//N+1 elements
try
{
	Span sp = Span(4);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
    sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;


//10,000+ elements
try
{
	int N = 10100;
	Span sp = Span(N);

	for (int i = 0;i < N;i++)
	{
		sp.addNumber(-1);
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}

std::cout<< " ----------------------------------------------------------- " <<std::endl;

//iterator-range insertion (normal)
try
{
	Span range = Span(5);

	range.addNumber(1);
	range.addNumber(3);
	range.addNumber(5);
	range.addNumber(9);
    range.addNumber(7);
	
	Span sp = Span(15);

	sp.addNumber(6);
	sp.addNumber(2);
	sp.addNumber(17);
	sp.addNumber(-6);
    sp.addNumber(11);
	
	const std::vector<int>& values = range.getNumbers();

	sp.addNumbers(values.begin(), values.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;

//iterator-range insertion (mid stop)
try
{
	Span range = Span(5);

	range.addNumber(6);
	range.addNumber(3);
	range.addNumber(17);
	range.addNumber(9);
    range.addNumber(11);
	
	Span sp = Span(8);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
    sp.addNumber(11);

	const std::vector<int>& values = range.getNumbers();

	sp.addNumbers(values.begin(), values.end());
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
	
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;


//iterator-range insertion (can't add any number)
try
{
	Span range = Span(5);

	range.addNumber(6);
	range.addNumber(3);
	range.addNumber(17);
	range.addNumber(9);
    range.addNumber(11);
	
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
    sp.addNumber(11);

	const std::vector<int>& values = range.getNumbers();

	sp.addNumbers(values.begin(), values.end());
		
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
std::cout<< " ----------------------------------------------------------- " <<std::endl;


//iterator-range insertion (mid range)
try
{
	Span range = Span(5);

	range.addNumber(-1);
	range.addNumber(-2);
	range.addNumber(-3);
	range.addNumber(-4);
    range.addNumber(-5);
	
	Span sp = Span(12);

	sp.addNumber(1);
	sp.addNumber(2);
	sp.addNumber(3);
	sp.addNumber(4);
    sp.addNumber(5);

	const std::vector<int>& values = range.getNumbers();

	sp.addNumbers(values.begin()+ 1, values.end() - 1);// -2 -3 -4
	std::cout << "The stored numbers: ";
	
    for (unsigned int i = 0; i < sp.getNumbers().size(); i++)
    {
		std::cout << sp.getNumbers()[i] << " ";
    }
	std::cout << std::endl;
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
	
}

	return (0);
}