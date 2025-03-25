/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:46:33 by seuan             #+#    #+#             */
/*   Updated: 2022/02/08 12:46:33 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void)
{
    this->setRawBits(0);
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int i )
{
    this->_fixed_val = i << 8;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float f )
{
    this->_fixed_val = roundf(f * (1 << 8));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& fix )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& fix)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this == &fix)
	    return (*this);
    this->_fixed_val = fix.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    return (this->_fixed_val);
}

void Fixed::setRawBits( int const raw )
{
    this->_fixed_val = raw;
}

float Fixed::toFloat( void ) const
{
    return(float(this->getRawBits()) / (1 << 8));
}

int Fixed::toInt( void ) const
{
    return(this->getRawBits() >> 8);
}

std::ostream& operator << ( std::ostream &out, const Fixed &Fixed )
{
    out << Fixed.toFloat();
	return out;
}
