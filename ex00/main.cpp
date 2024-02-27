#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

int main( void )
{

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    const Animal* k(j);

    std::cout << "j: " << j->getType() << " " << std::endl;
    std::cout << "i: " << i->getType() << " " << std::endl;
    std::cout << "meta: " << meta->getType() << " " << std::endl;
    std::cout << "k: " << k->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    k->makeSound();

    delete i;
    i = j;

    i->makeSound();
    j->makeSound();
    meta->makeSound();
    k->makeSound();


    delete  meta;
    delete k;
    // delete  j;
    delete  i;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();
    const WrongAnimal *anotherCat(wrong);

    std::cout << "Wrong: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat: " << wrongCat->getType() << " " << std::endl;
    wrong->makeSound();
    wrongCat->makeSound();
    anotherCat->makeSound();

    delete wrong;
    wrong = wrongCat;
    
    wrong->makeSound();
    wrongCat->makeSound();

    delete  wrong;
    // delete  wrongCat;

    return 0;
}