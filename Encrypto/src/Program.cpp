#include "Common.h"

// Custom files
#include "Encrypt.cpp"
#include "Decrypt.cpp"
#include "Pragmas.cpp"


class Program
{

public:

	Program()
	{
		system("color e");

		std::cout << "| Encrypto v1.0\n\n";
		std::cout << "| OPTIONS\n\n";
		std::cout << "| 1 | Encrypt\n\n";
		std::cout << "| 2 | Decrypt\n\n";
		std::cout << "| Your input : ";

		int choice;
		std::cin >> choice;

		if (choice == 1)
		{
			Encrypt e;
		}
		else if (choice == 2)
		{
			Decrypt d;
		}
		else
		{
			std::cout << "\n";
			std::cout << "| Wrong arguments, try again later\n";

			_getch();
		}
	}
};

int main()
{
	Program p;
}