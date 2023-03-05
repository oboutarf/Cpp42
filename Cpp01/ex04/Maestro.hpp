/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Maestro.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 00:19:56 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/05 17:07:22 by oboutarf         ###   ########.fr       */
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
# define INVALID_REPLACER "prog: extract: Please enter valid replacer "
# define INVALID_FILE "prog: extract: Invalid file descriptor"
# define EXIT_SUCCESS 0
# define EXIT_FAILURE 1

class Maestro	{

public:
	Maestro( char *FileArg, std::string toReplace, std::string toInsert );
	~Maestro();
	void	openFile( char *fName );
	void	fileSwap( std::string toReplace, std::string toInsert );
private:
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		swapStr;
	std::string		fSwapName;
	std::string		toReplace;
	std::string		toInsert;

};

#endif