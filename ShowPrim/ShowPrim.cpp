// ShowPrim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

int main()
{
    system("mode con cols=80 lines=25");
    const unsigned char WHITE = 219;
    const unsigned char GRAY = 176;
    unsigned char ch;

    for (int c = 0; c < 80 * 25 - 1; c++)
    {
        ch = WHITE;
        for(int v = 2; v < c; v++)
            if (c % v == 0)
            {
                ch = GRAY;
                break;
            }
        std::cout << ch;
    }
    
    _getch();
    return 0;
}
