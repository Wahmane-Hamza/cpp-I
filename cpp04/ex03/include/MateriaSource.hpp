#pragma once

#include "string"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materias[SLOTS];

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource&	operator=(const MateriaSource& copy);
		void			learnMateria(AMateria* m);
		AMateria*		createMateria(std::string const& type);
};