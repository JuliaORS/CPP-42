
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
		
		void	createVectJacobsthall();
		void	sortVector();
		void	sortList();

	private:
		std::vector<int>	_input;
		std::vector<int>	_vectJacobsthall;

		std::vector<int>	_vectInitial;
		std::vector<int>	_vectFinal;
		std::vector<int>	_vectAux;

		std::list<int>		_lstInitial;
		std::list<int>		_lstFinal;
		std::list<int>		_lstAux;

		
		void	addOnePairSortedVector(int i);
		void	addPairNumbersSortedVector();
		void	splitNumbersIntoVectors();
		void	insertSmallNumbersVector();
		void	binaryInsertionVector(int nb);

		void	addOnePairSortedList(int i);
		void	addPairNumbersSortedList();
		void	splitNumbersIntoLists();
		void	insertSmallNumbersList();
		void	binaryInsertionList(int nb);

};

#endif