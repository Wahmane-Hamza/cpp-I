#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

// int	main()
// {
// 	Cure*	m = new Cure();
// 	AMateria* m1 = m->clone();

// 	std::cout << m->getType() << std::endl;
// 	std::cout << m1->getType() << std::endl;
// }

// int	main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter* me = new Character("me");

// 	AMateria *m1 = src->createMateria("ice");
// 	me->equip(m1);
// 	AMateria *m2 = src->createMateria("cure");
// 	me->equip(m2);
// 	AMateria *m3 = src->createMateria("ice");
// 	me->equip(m3);
// 	AMateria *m4 = src->createMateria("cure");
// 	me->equip(m4);
// 	AMateria *m5 = src->createMateria("cure");
// 	me->equip(m5);

// 	ICharacter* bob = new Character("bob");

// 	me->use(0, *bob);
// 	me->unequip(0);
// 	me->use(1, *bob);
// 	me->unequip(1);
// 	me->use(2, *bob);
// 	me->unequip(2);
// 	me->use(3, *bob);
// 	me->unequip(3);

// 	AMateria *m6 = src->createMateria("cure");
// 	me->equip(m6);
// 	AMateria *m7 = src->createMateria("cure");
// 	me->equip(m7);
	
// 	delete bob;
// 	delete me;
// 	delete src;

// 	delete_floor();
// 	return 0;
// }

int main()
{
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;

	delete_floor();

    return 0;
}