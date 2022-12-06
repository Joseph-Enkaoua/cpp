#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal("WrongDog") {
	std::cout << "Default WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &other) : WrongAnimal(other.getType()) {
	std::cout << "Cpoy WrongDog constructor called" << std::endl;
}

WrongDog::~WrongDog(){
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog & WrongDog::operator=(const WrongDog &rhs){
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

void	WrongDog::makeSound() const {
	std::cout << "Uoaff" << std::endl;
}
