#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
#include "ClapTrap.hpp"

class ScavTrap {
private:

public:
	ScavTrap();
	ScavTrap(std::string str);
	ScavTrap(const ScavTrap &other);
	~ScavTrap();

	ScavTrap & operator=(const ScavTrap & rhs);
	
    ClapTrap    claptrap;

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};



#endif