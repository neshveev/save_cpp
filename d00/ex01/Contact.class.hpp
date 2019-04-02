/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejommy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:50:25 by ejommy            #+#    #+#             */
/*   Updated: 2019/04/02 19:18:21 by ejommy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postalAdress;
	std::string	_emailAdress;
	std::string	_phoneNumber;
	std::string	_birthdayDate;
	std::string	_favoriteMeal;
	std::string	_underwearColor;
	std::string	_darkestSecret;
public:
	void	inputContact( void );
	void	printContact( void );
	void	printShortContact( size_t );
};

#endif
