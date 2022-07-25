#include "ClapTrap.hpp"

int main(){

    ClapTrap    vivi("Vivi");
    ClapTrap    roro("Roro");

    vivi.beRepaired(2);
    vivi.attack("Roro");
    roro.takeDamage(10);

    return 0;
}