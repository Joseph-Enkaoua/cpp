#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str){
	std::cout << "Default constructor (str) called" << std::endl;
	_name = str;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target){
	if (this->_energy_points > 0 && this->_hit_points > 0){
		this->_energy_points--;
		
	}
}
	
void	ClapTrap::takeDamage(unsigned int amount){

}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->_energy_points < 0){
		this->_energy_points--;
		this->_hit_points += amount;
	}
}
