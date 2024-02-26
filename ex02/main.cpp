#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
    // const AAnimal* meta = new AAnimal();
    const AAnimal *j = new Dog();
    const AAnimal *i = new Cat();
    const AAnimal *k(j);

    j->makeSound();
    i->makeSound();
    k->makeSound();

    delete i;
    i = j;
    i->makeSound();
    delete j;
    // delete i;

    AAnimal *array_animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2)
            array_animals[i] = new Dog();
        else
            array_animals[i] = new Cat();
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
        array_animals[i]->makeSound();

    Cat *cat1 = new Cat();
    Cat *cat2 = new Cat();
    cat1->put_idea("idea 1");
    cat1->put_idea("idea 2");
    cat2->put_idea("idea 3");
    cat2->put_idea("idea 4");
    cat1->print_ideas();
    cat2->print_ideas();
    Dog *dog2 = new Dog();
    dog2->put_idea("different idea 1");
    dog2->put_idea("different idea 2");
    dog2->print_ideas();

    delete cat1;
    cat1 = cat2;

    cat1->print_ideas();

    // delete cat2;
    delete cat1;
    delete dog2;


    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
        delete array_animals[i];

    return 0;
}