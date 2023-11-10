#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *cat_brain;

	public:
		Cat();
		Cat(const Cat &copy);
		Cat& operator=(Cat const& rhs);
		~Cat();

		void	makeSound() const;
};

#endif
