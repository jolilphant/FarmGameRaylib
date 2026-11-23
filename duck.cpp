#include "Animal.hpp"


class Duck : public Animal {
    public:
        float weight;
        int aggression;

        Duck(string n, string file, int x, int y, float w, int agg) : Animal(n,file,"quack",x,y){
            weight = w;
            aggression = agg;
        }

        void flight();

};