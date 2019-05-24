#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
    RadScorpion();
    RadScorpion(RadScorpion const & src);
    virtual ~RadScorpion(void);
    RadScorpion &operator=(RadScorpion const & rhs);

    void takeDamage(int);
private:
};


#endif
