#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

#define WIDTH 50
#define HEIGHT 25

using namespace std;

int main()
{
    while (true)
    {
        switch (_getch())
        {
        case KEY_UP:
            cout << "\n\n\n";
            cout << "\t\t" << "UP pressed";
            system("CLS");
            break;
        case KEY_LEFT:
            cout << "\n\n\n";
            cout << "\t\t" << "LEFT pressed";
            system("CLS");
            break;
        case KEY_DOWN:
            cout << "\n\n\n";
            cout << "\t\t" << "DOWN pressed";
            system("CLS");
            break;
        case KEY_RIGHT:
            cout << "\n\n\n";
            cout << "\t\t" << "RIGHT pressed";
            system("CLS");
            break;
        }        
    }
    return 0;
}


