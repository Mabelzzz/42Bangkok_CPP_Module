#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap:  virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const &copy);
		FragTrap&	operator=(FragTrap const& rhs);
		~FragTrap();

		void	highFivesGuys();
};

#endif
