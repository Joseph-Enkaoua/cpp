#ifndef WRONGAAnimal_HPP
# define WRONGAAnimal_HPP

# include <string.h>
# include <iostream>

class WrongAAnimal {
protected:
    std::string	_type;
public:
	virtual ~WrongAAnimal() = 0;
		
	virtual void	makeSound() const = 0;
};

#endif