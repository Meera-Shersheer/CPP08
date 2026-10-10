/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshershe <mshershe@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 11:03:53 by mshershe          #+#    #+#             */
/*   Updated: 2026/10/10 14:53:27 by mshershe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop(); 
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5); 
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl; ++it;
	}
	
	std::stack<int> s(mstack);

	std::cout << "---------------------------------------"<< std::endl;
	
	MutantStack<int> m;
	
	std::cout << m.empty() << std::endl; // 1
	m.push(10);
	m.push(20);
	m.push(-30);
	
	std::cout << m.top() << std::endl;  // -30
	std::cout << m.size() << std::endl; // 3
	
	m.pop();
	
	std::cout << m.top() << std::endl;  // 20
	std::cout << m.size() << std::endl; // 2
	
	m.push(5);
	m.push(17);
	m.push(3);
	m.push(42);
	
	std::cout << "original: ";
	for (MutantStack<int>::iterator it = m.begin(); it != m.end(); ++it)
	    std::cout << *it << " ";
	
	std::cout << std::endl;
	std::cout << "---------------------------------------"<< std::endl;

	MutantStack<int> copy(m);
	std::cout << "copy: ";
	for (MutantStack<int>::iterator it2 =copy.begin(); it2 != copy.end(); ++it2)
	    std::cout << *it2 << " ";
	std::cout << std::endl;
	
	copy.push(-42);

	std::cout << "copy after a push: ";
	for (MutantStack<int>::iterator it2 =copy.begin(); it2 != copy.end(); ++it2)
	    std::cout << *it2 << " ";
	std::cout << std::endl;
	
	std::cout << "---------------------------------------"<< std::endl;

	MutantStack<int> copy2 = m;
	std::cout << "Assigned copy: ";
	for (MutantStack<int>::iterator it3 =copy2.begin(); it3 != copy2.end(); ++it3)
	    std::cout << *it3 << " ";
	std::cout << std::endl;
	
	copy2.pop();

	std::cout << "assigned copy after a pop: ";
	for (MutantStack<int>::iterator it4 =copy2.begin(); it4 != copy2.end(); ++it4)
	    std::cout << *it4 << " ";
	std::cout << std::endl;








	
	std::cout << "---------------------------------------"<< std::endl;
	MutantStack<int> m2;
	std::cout << m2.empty() << std::endl; // 1
	m.push(10);
	for (MutantStack<int>::iterator it = m.begin(); it != m.end(); ++it)
	    std::cout << *it << " ";
	
	std::cout << std::endl;
	std::cout << "---------------------------------------"<< std::endl;

	MutantStack<int, std::vector<int> > m_stack;
	
	m_stack.push(5);
	m_stack.push(17);
	
	std::cout << m_stack.top() << std::endl;
	
	m_stack.pop(); 
	
	std::cout << m_stack.size() << std::endl;
	
	m_stack.push(3);
	m_stack.push(5); 
	m_stack.push(737);
	m_stack.push(0);
	
	MutantStack<int,std::vector<int> >::iterator iter = m_stack.begin(); 
	MutantStack<int, std::vector<int> >::iterator itere = m_stack.end();
	
	while (iter != itere)
	{
		std::cout << *iter << std::endl;
		++iter;
	}
	
	
	return 0;
}