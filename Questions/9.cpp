#include <iostream>
using namespace std;

int occurances(string c, char ch)
{
    int count = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == ch)
        {
            count++;
        }
    }
    return count;
}
int blankSpaces(string c)
{
    int count = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
int countWords(string str)
{
    int flag = 0;
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            flag = 0;
        }
        else if (flag == 0)
        {
            flag = 1;
            count++;
        }
    }
    return count;
}

int countVowels(string str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}

int main()
{

    cout << "Enter the string" << endl;
    string c;
    getline(cin, c);
    cout << "Enter the character" << endl;
    char ch;
    cin >> ch;
    cout << ch << " in the entered string is " << occurances(c, ch) << " times" << endl;
    cout << "Number of blank spaces is " << blankSpaces(c) << endl;
    cout << "Number of words is " << countWords(c) << endl;
    cout << "Number of vowels is " << countVowels(c) << endl;

    return 0;
}
