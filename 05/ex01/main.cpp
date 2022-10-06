#include "Form.hpp"

int main(){
	//exception test
	try {
		Bureaucrat  moses("moses", 1);
		Form		travelForm("travelForm", 90, 30);
		std::cout << moses.getGrade() << std::endl;
		moses.decreaseGrade();
		std::cout << moses << std::endl;
		moses.increaseGrade();
		std::cout << moses << std::endl;
		moses.increaseGrade();
		travelForm.beSigned(moses);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 0;
	}
	return 0;
}
