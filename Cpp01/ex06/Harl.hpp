/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:10:30 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 19:59:01 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

# define INVALID_ARG "prog: HarlFilter: Invalid number of argument"

# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1
# define SUCCESS 1
# define FAIL 0

# define BAD_INPUT "prog: harl: Bad input, please try again!"
# define INPUTS "The valid inputs are { WARNING; INFO; DEBUG; ERROR }"
# define DEBUG "[ DEBUG ]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
# define INFO "[ INFO ]: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
# define WARNING "[ WARNING ]: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
# define ERROR "[ ERROR ]: This is unacceptable ! I want to speak to the manager now."

class	Harl	{

public:
	Harl();
	~Harl();
	void		complain( std::string level );
private:
	typedef void	( Harl::* ptrFunc )();
	ptrFunc		harlComplainer[4];
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

};

#endif