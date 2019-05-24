class mere : Charactere {};
class fille : Warrior {};
class externe : Cats{};

int main(){
    //This is OK, Warrior Is a Warrior
    Warrior   *a = new Warrior();

    //This is also OK because Warrior IS a Charactere
    Character *b = new Warrior();

    //This would NOT be ok because Vharactere IS NOT a Warrior
    Warrior   *c = new Character();

    //This would NOT be ok either because Cat IS NOT a Character
    Cats    *d = new Character();
}
