#include <Headers.h>

#include <Pragma.h>

class Encrypt
{
private:

    char source[100];
    char data;

public:

    Encrypt()
    {

        std::cout << "\nEnter name of the file to encrypt";
        std::cout << "\n\n> ";

        fflush(stdin);
        std::cin.getline(source, 100);

        //Source file
        //-----------
        std::ifstream infile(source);

        std::cout << std::endl;

        if (!infile)
            std::cout << "Error opening file!";

        else
        {
            //Target file
            //-----------
            std::ofstream outfile("ENCRYPTED.txt");

            while (infile)
            {
                //Read data from source file
                //--------------------------
                infile.get(data);
                //Encrypt the data and put it into the target file
                //------------------------------------------------
                outfile.put(~data);

                std::cout << ~data;
            }

            //Close the target file
            //---------------------
            outfile.close();

            if (data != 0)
                std::cout << "\nEncrypt successfull!";
        }
    }
};