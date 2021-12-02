// 
// Simple Command Line PONG Game Programmed by Presto-Creator on GitHub with the help of NVitanovic's YouTube Tutorial "C++ Tutorial 21 - Simple Pong Game"
// I cleaned up some code and organized it into headers
// December 1, 2021
//

#include <iostream>
#include <time.h>
#include <conio.h>
#include "GameManager.h"

using namespace std;


int main()
{
    
    cGameManager c(40, 20);
    
    c.Run();

    cout << endl << endl << endl << "Thank you for playing!";

   
    return 0;
}

