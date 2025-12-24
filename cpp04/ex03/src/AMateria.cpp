#include "AMateria.hpp"

AMateria::AMateria() : type("undefined") {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(const AMateria& copy) : type(copy.type) {} 

AMateria::~AMateria() {}

AMateria&	AMateria::operator=(const AMateria& copy)
{
	(void)copy;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* uses some materia on " << target.getName() << " *" << std::endl;
}
