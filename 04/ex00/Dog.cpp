#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog"; 
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	*this = other;
	std::cout << "Cpoy Dog constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog &rhs){
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Uoaff" << std::endl;
}
