#include "Converter.hpp"
//check convert print!
Converter::Converter() {
	throw Converter::invalidValueException();
}

Converter::Converter(std::string str) : _input(str) {
	findType(_input);
}

Converter::~Converter() {}

Converter::Converter(const Converter &other) {
	*this = other;
}

Converter & Converter::operator=(const Converter & rhs){
	if (this != &rhs) {
		this->_input = rhs._input;
		this->findType(this->_input);
	}
	return *this;
}

void	Converter::findType(std::string str) {
	if (str.length() == 1 && isprint(str[0]))
		this->charType(str[0]);
	else if (isInt(str))
		this->printValue();
	// else if (isFloat(str))
	// 	this->printValue();
	// else if (isDouble(str))
	// 	this->printValue();
	else
		throw Converter::invalidValueException();
}
//to check:: how to convert char to int float double 
void	Converter::charType(char c) {
	_char = c;
	_int = static_cast<int>(c);
	_float = static_cast<double>(c);
	_double = static_cast<double>(c);
	std::cout << "char: '" << _char << "'" << std::endl;
	std::cout << "int: " << std::setprecision(1) << std::fixed << _int << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << _float << "f" << std::endl;
	std::cout << "double: " << _double << std::endl;
}

bool	Converter::isInt(std::string str) {
	int	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i]) {
		if (str[i] < '0' || str[i] > '9')
		return false;
		i++;
	}
	if (std::stoi(str) > INT_MAX || std::stoi(str) < INT_MIN)
		throw Converter::invalidValueException();
	_int = std::stoi(str);
	return true;
}

void	Converter::printValue() {
	std::cout << "char: " << _char << std::endl;
	std::cout << "int: " << std::setprecision(1) << std::fixed << _int << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << _float << "f" << std::endl;
	std::cout << "double: " << _double << std::endl;
}
