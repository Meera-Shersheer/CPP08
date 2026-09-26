/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 23:48:59 by mshershe          #+#    #+#             */
/*   Updated: 2026/09/24 20:32:29 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>




int main(void)
{
	std::vector<int> num1;

	num1.push_back(10);	
	num1.push_back(8);	
	num1.push_back(9);	
	num1.push_back(5);	
	num1.push_back(2);	
	num1.push_back(54);	
	num1.push_back(6);	
	num1.push_back(9);	
	num1.push_back(3);	
	num1.push_back(0);	
	num1.push_back(9);	
	num1.push_back(120);	
	num1.push_back(3);	
	num1.push_back(14);	

	std::list<int> num2;

	num2.push_back(10);	
	num2.push_back(2);	
	num2.push_back(9);	
	num2.push_back(5);	
	num2.push_back(8);	
	num2.push_back(54);	
	num2.push_back(6);	
	num2.push_back(9);	
	num2.push_back(3);	
	num2.push_back(0);	
	num2.push_back(120);	
	
	std::deque<int> num3;
	
	num3.push_back(3);	
	num3.push_back(8);	
	num3.push_back(9);	
	num3.push_back(5);	
	num3.push_back(2);	
	num3.push_back(54);	
	num3.push_back(6);	
	num3.push_back(9);	
	num3.push_back(3);	
	num3.push_back(0);	
	num3.push_back(90);
	num3.push_back(8);	

	std::list<int> num5;

	//succesfule searching
	try
	{
		easyfind(num1, 9); 	// check it returns the first occurance in case of duplicates
		easyfind(num2, 2);
		std::deque<int>::iterator it = easyfind(num3, 3);//ocuurance at the first element
		if (it == num3.begin())
			std::cout<< "The function found the first occurance at the first element succesfully" <<std::endl;
		else if (it != num3.end())
			std::cout<< "The first occurance is not at the first element " <<std::endl;
		else
			std::cout<< "No occurances are Found" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		
		std::vector<int>::iterator  it = easyfind(num1, -4); 		//Not Found case
		if (it == num1.begin())
			std::cout<< "The function found the first occurance at the first element succesfully" <<std::endl;
		else if (it != num1.end())
			std::cout<< "The first occurance is not at the first element " <<std::endl;
		else
			std::cout<< "No occurances are Found" <<std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		
		std::list<int>::iterator  it = easyfind(num2, 120); 		//ocuurance at the last element
		if (it == num2.end())
			std::cout<< "No occurances are Found" <<std::endl;	
		else if (++it == num2.end() )
			std::cout<< "The function found the first occurance at the last element succesfully" <<std::endl;
		else
			std::cout<< "The first occurance is not at the last element " <<std::endl;
			
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