
#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
private:
    Brain   *m_brain;

public:
    Dog( void );
    ~Dog( void );

    Dog( const Dog& src );
    Dog& operator=( const Dog& src );

    void   makeSound( void ) const;
    void put_idea(std::string idea);
	void print_ideas() const;
};

#endif