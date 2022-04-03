#include <Headers.h>
#include <Using.h>
#include <Pragma.h>

class Encrypt
{
private:

    char source[100];
    char data;
    Animations an_en;

public:

    Encrypt()
    {
        cout << endl << "Enter name of the file to encrypt";
        cout << endl << endl << "> ";

        cin.ignore();
        cin.getline(source, 100);

        //Source file
        //-----------
        std::ifstream infile(source);

        cout << endl;

        if (!infile)
        {
            an_en.Anime_line(200, 2);
            cout << "Error opening file!" << endl << endl;
        }
        else
        {
            //Target file
            //-----------
            std::ofstream outfile("ENCRYPTED.txt");

            an_en.Anime_line(200, 2);

            while (infile)
            {
                Sleep(5);
                //Read data from source file
                //--------------------------
                infile.get(data);
                //Encrypt the data and put it into the target file
                //------------------------------------------------
                outfile.put(~data);

                cout << ~data;
            }

            //Close the target file
            //---------------------
            outfile.close();

            if (data != 0)
            {
                cout << endl;
                an_en.Anime_line(200, 2);
                cout << "Encrypt successfull!" << endl;
                cout << endl;
                cout << "Encrypted data put in ENCRYPTED.txt" << endl << endl;
            }
        }
    }
};