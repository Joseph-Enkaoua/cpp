#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAAnimal.hpp"

class WrongDog : public WrongAAnimal {
public:
	WrongDog();
	WrongDog(const WrongDog &other);
	~WrongDog();
	WrongDog & operator=(const WrongDog &rhs);
	virtual void	makeSound() const;
};

#endif