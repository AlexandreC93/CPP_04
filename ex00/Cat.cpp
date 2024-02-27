#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << this->m_type << " constructor called" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << this->m_type << " destructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "Cat copy called." << std::endl;
    if (this != &src)
        this->m_type = src.m_type;
    return *this;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}