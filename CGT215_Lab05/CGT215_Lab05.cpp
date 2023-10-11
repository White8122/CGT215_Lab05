// CGT215_Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> cypher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };
char translate(char letter){
    if (letter >= 65 && letter <= 90) {
        return cypher[letter - 65];
    }

    else if (letter >= 97 && letter <= 122) {
        char upperCaseLetter = letter - 32;
        char upperCaseCode = cypher [upperCaseLetter - 65];
        return upperCaseCode + 32;
    }
    else {
        return letter;
    }
}
int main()
{
 string text;
    cout << "input text to cypher: ";
    getline(cin, text); // did I do this correctly?
    
    for (char& letter : text)
    {
        letter = translate(letter);
     }
    cout << "Encoded Message: \"" << text << "...\" " << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
