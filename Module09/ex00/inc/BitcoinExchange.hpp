/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:14:40 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 12:14:40 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP 
# define BITCOINEXCHANGE_HPP

# include <iostream>
#include <string>
# include <map>
#include <fstream>
#include <stdexcept>


class BitcoinExchange {
	
	public:
		BitcoinExchange(std::string input);
		BitcoinExchange(const BitcoinExchange & src);
		~BitcoinExchange();

		BitcoinExchange & operator=(const BitcoinExchange & src);

		std::string					getInput() const;
		std::map<std::string, int>	getInputMap() const;

		void	createInputMap();


	private:
		//std::map<std::string, int> 	_database;
		std::string					_input;
		std::map<std::string, int>	_inputMap;

};

#endif