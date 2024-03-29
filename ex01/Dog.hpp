#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain   *m_brain;

public:
    Dog( void );
    virtual ~Dog( void );

    Dog( const Dog& src );
    Dog& operator=( const Dog& src );

    void   makeSound( void ) const;
    void put_idea(std::string idea);
	void print_ideas() const;
};

#endif