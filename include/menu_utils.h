#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace TuiKit{
    string addSpaces(string word, int length);
    void printOption(int selectedItem, int index, int color, string option);
    int handleKeys();
    static const int ENTER = 0;
    static const int UP = 1;
    static const int DOWN = 2;
};

