#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : m_type( "AAnimaaal" ) {
    std::cout << this->m_type << " constructor called" << std::endl;
}

AAnimal::AAnimal( std::string type ) : m_type( type )
{
    std::cout << "AAnimal " << this->m_type << " constructor called" << std::endl;
}

AAnimal::~AAnimal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& src )
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal& AAnimal::operator=( const AAnimal& rhs )
{
    std::cout << "AAnimal assignment operator called" << std::endl;
    if ( this != &rhs ) {
        this->m_type = rhs.m_type;
    }
    return *this;
}

// void AAnimal::makeSound( void ) const
// {
//     std::cout << "AAnimal makeSound called" << std::endl;
// }

std::string    AAnimal::getType( void ) const
{
    return this->m_type;
}