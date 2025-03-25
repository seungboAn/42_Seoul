/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:46:16 by seuan             #+#    #+#             */
/*   Updated: 2022/02/08 12:46:18 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed( const Fixed& fix );
        Fixed& operator = (const Fixed& fix);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        static const int _bits;
        int _fixed_val;
};

#endif