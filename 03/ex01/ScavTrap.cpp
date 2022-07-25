#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string str){
	std::cout << "Default constructor (str) called" << std::endl;
	claptrap._name = str;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ScavTrap::ScavTrap(const ScavTrap &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target){
	if (_energy_points > 0 && _hit_points > 0){
		_energy_points--;
		std::cout << "ScavTrap " << _name << " attacks " << target << 
		", cousing " << _attack_damage << " points of damage!" << std::endl;
	}
}
	
void	ScavTrap::takeDamage(unsigned int amount){
	if (_hit_points > 0){
		_hit_points -= amount;
		std::cout << "ScavTrap " << _name << " was attcked " <<
		amount << " damage points" << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount){
	if (_energy_points > 0 && _hit_points > 0){
		_energy_points--;
		_hit_points += amount;
		std::cout << "ScavTrap " << _name << " repaired " <<
		amount << " hit points" << std::endl;
	}
}
