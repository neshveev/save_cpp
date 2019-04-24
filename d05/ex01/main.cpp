#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test_case(unsigned grade, int n)
{
	Bureaucrat	b("Vanya", 20);
	Form		*a;
	

	std::cout << "\nCase " << n << " : grade = " << grade << " - breaucrat grade is 20" << std::endl;
	try
	{
		a = new Form("Form", grade, 5);
	}
	catch (std::exception & e)
	{
		std::cout << "Error constructor: " << e.what() << std::endl;
		return ;
	}
	try
	{
		std::cout << *a;
		a->beSigned(b);
		std::cout << *a;
	}
	catch (std::exception & e)
	{
		std::cout << "Error sign: " << e.what() << std::endl;
		return ;
	}
	delete a;
	
}

int	main()
{
	test_case(0, 1);
	test_case(151, 2);
	test_case(1, 3);
	test_case(21, 4);
	return 0;
}
