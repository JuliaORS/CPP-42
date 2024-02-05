/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:35:21 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 12:12:22 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(const std::string & name);
		MateriaSource(const MateriaSource & src);
		~MateriaSource();
		
		MateriaSource& operator=(const MateriaSource & src);
	
};

#endif
