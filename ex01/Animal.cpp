#include "Animal.hpp"

Animal::Animal( void ) : m_type( "Animaal" ) {
    std::cout << this->m_type << " constructor called" << std::endl;
}

Animal::Animal( std::string type ) : m_type( type )
{
    std::cout << "Animal " << this->m_type << " constructor called" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal& src )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal& Animal::operator=( const Animal& rhs )
{
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->m_type = rhs.m_type;
    }
    return *this;
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string    Animal::getType( void ) const
{
    return this->m_type;
}