#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template < typename T >
class Array {
private:
	T				*var;
	unsigned int	_n;
public:
	Array() : var(NULL), _n(0) {}
	Array(unsigned int n) : var(NULL), _n(n) {
		if (n > 0) {
			var = new T[n];
			if (var == NULL)
				
			bzero(var, n);
		} else {
			std::cerr << "Error: number must be bigger than 0" << std::endl;
		}
	}
	Array   & operator=(const Array &rhs) {
		this->var = rhs.var;
		this->_n = rhs._n;
		return *this;
	}
	Array(const Array &other) {
		*this = other;
	}
	Array	& operator[](unsigned int n) {
		return this->var[n];
	}
};

#endif