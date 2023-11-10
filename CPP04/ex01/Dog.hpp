#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain	*dog_brain;

	public:
		Dog();
		Dog(const Dog &copy);
		Dog& operator=(Dog const& rhs);
		~Dog();

		void	makeSound() const;
};

#endif
