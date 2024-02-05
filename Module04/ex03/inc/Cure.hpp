/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:32:54 by julolle-          #+#    #+#             */
/*   Updated: 2024/02/05 14:47:18 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria{

	public:
		Cure();
		Cure(const Cure & src);
		~Cure();
		
		Cure& operator=(const Cure & src);

		AMateria* clone() const;
		void use(ICharacter& target);
		
};

#endif