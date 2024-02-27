
#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
private:
    Brain   *m_brain;

public:
    Cat( void );
    virtual ~Cat( void );

    Cat( const Cat& src );
    Cat& operator=( const Cat& src );

    void   makeSound( void ) const;
    void put_idea(std::string idea);
	void print_ideas() const;
};

#endif