#include <iostream>
#include <string>
#include "Fixed.class.hpp"
#include "StackS.hpp"

std::string	rpn( std::string src )
{
	StackS		stack;
	std::sting	res;

	return(res);
}

int main(int c, char **v) {
	std::string	str;

	if (c == 1)
		return (1);
	str = v[1];
	str = rpn(str);
	return (0);
}
