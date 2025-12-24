#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < SLOTS; i++)
		this->_materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < SLOTS; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < SLOTS; i++)
	{
		if (copy._materias[i])
			this->_materias[i] = copy._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < SLOTS; i++)
		{
			if (this->_materias[i])
				delete this->_materias[i];
			if (copy._materias[i])
				this->_materias[i] = copy._materias[i]->clone();
			else
				this->_materias[i] = NULL;
		}
	}
	return (*this);
}


void			MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
    for(int i = 0 ; i < SLOTS ; i++)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m->clone();
            return ;
        }
    }
}
AMateria*		MateriaSource::createMateria(std::string const& type)
{
    for(int i = 0 ; i < SLOTS ; i++)
    {
        if (this->_materias[i] && this->_materias[i]->getType() == type)
        {
            return (this->_materias[i]->clone());
        }
    }
    return (0);
}
