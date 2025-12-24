#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		
	public:
		Ice();
		Ice(const Ice& copy);
		~Ice();
		Ice&		operator=(const Ice& copy);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};