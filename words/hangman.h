#pragma once

/*
 * В этой библиотеке описаны начало, ход и конец игры.
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "wordgen.h"
using namespace std;

class Game{
public:
    string end(string w, string ew);
    void game();
};
