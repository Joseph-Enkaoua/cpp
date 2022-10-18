#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class AForm;

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
	void		signForm(AForm &AForm);
	void		executeForm(AForm const & form);

	class GradeTooHighException : public std::exception {
    public:
		virtual const char* what() const throw() {
			return (" Error: grade too high");
		}
	};

	class GradeTooLowException : public std::exception {
    public:
		virtual const char* what() const throw() {
			return (" Error: grade too low");
		}
	};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &tmp);

#endif
