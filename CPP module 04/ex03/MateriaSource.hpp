#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* equipedArray[4];
    public:
       MateriaSource();
       MateriaSource(const MateriaSource &ms);
       MateriaSource& operator=(const MateriaSource &ms);
       ~MateriaSource();
       void learnMateria(AMateria* copy);
       AMateria* createMateria(std::string const & type);
       
};

#endif