#ifndef WEAPON_HPP
 #define WEAPON_HPP
 #include <iostream>

class Weapon {
 public:
    Weapon(std::string);
    ~Weapon();
    std::string const getType();
    void setType(std::string);

 private:
    std::string _type;
};

#endif