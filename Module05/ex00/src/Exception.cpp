/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:55:04 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/08 15:55:59 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP 
# define EXCEPTION_HPP

# include <iostream>
# include <exception>


class MiExcepcion : public std::exception {
	public:
		// Constructor que acepta un mensaje de error
		MiExcepcion(const char* mensaje) : m_mensaje(mensaje) {}

		// Función miembro que devuelve el mensaje de error
		const char* what() const noexcept override {
			return m_mensaje.c_str();
		}

	private:
		std::string m_mensaje;
		
};
