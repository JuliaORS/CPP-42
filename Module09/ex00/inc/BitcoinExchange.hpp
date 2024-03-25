/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:19:58 by julolle-          #+#    #+#             */
/*   Updated: 2024/03/20 15:19:58 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP 
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <stdexcept>


class BitcoinExchange {
	
	public:
		BitcoinExchange(std::string input, std::map<std::string, double> databaseMap);
		BitcoinExchange(const BitcoinExchange & src);
		~BitcoinExchange();

		BitcoinExchange & operator=(const BitcoinExchange & src);

		std::string						getInput() const;	
		std::map<std::string, double>	getDatabaseMap() const;

		void	showBtcValue();
		void	searchInDatabaseMap(std::string date, double quantity);
		
	private:
		std::map<std::string, double> 	_database;
		std::string						_input;
};

#endif