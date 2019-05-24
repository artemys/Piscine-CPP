#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
class Enemy{
public:
    Enemy(Enemy const & src);
    virtual ~Enemy(void);
    Enemy &operator=(Enemy const & rhs);

    Enemy(int hp, std::string const &type);

    std::string getType() const;
    int getHP() const;

    virtual void takeDamage(int);

private:
    Enemy();
    int _HP;
    std::string _type;
};


#endif