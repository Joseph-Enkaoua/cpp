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
	if (str.length() == 1 && isprint(str[0]) && !(str[0] > 47 && str[0] < 58))
		this->charType(str[0]);
	else if (isInt(str))
		this->printValue();
	else if (isFloat(str))
		this->printValue();
	// else if (isDouble(str))
	// 	this->printValue();
	else
        this->lastOne(str);
}

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
		if (str[i] < 48 || str[i] > 57)
		return false;
		i++;
	}
	if (std::stoi(str) > INT_MAX || std::stoi(str) < INT_MIN)
		throw Converter::invalidValueException();
	_int = std::stoi(str);
    _char = static_cast<char>(_int);
	_float = static_cast<double>(_int);
	_double = static_cast<double>(_int);
	return true;
}

bool	Converter::isFloat(std::string str) {
	int	dot = 0;
	std::string	sub = str.substr(0, (str.length() - 1));
	if (str[str.length() - 1] != 'f')
		return false;
	for (int i = 0;i < (int)sub.length();i++) {
		if (sub[i] == '.')
			dot++;
		if ((!isnumber(sub[i]) && sub[i] != '.') || dot > 1)
		throw Converter::invalidValueException();
	}
	_double = std::stod(sub);
	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
	return true;
}

void	Converter::printValue() {
    if (isprint(_int))
	    std::cout << "char: '" << _char << "'" << std::endl;
    else
	    std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << std::setprecision(1) << std::fixed << _int << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << _float << "f" << std::endl;
	std::cout << "double: " << _double << std::endl;
}

void    Converter::lastOne(std::string str) {
    if (str[0] == '+')
        str = str.substr(1);
    if (!(str.compare("-inff")) || !(str.compare("inff")) || !(str.compare("nanf"))) {
        std::cout << "char: impossible\nint: impossible\nfloat: " << str << "\ndouble: "
        << str.substr(0, str.length() - 1) << std::endl;
    }
    else if (!(str.compare("-inf")) || !(str.compare("inf")) || !(str.compare("nan"))) {
        std::cout << "char: impossible\nint: impossible\nfloat: " << str << "f\ndouble: "
        << str << std::endl;
    }
    else
    	throw Converter::invalidValueException();
}
