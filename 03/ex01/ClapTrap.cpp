#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default Clap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str){
	std::cout << "Default Clap constructor (str) called" << std::endl;
	_name = str;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << "Copy Clap constructor called" << std::endl;
	*this = other;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs){
	std::cout << "Clap: Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "Clap: Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target){
	if (_energy_points > 0 && _hit_points > 0){
		_energy_points--;
		std::cout << "ClapTrap " << _name << " attacks " << target << 
		", cousing " << _attack_damage << " points of damage!" << std::endl;
	}
}
	
void	ClapTrap::takeDamage(unsigned int amount){
	if (_hit_points > 0){
		_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " was attcked " <<
		amount << " damage points" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (_energy_points > 0 && _hit_points > 0){
		_energy_points--;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " repaired " <<
		amount << " hit points" << std::endl;
	}
}

void	ClapTrap::set_hit_points(int amount){
    this->_hit_points = amount;
}

void	ClapTrap::set_energy_points(int amount){
    this->_energy_points = amount;
}

void	ClapTrap::set_attack_damage(int amount){
    this->_energy_points = amount;
}

int		ClapTrap::get_hit_points( void ){
	return (_hit_points);
}

int		ClapTrap::get_energy_points( void ){
	return (_energy_points);
}

int		ClapTrap::get_attack_damage( void ){
	return (_attack_damage);
}
