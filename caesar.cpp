#include <iostream>

using namespace std;

int main()
{
    int key;
    string sentence;

    cout << "enter the key: ";
    cin >> key;

    cin.ignore();

    cout << "enter the sentence to be encrypted: ";
    getline(cin, sentence);

    // loop through the phrase
    for (int i = 0, n = sentence.length(); i < n; i++)
    {
        if (isalpha(sentence[i]))
        {
            int offset = 65; // ASCII 65 = 'A'

            if (islower(sentence[i]))
            {
                offset = 97;

                int cipheredLetter = (((int)sentence[i] - offset + key) % 26) + offset;

                cout << (char)cipheredLetter;
            }
        } else {
            towlower(sentence[i]);
        }
    }
    cout << endl;
}
