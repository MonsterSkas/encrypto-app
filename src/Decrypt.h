#include <Headers.h>

using namespace std;

class Decrypt {
private:

    char source[100];
    char data = ' ';
    Animations *an_de = new Animations();

public:

    Decrypt() {

        cout << endl << "Enter name of the file to decrypt";
        cout << endl << endl << "> ";

        cin.ignore();
        cin.getline(source, 100);

        //Source file
        //-----------
        std::ifstream infile(source);

        cout << endl;

        if (!infile) {

            an_de->Anime_line(200, 2);
            cout << "Error opening file!" << endl << endl;

        } else {
            //Target file
            //-----------
            std::ofstream outfile("DECRYPTED.txt");

            an_de->Anime_line(200, 2);

            while (infile) {

                Sleep(5);
                //Read encrypted data from source file
                //------------------------------------
                infile.get(data);
                //Decrypt the data and put it into the target file
                //------------------------------------------------
                outfile.put(~data);

                cout << ~data;
            }

            //Close the target file
            //---------------------
            outfile.close();

            if (data != 0) {

                cout << endl;
                an_de->Anime_line(200, 2);
                cout <<  "Decrypt successfull!" << endl;
                cout << endl;
                cout << "Decrypted data put in DECRYPTED.txt" << endl << endl;
            }
        }
        delete an_de;
    }
};