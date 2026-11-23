#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <vector>

using namespace std;

class Animal{
     public:
        string name;
        string pickPath;
        string sound;
        vector<int> pos;

        Animal(string n, string file, string s, int x, int y);
        void talk();

};


#endif