#include "Cat.hpp"

Cat::Cat() {
    this->_type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	*this = other;
	std::cout << "Cpoy Cat constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat &rhs){
    if (this == &rhs)
        return (*this);
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meowww" << std::endl;
}
