#include "easyfind.hpp"

int main()
{
	std::vector<int> vector;

	vector.push_back(1);
	vector.push_back(9);
	vector.push_back(13);

	try
	{
		std::cout << "##Searching Through a Vector##" << std::endl;
		std::cout << easyfind(vector, 1) << std::endl;
		std::cout << easyfind(vector, 9) << std::endl;
		std::cout << easyfind(vector, 15) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::list<char> my_list;

	my_list.push_back('A');
	my_list.push_back('L');
	my_list.push_back('I');

	try
	{
		std::cout << "##Searching Through a Doubly linked list##" << std::endl;
		std::cout << easyfind(my_list, 65) << std::endl;
		std::cout << easyfind(my_list, 76) << std::endl;
		std::cout << easyfind(my_list, 15) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::deque<int> DQueue ;

	DQueue.push_back(83);
	DQueue.push_back(854);
	DQueue.push_back(1047);

	try
	{
		std::cout << "##Searching Through a Double Ended Queue##" << std::endl;
		std::cout << easyfind(DQueue, (int)'S') << std::endl;
		std::cout << easyfind(DQueue, 854) << std::endl;
		std::cout << easyfind(DQueue, 10478) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return 0;
}
