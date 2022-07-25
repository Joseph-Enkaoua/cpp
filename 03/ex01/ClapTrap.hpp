#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {
protected:
    std::string	_name;
	int		_hit_points;
	int		_energy_points;
	int		_attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(const ClapTrap &other);
	~ClapTrap();

	ClapTrap & operator=(const ClapTrap & rhs);
	
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
    void	set_hit_points(int amount);
    void	set_energy_points(int amount);
    void	set_attack_damage(int amount);
    int		get_hit_points( void );
    int		get_energy_points( void );
    int		get_attack_damage( void );
};

#endif