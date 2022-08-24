#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	
	std::string	getName() const;
	int			getGrade() const;
	void		increaseGrade();
	void		decreaseGrade();
	int 		setGrade(int grade);

	class GradeTooHighException : public std::exception {
    public:
		const char * what() const noexcept override {
			return (" Error: grade too high");
		}
	};

	class GradeTooLowException : public std::exception {
    public:
		const char * what() const noexcept override {
			return (" Error: grade too low");
		}
	};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &tmp);

#endif
