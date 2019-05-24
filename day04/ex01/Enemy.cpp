#include "Enemy.hpp"

Enemy::Enemy(const Enemy &src) { *this = src; }

Enemy::~Enemy(void) {}

Enemy &Enemy::operator=(const Enemy &rhs) {
    this->_type = rhs.getType();
    this->_HP = rhs.getHP();
    return *this;
}

Enemy::Enemy(int hp, const std::string &type) : _HP(hp), _type(type) {}

std::string Enemy::getType() const {
    return this->_type;
}

int Enemy::getHP() const {
    return this->_HP;
}

void Enemy::takeDamage(int damage) {
    if (damage > 0){
        this->_HP = std::max(_HP - damage, 0);
        if(this->_HP == 0)
            delete this;
    }
}
