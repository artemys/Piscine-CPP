#ifndef CHARACTER_HPP
#define CHARACTER_HPP
class AWeapon{
public:
    AWeapon(void);
    AWeapon(AWeapon const & src);
    ~AWeapon(void);

    AWeapon &operator=(AWeapon const & rhs);

private:
};


#endif