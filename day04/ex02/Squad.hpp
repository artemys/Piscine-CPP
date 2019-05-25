#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#define MAX_SIZE 10
class Squad : public ISquad {
public:
    Squad();
    Squad(Squad const & src);
    virtual ~Squad(void);
    Squad &operator=(Squad const & rhs);
    int getCount() const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);

private:
    int _count;
    ISpaceMarine *_spaceMarines[MAX_SIZE];

};
#endif
