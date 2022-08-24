#include "Bureaucrat.hpp"

int main(){
    Bureaucrat  borat;
    Bureaucrat  a("a", 1);
    Bureaucrat  capitan("capitan", 30);

    std::cout << borat << std::endl;
    borat.decreaseGrade();
    a.increaseGrade();
    a.increaseGrade();
    std::cout << a << std::endl;
    a.increaseGrade();
    a.increaseGrade();
    a.increaseGrade();
    std:: cout << capitan << std::endl;


    


    return 0;
}
