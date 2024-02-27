#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
    std::cout << this->m_type << " constructor called" << std::endl;
    try {
        this->m_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
}

Dog::~Dog( void )
{
    delete  this->m_brain;
    std::cout << this->m_type << " destructor called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src), m_brain(new Brain(*src.m_brain)) {
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << " Dog copy called." << std::endl;
    if (this != &src)
    {
        this->m_type = src.m_type;
        delete this->m_brain;
        this->m_brain = new Brain( *src.m_brain );
    }
    return *this;
}

void Dog::put_idea(std::string idea) {
	for (int i = 0; i < 100; i++) {
		if (this->m_brain->get_idea(i) == "") {
			this->m_brain->set_idea(i, idea);
			return;
		}
	}
	std::cout << "Brain full" << std::endl;
}

void Dog::print_ideas() const {
	std::string str;
	std::cout << "Dog ideas:" << std::endl;
	for (int i = 0; i < 100; i++) {
		str = this->m_brain->get_idea(i);
		if (str.empty())
			return;
		std::cout << str << std::endl;
	}
}