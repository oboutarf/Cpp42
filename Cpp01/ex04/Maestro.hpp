/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Maestro.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:19:56 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 01:28:20 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAESTRO_HPP
# define MAESTRO_HPP

# include <string>
# include <cstdlib>
# include <fstream>
# include <string.h>
# include <iostream>

# define INVALID_ARG "prog: extract: Invalid number of arguments"
# define INVALID_FILE "prog: extract: Invalid file descriptor"
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

class Maestro	{

public:
	Maestro();
	~Maestro();
	void	openFile( char *fName );
private:
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		fSwapName;
	std::string		OrigfContent;

};

#endif