#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"


int main(){
    FragTrap  firstFrag("firstFrag");
    ScavTrap  firstScav("firstScav");
    NinjaTrap firstNinja("firstNinja");
    std::cout << std::endl;




    firstFrag.rangedAttack("Fragkeks");
    firstFrag.meleeAttack("Frageks");

    firstFrag.takeDamage(5);
    firstFrag.takeDamage(10);
    firstFrag.beRepaired(25);
    firstFrag.takeDamage(15);
    firstFrag.beRepaired(5);
    firstFrag.vaulthunter_dot_exe("Fragkeks");
    std::cout << std::endl;

    firstScav.rangedAttack("Scavnya");
    firstScav.meleeAttack("Scavnya");

    firstScav.takeDamage(5);
    firstScav.takeDamage(10);
    firstScav.beRepaired(25);
    firstScav.takeDamage(15);
    firstScav.beRepaired(5);
    firstScav.challengeNewcomer("Scavnya");
    std::cout << std::endl;

    firstNinja.rangedAttack("Ninjablblbl");
    firstNinja.meleeAttack("Ninjablblbl");

    firstNinja.takeDamage(5);
    firstNinja.takeDamage(10);
    firstNinja.beRepaired(25);
    firstNinja.takeDamage(15);
    firstNinja.beRepaired(5);

    firstNinja.ninjaShoebox(firstFrag);
    firstNinja.ninjaShoebox(firstScav);
    firstNinja.ninjaShoebox(firstNinja);

    ClapTrap &firstClap = firstFrag;
    firstNinja.ninjaShoebox(firstClap);
    std::cout << std::endl;


    return 0;
}
