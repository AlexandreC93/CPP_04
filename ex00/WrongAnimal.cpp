#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : m_type( "WrongDefault" ) {
    std::cout << this->m_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : m_type( type )
{
    std::cout << "WrongAnimal " << this->m_type << " constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& og )
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = og;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->m_type = rhs.m_type;
    }
    return *this;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string    WrongAnimal::getType( void ) const
{
    return this->m_type;
}