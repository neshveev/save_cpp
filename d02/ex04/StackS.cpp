#include "StackS.hpp"
#include <string>

StackS::StackS( void )
{
	this->_stack = NULL;
	this->_size = 0;
	return ;
}
StackS::~StackS( void )
{
	delete this->_stack;
	return ;
}
void	StackS::push( std::string str)
{
	std::string	*res;

	this->_size += 1;
	res = new std::string[this->_size];
	res[0] = str;
	for (size_t i = 0; i < this->_size - 1; i++)
		res[i + 1] = this->_stack[i];
	delete this->_stack;
	this->_stack = res;	
}

std::string     StackS::pop( void )
{
	std::string	*tmp;
	std::string	res;

	this->_size -= 1;
	
	tmp = new std::string[this->_size];
	res = this->_stack[0];
	for (size_t i = 0; i < this->_size; i++)
		tmp[i] = this->_stack[i + 1];
	delete this->_stack;
	this->_stack = tmp;
	return (res);	
}

std::string	StackS::at( void )
{
	if (this->_size == 0)
		return ("");
	return (this->_stack[0]);
}
