#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap( void );
		ScavTrap( ScavTrap const &);
        	ScavTrap& operator=(ScavTrap const &);
                ScavTrap(std::string name);
                ~ScavTrap( void );

		void attack(const std::string& target);
		void guardGate( void );

};

#endif
