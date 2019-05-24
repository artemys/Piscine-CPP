#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
public:
    PlasmaRifle(PlasmaRifle const & src);
    virtual ~PlasmaRifle();
    PlasmaRifle &operator=(PlasmaRifle const & rhs);
    void attack() const;
    PlasmaRifle();

private:

};


#endif