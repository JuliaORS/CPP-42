/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:17:30 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/28 11:17:30 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP 
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <climits>

class ScalarConverter{
	
	public:
		static void convert(const std::string & input);
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter & src);
		~ScalarConverter();

		ScalarConverter & operator=(const ScalarConverter & src);
};

#endif
