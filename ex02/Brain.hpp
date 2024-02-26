
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string m_ideas[100];

public:
    Brain( void );
    ~Brain( void );
    Brain( const Brain& src );
    Brain& operator=( const Brain& rhs );

    std::string get_idea(unsigned int index) const;
	void set_idea(unsigned int index, std::string idea);
};
 
#endif