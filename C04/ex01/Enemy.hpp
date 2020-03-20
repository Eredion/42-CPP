#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	protected:
	std::string Type;
	int			Hp;
	public:
	Enemy();
	Enemy(int hp, std::string const &type);
	virtual	~Enemy();
	Enemy(Enemy const &copy);
	Enemy &operator = (const Enemy &copy);
	std::string getType() const;
	int getHp() const;
	virtual void takeDamage(int dmg);
};

#endif
