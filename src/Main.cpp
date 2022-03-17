#include <Headers.h>
#include <Using.h>
#include <Pragma.h>

//Encrypt and Decrypt files
//-------------------------
#include "Encrypt.cpp"
#include "Decrypt.cpp"

class Program
{
private:

    char choice;

public:
    
    Program()
    {
        SetConsoleTitleA("Encrypto v1.0");

        for (;;)
        {
            system("color e");

            cout << "| 1 | Encrypt";
            cout << endl << "| 2 | Decrypt";
            cout << endl << "| 3 | Clear";
            cout << endl << "| 0 | Exit";

            Choice();
        }
    }

    void Choice()
    {
        cout << endl << endl << "> ";

        cin >> choice;

        if (choice == '1')
        {
            Encrypt e;
        }
        else if (choice == '2')
        {
            Decrypt d;
        }
        else if (choice == '3')
        {
            system("cls");
            cout << "Encrypto v1.0";
        }
        else if (choice == '0')
        {
            exit(0);
        }
        else
        {
            cout << endl << "Wrong arguments!";
            Choice();
        }
    }
};

int main()
{
    Program p;

    return 0;
}