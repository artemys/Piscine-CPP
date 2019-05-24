#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon{
public:
    PowerFist(PowerFist const & src);
    virtual ~PowerFist(void);

    PowerFist &operator=(PowerFist const & rhs);
    void attack() const;
    PowerFist(void);

private:

};


#endif
