#include <iostream>
#include <windows.h>
using namespace std;

int main() {
  system("title CMDR SPAMMER");


    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
    cout << R"(
   _____ __  __ ____  ____  
  / ____|  \/  |  _ \|  _ \ 
 | |    | \  / | | | | |_) |
 | |____| |\/| | |_| |  _ < 
  \_____|_|  |_|____/|_| \_\

       S P A M M E R )" << endl;
    cout << "---------------------------\n";
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
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
          cout << "CMDR SPAMMER #" << i + 1 << "\n";
            cout << "CMDR SPAMMER\n";
            cout << "    V2";
            cout << "   BETA   \n";
        }
      }

      else if (choice == 2) {
        cout << "Trying to make the !next generation spammer!\n";
        cout << "This is a harmless spammer\n";
        cout << "This doesn't do anything bad\n";
        cout << "Thats it!\n";
      }


    system("pause");
    return 0;
}
