/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:02:43 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/02 19:48:34 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include <iomanip>

void	Contact::inputContact( void )
{
	std::cout << "First Name: ";
	std::cin >> this->_firstName;
	std::cout << "Last Name: ";
	std::cin >> this->_lastName;
	std::cout << "Nickname: ";
	std::cin >> this->_nickname;
	std::cout << "Login: ";
	std::cin >> this->_login;
	std::cout << "Postal Adress: ";
	std::cin >> this->_postalAdress;
	std::cout << "Email Adress: ";
	std::cin >> this->_emailAdress;
	std::cout << "Phone Number: ";
	std::cin >> this->_phoneNumber;
	std::cout << "Birthday Date: ";
	std::cin >> this->_birthdayDate;
	std::cout << "Favorite Meal: ";
	std::cin >> this->_favoriteMeal;
	std::cout << "Underwear Color: ";
	std::cin >> this->_underwearColor;
	std::cout << "Darkest Secret: ";
	std::cin >> this->_darkestSecret;
}

void	Contact::printContact( void )
{
	std::cout << "First Name: ";
	std::cout << this->_firstName << std::endl;
	std::cout << "Last Name: ";
	std::cout << this->_lastName << std::endl;
	std::cout << "Nickname: ";
	std::cout << this->_nickname << std::endl;
	std::cout << "Login: ";
	std::cout << this->_login << std::endl;
	std::cout << "Postal Adress: ";
	std::cout << this->_postalAdress << std::endl;
	std::cout << "Email Adress: ";
	std::cout << this->_emailAdress << std::endl;
	std::cout << "Phone Number: ";
	std::cout << this->_phoneNumber << std::endl;
	std::cout << "Birthday Date: ";
	std::cout << this->_birthdayDate << std::endl;
	std::cout << "Favorite Meal: ";
	std::cout << this->_favoriteMeal << std::endl;
	std::cout << "Underwear Color: ";
	std::cout << this->_underwearColor << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << this->_darkestSecret << std::endl;
}

void	printStr( std::string s)
{
	if (s.length() > 10)
	{
		s.resize(9);
		s.append(".");
	}
	std::cout << std::setw(10) << s;
}

void	Contact::printShortContact( size_t i )
{
	std::cout << std::setw(11) << "Index|";
	std::cout << std::setw(11) << "First Name|";
	std::cout << std::setw(11) << "Last Name";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	std::cout << std::setw(10) << i;
	std::cout << "|";
	printStr(this->_firstName);
	std::cout << "|";
	printStr(this->_lastName);
	std::cout << "|";
	printStr(this->_nickname);
	std::cout << std::endl;
}
