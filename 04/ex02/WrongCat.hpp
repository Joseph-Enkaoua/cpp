#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAAnimal.hpp"

class WrongCat : public WrongAAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &other);
	~WrongCat();
	WrongCat & operator=(const WrongCat &rhs);
	virtual void	makeSound() const;
};

#endif