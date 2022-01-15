#include <Headers.h>

#include "Encrypt.cpp"
#include "Decrypt.cpp"

class Program
{
public:

    Program()
    {
        SetConsoleTitleA("Encrypto v1.0");
        system("color e");

        std::cout << "Encrypto v1.0";

        std::cout << "\n\n| 1 | Encrypt";
        std::cout << "\n| 2 | Decrypt";
        std::cout << "\n| 0 | Exit";

        Choice();
    }

    void Choice()
    {
        std::cout << "\n\n> ";

        string choice;
        std::cin >> choice;

        if(choice == "1")
        {
            Encrypt e;
        }
        else if(choice == "2")
        {
            Decrypt d;
        }
        else if(choice == "0")
        {
            exit(0);
        }
        else
        {
            std::cout << "Wrong arguments!";
            Choice();
        }
    }
};

int main()
{
    Program p;
}