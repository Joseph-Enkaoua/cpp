#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(){
	//exception test
	try {
		Bureaucrat  moses("moses", 2);
		Form		travelForm("travelForm", 90, 30);
		Form		justAForm("just a form", 60, 2);
		std::cout << moses.getGrade() << std::endl;
		moses.decreaseGrade();
		std::cout << moses << std::endl;
		moses.increaseGrade();
		std::cout << moses << std::endl;
		moses.increaseGrade();
		travelForm.beSigned(&moses);
		moses.signForm(justAForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 0;
	}
	return 0;
}
