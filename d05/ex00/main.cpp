#include <iostream>
#include "Bureaucrat.hpp"

void	test_case(unsigned grade, int n)
{
	Bureaucrat	*a;
	

	std::cout << "\nCase " << n << " : grade = " << grade << std::endl;
	try
	{
		a = new Bureaucrat("Bureaucrat", grade);
	}
	catch (std::exception & e)
	{
		std::cout << "Error constructor: " << e.what() << std::endl;
		return ;
	}
	try
	{
		std::cout << *a;
		a->increment();
		std::cout << *a;
	}
	catch (std::exception & e)
	{
		std::cout << "Error increment: " << e.what() << std::endl;
		return ;
	}
	try
	{
		a->decrement();
		std::cout << *a;
		a->decrement();
		std::cout << *a;
	}
	catch (std::exception & e)
	{
		std::cout << "Error decrement: " << e.what() << std::endl;
		return ;
	}
	
}

int	main()
{
	test_case(0, 1);
	test_case(151, 2);
	test_case(1, 3);
	test_case(150, 4);
	test_case(10, 5);
	return 0;
}
