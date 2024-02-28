/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:15:08 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 12:15:08 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp" 
#include "Array.tpp" 

template <class T>
void	printArray(Array<T> arr){
	try{
		for(unsigned int i=0; i < arr.size(); i++){
			std::cout << arr[i] << std:: endl;
		}
	} catch(std::exception e){
		std::cout << "Index is out of range" << std:: endl;
	}
}

void	fillArrayInt(){

	unsigned int	ARRAY_SIZE = 6;
	Array<int> arr(ARRAY_SIZE);

	std::cout << std::endl << "----- Fill the array with ints ----- " << std::endl;
	try{
		for(unsigned int i=0; i < arr.size(); i++){
			arr[i] = i;
		}
		std::cout << "Array is filled successfully!" << std:: endl;
	} catch(std::exception e){
		std::cout << "Index is out of range" << std:: endl;
	}

	std::cout << std::endl << "----- Try to fill array out of range ----- " << std::endl;
	try{
		arr[ARRAY_SIZE] = 42;
	} catch(std::exception e){
		std::cout << "Index is out of range" << std:: endl;
	}
	std::cout << std::endl << "----- Print array ----- " << std::endl;
	printArray(arr);
}

void	fillArrayString(){

	unsigned int	ARRAY_SIZE = 6;
	Array<std::string> arr(ARRAY_SIZE);

	std::cout << std::endl << "----- Fill the array with strings ----- " << std::endl;
	try{
		for(unsigned int i=0; i < arr.size(); i++){
			arr[i] = "hello" + std::to_string(i);
		}
		std::cout << "Array is filled successfully!" << std:: endl;
	} catch(std::exception e){
		std::cout << "Index is out of range" << std:: endl;
	}

	std::cout << std::endl << "----- Try to fill array out of range ----- " << std::endl;
	try{
		arr[ARRAY_SIZE] = "byebye";
	} catch(std::exception e){
		std::cout << "Index is out of range" << std:: endl;
	}

	std::cout << std::endl << "----- Print array ----- " << std::endl;
	printArray(arr);
}

void	checkDeepCopyArray(){
	
	int	ARRAY_SIZE = 4;
	Array<int> arr(ARRAY_SIZE);

	std::cout << std::endl << "----- Fill the array ----- " << std::endl;
	
	try{
		for(int i=0; i < ARRAY_SIZE; i++){
			arr[i] = i;
		}
		std::cout << "Array is filled successfully!" << std:: endl;
	} catch(std::exception e){
		std::cout << "Index is out of range" << std:: endl;
	}

	std::cout << std::endl << "----- Test copy constructor ----- " << std::endl;
	Array<int> arrCopy = arr;

	std::cout << std::endl << "----- Print copied array ----- " << std::endl;
	printArray(arrCopy);

	std::cout << std::endl << "----- Modify first element ----- " << std::endl;
	try{
		arrCopy[0] = 42;
	} catch(std::exception e){
		std::cout << "Index is out of range" << std:: endl;
	}

	std::cout << std::endl << "----- Print original array ----- " << std::endl;
	printArray(arr);

	std::cout << std::endl << "----- Print copied array ----- " << std::endl;
	printArray(arrCopy);	

	arrCopy = arr;
	std::cout << std::endl << "----- Print copied array ----- " << std::endl;
	printArray(arrCopy);

}


int main() {

	fillArrayInt();
	fillArrayString();

	checkDeepCopyArray();

	return (0);
}
