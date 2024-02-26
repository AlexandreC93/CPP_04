
#include "Cat.hpp"

Cat::Cat( void ) : AAnimal("Cat") {
    std::cout << this->m_type << " constructor called" << std::endl;
    try {
        this->m_brain = new Brain();
    }
    catch (const std::bad_alloc& e) {
        std::cout << "Memory Allocation is failed : " << e.what() << std::endl;
    }
}

Cat::~Cat( void )
{
    delete  this->m_brain;
    std::cout << this->m_type << " destructor called" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}

Cat::Cat( const Cat& src ) : AAnimal(this->m_type)
{
    *this = src;
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "Cat copy called." << std::endl;
    if (this != &src)
    {
        this->m_type = src.m_type;
        this->m_brain = new Brain( *src.m_brain );
        // this->m_brain = src.m_brain;
    }
    return *this;
}

void Cat::put_idea(std::string idea) {
	for (int i = 0; i < 100; i++) {
		if (this->m_brain->get_idea(i) == "") {
			this->m_brain->set_idea(i, idea);
			return;
		}
	}
	std::cout << "Brain full!" << std::endl;
}

void Cat::print_ideas() const {
	std::string str;
	std::cout << "Cat ideas:" << std::endl;
	for (int i = 0; i < 100; i++) {
		str = this->m_brain->get_idea(i);
		if (str.empty())
			return;
		std::cout << str << std::endl;
	}
}