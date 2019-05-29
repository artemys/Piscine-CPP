#include <iostream>

struct Data {
    std::string s1;
    int n;
    std::string s2;
};


void * serialize( void ){
    std::string *ser = new std::string;
    srand(time(0));
    for (int i = 0; i < 17; ++i) {

        if(i == 8){
            *ser += std::to_string(rand());
            continue;
        }
        int c = rand() % 127;
        if(isalnum(c))
            *ser += c;
        else
            i--;
    }
    std::cout << *ser << std::endl;
    return ser;
}
Data * deserialize( void * raw ){
        Data *data = new Data;
        std::string str = *reinterpret_cast<std::string *>(raw);

        data->s1 = str.substr(0, 8);

        data->n = std::stoi(str.substr(8, str.length()-16));
        data->s2 = str.substr(str.length() - 8, 8);
        return data;
}


int main(){
    Data *test = deserialize(serialize());
    std::cout << test->s1 << std::endl;
    std::cout << test->n << std::endl;
    std::cout << test->s2 << std::endl;

    return 0;
}
