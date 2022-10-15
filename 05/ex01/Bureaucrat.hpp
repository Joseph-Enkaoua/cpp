#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

<<<<<<< HEAD
class Form;

=======
>>>>>>> 1ccbeca1fd56a748961481406b6aab0a00b52b8a
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
<<<<<<< HEAD
	void		signForm(Form form);
=======
>>>>>>> 1ccbeca1fd56a748961481406b6aab0a00b52b8a

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
