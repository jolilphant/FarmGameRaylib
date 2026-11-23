#include "Animal.hpp"
#include <iostream>

Animal::Animal(string n, string file, string s, int x, int y){
            name = n;
            pickPath = file;
            sound = s;
            pos = {x, y};
            cout << "An Animal Is Born" << endl;
}

void Animal::talk(){
            cout << sound << endl;
}
