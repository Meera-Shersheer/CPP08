/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 23:49:12 by mshershe          #+#    #+#             */
/*   Updated: 2026/09/20 21:30:02 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T>

int easyfind (T &container, int val)
{

	T::iterator str = container.begin();
	T::iterator end = container.end() - 1;


	for (str != end ;str++)
	{
		if (*str == val)
			return (str);
	}
}


//iterators and find functions
// complete reading : https://www.geeksforgeeks.org/cpp/iterators-c-stl/
//ref :  https://www.geeksforgeeks.org/cpp/c-magicians-stl-algorithms/ 
