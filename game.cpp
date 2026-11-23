#include <iostream>
#include <raylib.h>
#include <string>
#include <vector>
#include "Animal.hpp"
#include "duck.cpp"

using namespace std;



int main(void){

    Duck duck("Donald", "assets\\duck.png", 50, 50, 2.3, 6);

    cout << "Animal Farm" << endl;
    InitWindow(1000,800, "Drawing Animal");
    SetTargetFPS(60);

    Texture2D duck_texture = LoadTexture(duck.pickPath.c_str());

    while(!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(GREEN);
        DrawTexture(duck_texture, duck.pos[0], duck.pos[1], WHITE);


        EndDrawing();
    }
    duck.talk();


    return 0;
}