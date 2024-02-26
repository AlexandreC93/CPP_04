#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain( const Brain& src )
{
    *this = src;
}

std::string Brain::get_idea(unsigned int index) const {
  if (index > 99) {
    std::cout << "idea " << index << "does'nt exist" << std::endl;
    return "";
  }
  return this->m_ideas[index];
}

void Brain::set_idea(unsigned int index, std::string idea) {
  if (index > 99) {
    std::cout << "idea " << index << "outrange"
              << std::endl;
    return;
  }
  this->m_ideas[index] = idea;
}

Brain& Brain::operator=( const Brain& src )
{
    std::cout << "<Brain.cpp:32> Brain copy called." << std::endl;
    if ( this != &src ) {
        for ( int i = 0; i < 100; i++ ) {
            this->m_ideas[i] = src.m_ideas[i];
        }
    }
    return *this;
}
