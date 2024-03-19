
#ifndef PMERGEME_HPP 
# define PMERGEME_HPP

# include <iostream>

class PmergeMe {
	
	public:
		PmergeMe(std::string input);
		PmergeMe(const PmergeMe & src);
		~PmergeMe();
		PmergeMe & operator=(const PmergeMe & src);

		/*std::stack<double>	getStack() const;

		void	operateStack(std::string input);*/
	
	private:
		//std::stack<double>	_st;
};

#endif