#include "Animal.hpp"

Animal::Animal() {
	this->_type = "Random animal";
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal *other){
	*this = other;
	std::cout << "Cpoy Animal constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal &rhs){
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

std::string	Animal::getType() const {
	return this->_type;
}

void	Animal::makeSound() const {
	std::cout << "Hi" << std::endl;
}
