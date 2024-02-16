/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:35:21 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/07 13:43:30 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(const MateriaSource & src);
		~MateriaSource();
		
		MateriaSource& operator=(const MateriaSource & src);

		AMateria* const & getInventory() const;
		
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		
	private:
		AMateria* 	_inventory[4];
	
};

#endif
