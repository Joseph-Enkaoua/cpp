#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
	Brain	*_brain;
public:
	Cat();
	Cat(const Cat &other);
	~Cat();

	Cat & operator=(const Cat &rhs);
	
	virtual void	makeSound() const ;
	void			setIdea(std::string idea, int idea_num);
	std::string		getIdea(int idea_num);
	void			deleteIdea(int idea_num);
};

#endif