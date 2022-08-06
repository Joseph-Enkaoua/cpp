#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Default Cat constructor called" << std::endl;
    this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cpoy Cat constructor called" << std::endl;
	*this = other;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat & Cat::operator=(const Cat &rhs){
    if (this == &rhs)
        return (*this);
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meowww" << std::endl;
}

void	Cat::setIdea(std::string idea, int idea_num) {
	if (idea_num < 0 || idea_num >= 100){
		std::cout << "Invalid idea number" << std::endl;
		return ;
	}
	_brain->_ideas[idea_num] = idea;
}

std::string	Cat::getIdea(int idea_num) {
	if (idea_num < 0 || idea_num >= 100){
		std::cout << "Invalid idea number" << std::endl;
		return NULL;
	}
	return _brain->_ideas[idea_num];
}

void	Cat::deleteIdea(int idea_num){
	if (idea_num < 0 || idea_num >= 100){
		std::cout << "Invalid idea number" << std::endl;
		return ;
	}
	_brain->_ideas[idea_num] = "";
}
