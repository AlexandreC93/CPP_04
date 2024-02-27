#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
    std::cout << this->m_type << " constructor called" << std::endl;
}

Dog::~Dog( void )
{
    std::cout << this->m_type << " destructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src) {
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << " Dog copy called." << std::endl;
    if (this != &src)
        this->m_type = src.m_type;
    return *this;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}