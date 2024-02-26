#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain   *m_brain;

public:
    Cat( void );
    ~Cat( void );

    Cat( const Cat& src );
    Cat& operator=( const Cat& src );

    void   makeSound( void ) const;
    void put_idea(std::string idea);
	void print_ideas() const;
};

#endif // CAT_HPP