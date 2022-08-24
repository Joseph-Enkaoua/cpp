#include "Bureaucrat.hpp"

int main(){
    Bureaucrat  borat;
    Bureaucrat  a("a", 1);
    Bureaucrat  capitan("capitan", 30);

    borat.decreaseGrade();
    a.decreaseGrade();
    a.increaseGrade();
    a.increaseGrade();
    a.increaseGrade();
    std:: cout << capitan << std::endl;


    


    return 0;
}
