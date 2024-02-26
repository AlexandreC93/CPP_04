#include "Animal.hpp"

Animal::Animal( void ) : m_type( "Default" ) {
    std::cout << this->m_type << " Animal constructor called" << std::endl;
}

Animal::Animal( std::string type ) : m_type( type )
{
    std::cout << this->m_type << " constructor called" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal& og )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = og;
}

Animal& Animal::operator=( const Animal& copy )
{
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &copy ) {
        this->m_type = copy.m_type;
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