/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:49:17 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/25 15:23:23 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP 
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <list>

class PmergeMe {
	
	public:
		PmergeMe(std::vector<int> input);
		PmergeMe(const PmergeMe & src);
		~PmergeMe();
		PmergeMe & operator=(const PmergeMe & src);

		std::vector<int>	getInput() const;
		
	private:
		std::vector<int>	_input;
		std::vector<int>	_vectJacobsthall;

		std::vector<int>	_vectInitial;
		std::vector<int>	_vectFinal;
		std::vector<int>	_vectAux;
		int					_timeVector;

		std::list<int>		_lstInitial;
		std::list<int>		_lstFinal;
		std::list<int>		_lstAux;
		int					_timeList;

		void	createVectJacobsthall();
		void	printOutput();
		
		void	sortVector();
		void	addOnePairSortedVector(unsigned int i);
		void	addPairNumbersSortedVector();
		void	splitNumbersIntoVectors();
		void	insertSmallNumbersVector();
		void	binaryInsertionVector(int nb);

		void	sortList();
		void	addOnePairSortedList(unsigned int i);
		void	addPairNumbersSortedList();
		void	splitNumbersIntoLists();
		void	insertSmallNumbersList();
		void	binaryInsertionList(int nb);

};

#endif