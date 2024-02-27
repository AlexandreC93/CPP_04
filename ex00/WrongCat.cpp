#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
    std::cout << this->m_type << " constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->m_type << " destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src) {
}

WrongCat& WrongCat::operator=( const WrongCat& src )
{
    std::cout << " WrongCat copy called." << std::endl;
	this->m_type = src.m_type;
    return *this;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "WrongCatSong" << std::endl;
}