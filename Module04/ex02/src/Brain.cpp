/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:03:50 by julolle-          #+#    #+#             */
/*   Updated: 2024/01/31 18:52:33 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	this->_index = -1;
	std::cout << "Brain default construcor called." << std::endl;
}

//copy constructor
Brain::Brain(const Brain & src){
	*this = src;
	std::cout << "Brain copy construcor called." <<std::endl;
}

Brain::~Brain(){
	std::cout << "Brain Destructor called." << std::endl;
}

//operator "="
Brain & Brain::operator=(const Brain & src) {
	if (this != &src) {
		this->_index = src._index;
		for(int i=0; i <= this->_index; i++){
			this->_ideas[i] = src._ideas[i];
		}
	}
	std::cout << "Brain copy assignment operator called."  << std::endl;
	return (*this);
}

//GETTERS
std::string	Brain::getIdea() const {
	if (this->_index == -1){
		std::cout << "There are no ideas in brain"  << std::endl;
	}	
	return(this->_ideas[this->_index]);
}

//SETTERS
void	Brain::setIdea(const std::string & idea){
	if (this->_index == 99){
		std::cout << "You can not add more ideas"  << std::endl;
		return ;
	}
	this->_index += 1;
	this->_ideas[this->_index] = idea;
}

void	Brain::printIdeas(){
	if (this->_index < 0)
		std::cout << "There are no ideas in brain"  << std::endl;
	for(int i=0; i <= this->_index; i++)
		std::cout << "Idea " << i+1 << ": " << this->_ideas[i] << std::endl;

}

