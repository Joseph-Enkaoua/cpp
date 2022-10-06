#include "Bureaucrat.hpp"

int main(){
	//exception test
	try {
		Bureaucrat  moses("moses", 1);
		std::cout << moses.getGrade() << std::endl;
		moses.decreaseGrade();
		std::cout << moses << std::endl;
		moses.increaseGrade();
		moses.increaseGrade();
		moses.increaseGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 0;
	}
	return 0;
}
