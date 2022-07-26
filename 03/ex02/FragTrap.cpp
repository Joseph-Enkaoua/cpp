#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string str){
    _name = str;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "Default FragTrap constructor (name) called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other){
    *this = other;
    std::cout << "Copy FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs){
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    std::cout << "FragTrap: Copy assignment operator called" << std::endl;
    return (*this);
}

void	FragTrap::attack(const std::string &target){
    if (_energy_points > 0 && _hit_points > 0){
		_energy_points--;
		std::cout << "FragTrap " << _name << " attacks " << target << 
		", cousing " << _attack_damage << " points of damage!" << std::endl;
	}
}

void	FragTrap::highFivesGuys( void ){
    std::cout << "High five? ✋" << std::endl;
}