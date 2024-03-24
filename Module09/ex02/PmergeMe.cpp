
#include "PmergeMe.hpp"
#include <algorithm> 

PmergeMe::PmergeMe(std::vector<int> input) : _input(input){
	createVectJacobsthall();
}

PmergeMe::PmergeMe(const PmergeMe & src){
	*this = src;
}

PmergeMe::~PmergeMe(){
}

PmergeMe & PmergeMe::operator=(const PmergeMe & src) {
	if (this != &src){
		this->_input = src.getInput();
	}
	return (*this);
}

//getters
std::vector<int>	PmergeMe::getInput() const {
	return(this->_input);
}

//utils
void	printVector(std::vector<int> vect){
	for(std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	printList(std::list<int> lst){
	for(std::list<int>::iterator it = lst.begin(); it != lst.end(); it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void vectorIsSorted(std::vector<int> vect){
	
	for(std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++){
		if (it != vect.begin() && *it < *(std::prev(it))){
			std::cout << "vector is NOT sorted" << std::endl;
			return;
		}
	}
	std::cout << "vector is sorted" << std::endl;
}

void listIsSorted(std::list<int> lst){
	for(std::list<int>::iterator it = lst.begin(); it != lst.end(); it++){
		if (it != lst.begin() && *it < *(std::prev(it))){
			std::cout << "list is NOT sorted" << std::endl;
			return;
		}	
	}
	std::cout << "list is sorted" << std::endl;
}

//Functions
void	PmergeMe::createVectJacobsthall(){
	
	int size;
	if (_input.size() % 2 == 0)
		size = _input.size() / 2;
	else 
		size = (_input.size() / 2) + 1;
	_vectJacobsthall = {0, 1};
	int prev = 1;
	int prevprev = 0;
	int nb = 0;
	while(nb < size && nb < 47){
		nb = prev + (2 * prevprev);
		if (nb > size)
			nb = size;
		_vectJacobsthall.push_back(nb);
		prevprev = prev;
		prev = nb;
		for (int i=nb-1; i > prevprev; i--){
			_vectJacobsthall.push_back(i);
		}
	}
	_vectJacobsthall.erase(_vectJacobsthall.begin(), _vectJacobsthall.begin() + 2);
}

//Vector functions
void PmergeMe::addOnePairSortedVector(int i){
	if (i < _input.size() - 1 && _input[i+1] > _input[i]) {
		_vectInitial.push_back(_input[i+1]);
		_vectInitial.push_back(_input[i]);
	} else {
		_vectInitial.push_back(_input[i]);
		_vectInitial.push_back(_input[i+1]);
	}
}	

void	PmergeMe::addPairNumbersSortedVector(){
	for(int i=0; i < _input.size(); i+=2){
		if (i < _input.size() - 1){
			addOnePairSortedVector(i);
			for(int j=i; j > 0; j-=2){
				if ( _vectInitial[j] < _vectInitial[j-2]){
					std::swap(_vectInitial[j], _vectInitial[j-2]);
					std::swap(_vectInitial[j+1],_vectInitial[j-1]);
				}
			}
		}
		else 
			_vectInitial.push_back(_input[i]);
	}
}

void	PmergeMe::splitNumbersIntoVectors(){
	for (int i=0; i < _vectInitial.size()-1; i+=2){
		_vectFinal.push_back(_vectInitial[i]);
		_vectAux.push_back(_vectInitial[i+1]);
	}
	if (_vectInitial.size() % 2 != 0)
		_vectAux.push_back(_vectInitial[_vectInitial.size()-1]);
}

void	PmergeMe::binaryInsertionVector(int nb){
	int maxIndex = _vectFinal.size() - 1;
	int minIndex = 0;
	while (maxIndex - minIndex > 1){
		/*if (nb == _vectFinal[maxIndex]){
			//std::cout << "entra" <<std::endl;
			break;
		}
		if (nb == _vectFinal[minIndex]){
			minIndex = maxIndex;
			//std::cout << "entra2" <<std::endl;
			break;
		}*/
		if (nb > _vectFinal[((maxIndex - minIndex)/2 + minIndex)])
			minIndex = (maxIndex - minIndex)/2 + minIndex;
		else 
			maxIndex = maxIndex - ((maxIndex - minIndex)/2);
		if (maxIndex - minIndex <= 1){
			if (_vectFinal[minIndex] > nb)
				maxIndex = minIndex;
			/*if (nb == _vectFinal[maxIndex] || nb == _vectFinal[minIndex])
				minIndex = maxIndex;*/
				break; 
		}	
	}
	_vectFinal.insert(_vectFinal.begin() + maxIndex, nb);

}

void	PmergeMe::insertSmallNumbersVector(){
	for (int i=0; i < _vectAux.size(); i++){
		int nb;
		if (i < _vectJacobsthall.size())
			nb = _vectAux[_vectJacobsthall[i] - 1];
		else
			nb = _vectAux[i];
		binaryInsertionVector(nb);
	}
}

void	PmergeMe::sortVector(){
	
	printVector(_input);

	addPairNumbersSortedVector();
	splitNumbersIntoVectors();
	insertSmallNumbersVector();

	vectorIsSorted(_vectFinal);
	
	printVector(_vectFinal);
}

//list functions
void PmergeMe::addOnePairSortedList(int i){
	if (i < _input.size() - 1 && _input[i+1] > _input[i]) {
		_lstInitial.push_back(_input[i+1]);
		_lstInitial.push_back(_input[i]);
	} else {
		_lstInitial.push_back(_input[i]);
		_lstInitial.push_back(_input[i+1]);
	}
}	

void	PmergeMe::addPairNumbersSortedList(){
	
	for(int i=0; i < _input.size()-1; i+=2){
		addOnePairSortedList(i);
		std::list<int>::iterator it = std::prev(_lstInitial.end(), 2);
		while (it != _lstInitial.begin()){
			std::list<int>::iterator twobeforeIt = std::prev(it, 2);
			if (*it < *twobeforeIt){
				std::iter_swap(it, twobeforeIt);
				std::iter_swap(std::next(it), std::prev(it, 1));
			}
			it--;
			it--;
		}
	}
	if (_input.size() % 2 != 0)
		_lstInitial.push_back(_input[_input.size()-1]);
}

void	PmergeMe::splitNumbersIntoLists(){
	std::list<int>::iterator it = _lstInitial.begin();
	while (it != _lstInitial.end()) {
		if (it != std::prev(_lstInitial.end())){
			_lstFinal.push_back(*it);
			_lstAux.push_back(*(std::next(it)));
			it++;
		}
		else
			_lstAux.push_back(*it);
		it++;
    }
}

void	PmergeMe::binaryInsertionList(int nb){

	std::list<int>::iterator maxIter = std::prev(_lstFinal.end());
	std::list<int>::iterator minIter = _lstFinal.begin();
	int dist = std::distance(minIter, maxIter);
	while (dist > 1){
		//std::cout << "numero: " << std::endl;
		dist = std::distance(minIter, maxIter);
		//std::cout << "dist " << dist << std::endl;
		//std::cout << "abans: max " << *maxIter << "min " << *minIter << std::endl;
		if (nb > *(std::next(minIter, dist/2)))
			minIter = std::next(minIter, dist/2);
		else
			maxIter = std::prev(maxIter, dist/2);
		//std::cout << "despres: max " << *maxIter << "min " << *minIter << std::endl;
	
		if (dist <= 1){
			if (*minIter > nb)
				maxIter = _lstFinal.begin();
		}
	
	}

	_lstFinal.insert(maxIter, nb);
}

void	PmergeMe::insertSmallNumbersList(){

	for(int i=0; i < _lstAux.size(); i++){
		int nb = 0;
		if (i < _vectJacobsthall.size()){
			
			int index = _vectJacobsthall[i] - 1;
			nb = *(std::next(_lstAux.begin(), index));
			//std::cout << "nb " << nb << std::endl;

		}
		else
			nb = *(std::next(_lstAux.begin(), i));
		
		binaryInsertionList(nb);
	}
	//printList(_lstFinal);
}

void	PmergeMe::sortList(){

	addPairNumbersSortedList();
	//printList(_lstInitial);
	splitNumbersIntoLists();

	insertSmallNumbersList();

	listIsSorted(_lstFinal);
	printList(_lstFinal);
}