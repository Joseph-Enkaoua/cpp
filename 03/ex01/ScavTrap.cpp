#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Default Scav constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string str){
	*this->claptrap = ClapTrap(str);
	claptrap->set_hit_points(100);
	claptrap->set_energy_points(50);
	claptrap->set_attack_damage(20);
	std::cout << "Default Scav constructor (str) called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other){
	std::cout << "Copy Scav constructor called" << std::endl;
	*this = other;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs){
	std::cout << "Scav: Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "Scav: Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target){
	if (_energy_points > 0 && _hit_points > 0){
		_energy_points--;
		std::cout << "ScavTrap " << _name << " attacks " << target << 
		", cousing " << _attack_damage << " points of damage!" << std::endl;
	}
}

