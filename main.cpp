#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "Hey ! psst ! Do you know what is a fractal ? ";
    string choice;
    cin >> choice;
    if (choice == "no"){
        int i=0;
        while (i != 1000000){
            cout << "\nThis is a fractal :D\n";
            i++;
        }
        return main();
    }else if (choice == "yes"){
        cout << "\nOh... so... Bye !";return 0;
    }else{return main();}
return 0;}
