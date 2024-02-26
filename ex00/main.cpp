#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

int main( void )
{

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* k(j);

    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    k->makeSound();

    i = j;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    k->makeSound();


    delete  meta;
    // delete  j;
    delete  i;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();
    const WrongAnimal *anotherCat(wrong);

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();
    anotherCat->makeSound();

    wrong = wrongCat;
    
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrong;
    // delete  wrongCat;

    return 0;
}