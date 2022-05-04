#include <Headers.h>

//Encrypt and Decrypt files
//-------------------------
#include "Encrypt.h"
#include "Decrypt.h"

using namespace std;

class appInit {
public:
    appInit(bool title, bool color) {
        if(title = true)
            SetConsoleTitleA("Encrypto v1.0");
        if(color = true)
            system("color e");
    }
};

void Choice();

int main() {

    appInit* init = new appInit(true, true);
    delete init;

    for (;;) {

        cout << "| 1 | Encrypt";
        cout << endl << "| 2 | Decrypt";
        cout << endl << "| 3 | Clear";
        cout << endl << "| 0 | Exit";

        Choice();
    }
}

void Choice() {

    char choice;

    cout << endl << endl << "> ";

    cin >> choice;

    if (choice == '1') {

        Encrypt* e = new Encrypt();
        delete e;

    } else if (choice == '2') {

        Decrypt* d = new Decrypt();
        delete d;

    } else if (choice == '3') {

        system("cls");

    } else if (choice == '0') {

        exit(0);

    } else {

        cout << endl << "Wrong arguments!";
        Choice();
    }
}