/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 00:49:40 by oboutarf          #+#    #+#             */
/*   Updated: 2023/03/19 17:09:16 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void )	{
	std::cout << "ShrubberyCreationForm: constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string & target ) : Form("ShrubberyCreationForm", target, 145, 137)	{
	std::cout << "ShrubberyCreationForm: constructor called with type: [" << this->getName() << "]" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )	{
	std::cout << "ShrubberyCreationForm: destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & ref )	{
	*this = ref;
	std::cout << "ShrubberyCreationForm: copy constructor called" << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )	{
	( void )rhs ;
	return *this ;
}

std::string const ShrubberyCreationForm::getTarget()	const	{
	return this->_target;
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor )	{
	if ( !this->checkStatus() && executor.getGrade() > this->getGradeToSign() )	{
		std::cout << "ShrubberyCreationForm: couldn't execute form because form isn't signed and " << executor.getName() << " grade is too low to sign it." << std::endl;
		throw Form::GradeTooLowException();
	}
	if ( !this->checkStatus() && executor.getGrade() <= this->getGradeToSign() )
		executor.signForm( *this );
	if ( executor.getGrade() <= this->getGradeToExecute() )	{
		std::ofstream	shrubberyFile( (executor.getName() + std::string( "_shrubbery" )).c_str() );
		shrubberyFile << "###########################'`################################\n \
###########################  V##'############################\n \
#########################V'  `V  ############################\n \
########################V'      ,############################\n \
#########`#############V      ,A###########################V \n\
########' `###########V      ,###########################V',#\n \
######V'   ###########l      ,####################V~~~~'',###\n \
#####V'    ###########l      ##P' ###########V~~'   ,A#######\n \
#####l      d#########l      V'  ,#######V~'       A#########\n \
#####l      ##########l         ,####V''         ,###########\n \
#####l        `V######l        ,###V'   .....;A##############\n \
#####A,         `######A,     ,##V' ,A#######################\n \
#######A,        `######A,    #V'  A########'''''##########''\n \
##########,,,       `####A,           `#''           '''  ,,,\n \
#############A,                               ,,,     ,######\n \
######################oooo,                 ;####, ,#########\n \
##################P'                   A,   ;#####V##########\n \
#####P'    ''''       ,###             `#,     `V############\n \
##P'                ,d###;              ##,       `V#########\n \
##########A,,   #########A              )##,    ##A,..,ooA###\n \
#############A, Y#########A,            )####, ,#############\n \
###############A ############A,        ,###### ##############\n \
###############################       ,#######V##############\n \
###############################      ,#######################\n \
##############################P    ,d########################\n \
##############################'    d#########################\n \
##############################     ##########################\n \
##############################     ##########################\n \
#############################P     ##########################\n \
#############################'     ##########################\n \
############################P      ##########################\n \
###########################P'     ;##########################\n \
###########################'     ,###########################\n \
##########################       ############################\n \
#########################       ,############################\n \
########################        d###########P'    `Y#########\n \
#######################        ,############        #########\n \
######################        ,#############        #########\n \
#####################        ,##############b.    ,d#########\n \
####################        ,################################\n \
###################         #################################\n \
##################          #######################P'  `V##P'\n \
#######P'     `V#           ###################P\n \
#####P'                    ,#################P' \n \
###P'                      d##############P'' \n \
##P'                       V##############' \n \
#P'                         `V###########'" << std::endl;
		shrubberyFile.close();
		return ;
	}
	else
		throw Form::GradeTooLowException();
}
