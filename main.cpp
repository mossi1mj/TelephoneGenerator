#include <iostream>
#include <string>

using namespace std;

int main() {
    //declare variables
    string phrase;
    int phraseArray = 0; // start at the beginning of string "phrase" character
    int count = 0; // start at beginning

    cout << "This Application takes a Phrase that consists of ONLY LETTERS and converts to Telephone Number!\n"
            "   if Numbers or Symbols are entered, an * will show in place." << endl;
    cout << "===============================================================================================" << endl;
    cout << "Enter a Phrase to be converted into Telephone Number: ";
    getline(cin, phrase); // takes whole line of user input
    cout << "\nPhone Number: ";

    // start while loop and continue until int that symbolizes array is greater than string length
    while (phraseArray < phrase.length()) {

        switch (tolower(phrase[phraseArray])) { // converts user input variable to anything typed to lowercase
            case 'a':
            case 'b':
            case 'c':
                cout << "2"; //display number in case statement
                count++; // add one to count
                break;

            case 'd':
            case 'e':
            case 'f':
                cout << "3";
                count++;
                break;

            case 'g':
            case 'h':
            case 'i':
                cout << "4";
                count++;
                break;

            case 'j':
            case 'k':
            case 'l':
                cout << "5";
                count++;
                break;

            case 'm':
            case 'n':
            case 'o':
                cout << "6";
                count++;
                break;

            case 'p':
            case 'q':
            case 'r':
            case 's':
                cout << "7";
                count++;
                break;

            case 't':
            case 'u':
            case 'v':
                cout << "8";
                count++;
                break;

            case 'w':
            case 'x':
            case 'y':
            case 'z':
                cout << "9";
                count++;
                break;

            case ' ': // ignores spaces in string in "get line"/"phrase"
                break;

            default: // invalid input entered
                cout << "*";
                count++;
        }

        if (count == 3) // adds hyphen in phone number after 3rd digit.
            cout << "-";

        else if (count == 7) // breaks switch statement after 8 characters, to include hyphen.
            break;

        phraseArray++; // update int value by one, equivalent to next character to string "phrase".
    }
    return 0;
}
