#include "Form.hpp"
<<<<<<< HEAD
#include "Bureaucrat.hpp"
=======
>>>>>>> 1ccbeca1fd56a748961481406b6aab0a00b52b8a

int main(){
	//exception test
	try {
<<<<<<< HEAD
		Bureaucrat  moses("moses", 2);
		Form		travelForm("travelForm", 90, 30);
		Form		justAForm("just a form", 60, 2);
=======
		Bureaucrat  moses("moses", 1);
		Form		travelForm("travelForm", 90, 30);
>>>>>>> 1ccbeca1fd56a748961481406b6aab0a00b52b8a
		std::cout << moses.getGrade() << std::endl;
		moses.decreaseGrade();
		std::cout << moses << std::endl;
		moses.increaseGrade();
		std::cout << moses << std::endl;
		moses.increaseGrade();
<<<<<<< HEAD
		travelForm.beSigned(&moses);
		moses.signForm(justAForm);
=======
		travelForm.beSigned(moses);
>>>>>>> 1ccbeca1fd56a748961481406b6aab0a00b52b8a
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 0;
	}
	return 0;
}
