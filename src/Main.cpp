#include <Headers.h>

//Encrypt and Decrypt files
//-------------------------
#include "Encrypt.cpp"
#include "Decrypt.cpp"

#include <Pragma.h>

class Program
{
private:

    std::string choice;

public:

    Program()
    {
        SetConsoleTitleA("Encrypto v1.0");
        std::cout << "Encrypto v1.0";

        for (;;)
        {
            system("color e");

            std::cout << "\n\n| 1 | Encrypt";
            std::cout << "\n| 2 | Decrypt";
            std::cout << "\n| 0 | Exit";

            Choice();
        }
    }

    void Choice()
    {
        std::cout << "\n\n> ";

        fflush(stdin);
        choice = _getche();

        if (choice == "1")
        {
            Encrypt e;
        }
        else if (choice == "2")
        {
            Decrypt d;
        }
        else if (choice == "3")
        {
            system("cls");
            std::cout << "Encrypto v1.0";
        }
        else if (choice == "0")
        {
            exit(0);
        }
        else
        {
            std::cout << "\nWrong arguments!";
            Choice();
        }
    }
};

int main()
{
    Program p;
}