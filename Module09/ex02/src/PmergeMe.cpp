
#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
	operateStack(input);
}

PmergeMe::PmergeMe(const PmergeMe & src){
	*this = src;
}

PmergeMe::~PmergeMe(){
}

PmergeMe & PmergeMe::operator=(const PmergeMe & src) {
	if (this != &src){
		//this->_st = src.getStack();
	}
	return (*this);
}
