#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->_type = "wrong animal";
	std::cout << "Defauld WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal *other) {
	*this = other;
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &rhs) {
	if (this == &rhs)
		return (*this);
    WrongAnimal	*p = new WrongAnimal();
	p->_type = rhs._type;
	return (*p);
}

std::string	WrongAnimal::getType() const {
	return this->_type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "Sap man" << std::endl;
}