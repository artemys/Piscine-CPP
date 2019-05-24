#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"
class SuperMutant : public Enemy{
public:
    SuperMutant(void);
    SuperMutant(SuperMutant const & src);
    virtual ~SuperMutant(void);

    SuperMutant &operator=(SuperMutant const & rhs);

};


#endif
