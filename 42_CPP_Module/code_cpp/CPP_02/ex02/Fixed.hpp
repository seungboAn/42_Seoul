/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:46:52 by seuan             #+#    #+#             */
/*   Updated: 2022/02/08 12:46:52 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed( int i );
        Fixed( float f );
        Fixed( const Fixed& fix );
        Fixed& operator = (const Fixed& fix);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        const static Fixed& max(const Fixed &a, const Fixed &b);
        const static Fixed& min(const Fixed &a, const Fixed &b);
        Fixed& operator ++ (void);
        Fixed operator ++ (int);
        Fixed& operator -- (void);
        Fixed operator -- (int);
        Fixed operator + (const Fixed& fix);
        Fixed operator - (const Fixed& fix);
        Fixed operator * (const Fixed& fix);
        Fixed operator / (const Fixed& fix);
        bool operator > (const Fixed& fix);
        bool operator < (const Fixed& fix);
        bool operator >= (const Fixed& fix);
        bool operator <= (const Fixed& fix);
        bool operator == (const Fixed& fix);
        bool operator != (const Fixed& fix);

    private:
        static const int _bits;
        int _fixed_val;
};

std::ostream& operator << ( std::ostream &out, const Fixed &Fixed );

#endif