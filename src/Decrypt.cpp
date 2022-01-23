#include <Headers.h>

#include <Pragma.h>

class Decrypt
{
private:

    char source[100];
    char data;

public:

    Decrypt()
    {
        std::cout << "\nEnter name of the file to decrypt";
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
            std::ofstream outfile("DECRYPTED.txt");

            while (infile)
            {
                //Read encrypted data from source file
                //------------------------------------
                infile.get(data);
                //Decrypt the data and put it into the target file
                //------------------------------------------------
                outfile.put(~data);

                std::cout << ~data;
            }

            //Close the target file
            //---------------------
            outfile.close();

            if (data != 0)
                std::cout << "\nDecrypt successfull!";
        }
    }
};