/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 11:04:23 by mshershe          #+#    #+#             */
/*   Updated: 2026/10/10 14:35:06 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <deque>
#include <stack>

template <typename T, typename C = std::deque<T> >
class MutantStack: public std::stack<T, C>
{
	private:
	
	public:
		MutantStack(): std::stack<T, C>()
		{	
		}
		
		~MutantStack()
		{
		}
		
		MutantStack(const MutantStack& other): std::stack<T, C>(other)
		{
			
		}
		
		MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
			{
				std::stack<T, C>::operator=(other);
			}
			return (*this);
		}
		typedef typename C::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		}
		
		iterator end()
		{
			return (this->c.end());
		}
};


/*

A stack is a container adapter that provides
Last In, First Out (LIFO) behavior.

supports 2 operations :
- Push: add to the top 
- Pop: remove from the top

x s.size() 
x s.empty() tells you whether the stack has any elements.

A normal std::stack deliberately does not expose iterators

*/