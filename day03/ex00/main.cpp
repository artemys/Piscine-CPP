#include "FragTrap.hpp"

int main(){
    FragTrap firstFrag("nya");
    firstFrag.rangedAttack("keks");
    firstFrag.meleeAttack("keks");

    firstFrag.takeDamage(5);
    firstFrag.takeDamage(10);
    firstFrag.beRepaired(25);
    firstFrag.takeDamage(15);
    firstFrag.beRepaired(5);
    firstFrag.vaulthunter_dot_exe("keks");

    return 0;
}