#ifndef CHARACTER_HPP
#define CHARACTER_HPP
class Character{
public:
    Character(void);
    Character(Character const & src);
    virtual~Character(void);

    Character &operator=(Character const & rhs);

private:
};


#endif