
#include "Character.hpp"

materiaCollector*	floor;

Character::Character() : _name("undifined")
{
    for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(std::string name): _name(name)
{
    for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(const Character& copy)
{
    this->_name = copy.getName();
    for (int i = 0; i < 4; i++)
    {
        if (copy._materias[i])
			this->_materias[i] = copy._materias[i]->clone();
		else
			this->_materias[i] = NULL;
    }   
}

Character&	Character::operator=(const Character& copy)
{
	if (this != &copy)
	{
        this->_name = copy.getName();
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

Character::~Character()
{
    for (int i = 0; i < SLOTS; i++)
    {
        if (this->_materias[i] != NULL)
        {
            delete this->_materias[i];
        }
    }
}

std::string const&	Character::getName() const
{
    return (this->_name);
}


void    Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < SLOTS; i++)
    {
        if (this->_materias[i] == NULL)
        {
            this->_materias[i] = m;
            return;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < SLOTS && this->_materias[idx])
    {
        materiaCollector*   tmp = new  materiaCollector;
        tmp->value = this->_materias[idx];
        tmp->next = floor;
        floor = tmp;
        this->_materias[idx] = NULL;
        return ;
    }
}

void    Character::use(int idx, ICharacter& target)
{

    if (idx >= 0 && idx < SLOTS && this->_materias[idx])
        this->_materias[idx]->use(target);
}

void delete_floor()
{
    while (floor)
    {
        materiaCollector* tmp = floor;
        floor = floor->next;
        delete tmp->value;
        delete tmp;
    }
}
