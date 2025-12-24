#pragma once

#include "AMateria.hpp"

typedef struct materiaCollector
{
	AMateria* 			value;
	materiaCollector*	next;
} materiaCollector;

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_materias[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character &copy);
		~Character();
		Character&			operator=(const Character& copy);

		std::string const	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
	};

void 				delete_floor();