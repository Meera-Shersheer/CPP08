/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 23:49:12 by mshershe          #+#    #+#             */
/*   Updated: 2026/09/24 02:46:08 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <stdexcept>


template <typename T>

typename T::iterator easyfind (T &container, int val)
{
	typename T::iterator oc;
	
	oc = std::find(container.begin(), container.end(), val);
	if (oc == container.end())
		throw std::runtime_error("Not Found");
	return (oc);
}


