#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberryCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void	test_case1()
{
	Bureaucrat	b1("Vanya", 20);
	Bureaucrat	b2("Ilya", 100);
	Bureaucrat	b3("Kolya", 5);
	ShrubberryCreationForm		a1("A1");
	RobotomyRequestForm		a2("A2");
	PresidentialPardonForm		a3("A3");
	

	a1.beSigned(b3);
	a2.beSigned(b3);
	a3.beSigned(b3);
	try
	{
		a1.execute(b3);
	}
	catch (std::exception & e)
	{
		std::cout << "Error execute: " << e.what() << std::endl;
	}
	try
	{
		a2.execute(b3);
	}
	catch (std::exception & e)
	{
		std::cout << "Error execute: " << e.what() << std::endl;
	}
	try
	{
		a3.execute(b3);
	}
	catch (std::exception & e)
	{
		std::cout << "Error execute: " << e.what() << std::endl;
	}
	
}

int	main()
{
	test_case1();
	return 0;
}
