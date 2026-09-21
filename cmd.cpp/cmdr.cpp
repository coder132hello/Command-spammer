#include <iostream>
#include <windows.h>
using namespace std;

int main() {
  system("title CMDR SPAMMER");


    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout << "----------------\n";
    cout << "   C M D R V2    \n";
    cout << "     SPAMMER     \n";
    cout << "----------------\n";

    cout << "[*] SYSTEM; ONLINE\n";
    cout << "[*] VERSION; V2 BETA\n";
    cout << "[*] STATUS; READY\n";
    cout << "---------------------------\n";
    cout << "[1] start\n";
    cout << "[2] about\n";

    cout << "CMDR@SPAMMER:~$\n";

    int choice;
    cin >> choice;
    
    if (choice == 1) {

        Sleep(3000);

        for (int i = 0; i < 900000; i++) {
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
          cout << "CMDR SPAMMER #" << i + 1 << "\n";
            cout << "CMDR SPAMMER\n";
            cout << "    V2";
            cout << "   BETA\n";
        }
      }

      else if (choice == 2) {
        cout << "This is a harmless spammer\n";
        cout << "if you use the spammer you can close it\n";
        cout << "Thats it!\n";
      }


    system("pause");
    return 0;
}