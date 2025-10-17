/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwahmane <hwahmane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:04:05 by hwahmane          #+#    #+#             */
/*   Updated: 2025/10/17 08:53:45 by hwahmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class Contact 
{
    private:
        std::string first_name;
        std::string second_name;
        std::string nick_name;
        std::string phone;
        std::string darkest_secret;

    public:
        Contact ( void );
        Contact ( std::string firstName, std::string lastName, std::string nickName
                ,std::string phoneNumber, std::string darkestSecret );
        void		displayColumn( int id );
        void		displayField( std::string field );
        std::string	formatString( std::string str );
        void		displayContact( void );
}; 

class PhoneBook 
{
    private:
        Contact contacts[8];
        int index;
        int size;

    public:
        PhoneBook(void);
        std::string	input(std::string msg);
        bool		add();
        void		search();
        void		getContactById();
};

#endif
