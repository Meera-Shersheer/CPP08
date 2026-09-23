/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 23:48:59 by mshershe          #+#    #+#             */
/*   Updated: 2026/09/24 02:46:47 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>




int main(void)
{
	std::vector<int> num1 = {10,8 ,9,5,2,54,6,9,3,0, 9, 120, 3, 14};
	std::list<int> num2 = {10,2 ,9,5,8,54,6,9,3,0, 120};
	std::deque<int> num3 = {3,8 ,9,5,2,54,6,9,3,0, 90, 8};
	std::list<int> num5;

	//succesfule searching
	try
	{
		easyfind(num1, 9); 	// check it returns the first occurance in case of duplicates
		easyfind(num2, 2);
		easyfind(num3, 3);//ocuurance at the first element
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		easyfind(num1, -4); 		//Not Found case
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		easyfind(num2, 120); 		//ocuurance at the last element
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		easyfind(num5, 0); 			//empty container
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	

	
	return (0);
}