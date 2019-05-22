#include "FragTrap.hpp"
#include "ScavTrap.hpp"


int main(){
    FragTrap firstFrag("firstFrag");
    ScavTrap firstScav("firstScav");

    firstFrag.rangedAttack("Fragkeks");
    firstFrag.meleeAttack("Frageks");

    firstFrag.takeDamage(5);
    firstFrag.takeDamage(10);
    firstFrag.beRepaired(25);
    firstFrag.takeDamage(15);
    firstFrag.beRepaired(5);
    firstFrag.vaulthunter_dot_exe("Fragkeks");

    firstScav.rangedAttack("Scavnya");
    firstScav.meleeAttack("Scavnya");

    firstScav.takeDamage(5);
    firstScav.takeDamage(10);
    firstScav.beRepaired(25);
    firstScav.takeDamage(15);
    firstScav.beRepaired(5);
    firstScav.challengeNewcomer("Scavnya");


    return 0;
}
