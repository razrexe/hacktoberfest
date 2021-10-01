#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    char str[100], word[20];
    int i, j, ls, lw, k, countWord = 0, chk, doIncrement;
    cout << "Enter the String: ";
    gets(str);
    cout << "Enter the Word: ";
    gets(word);
    ls = strlen(str);
    lw = strlen(word);
    for (i = 0; i < ls; i++)
    {
        k = i;
        doIncrement = 0;
        for (j = 0; j < lw; j++)
        {
            if (str[i] == word[j])
            {
                if (k > 0 && (k + lw) < ls)
                {
                    if (str[k - 1] == ' ' && str[k + lw] == ' ')
                        doIncrement = 1;
                }
                else if (k == 0 && (k + lw) < ls)
                {
                    if (str[k + lw] == ' ')
                        doIncrement = 1;
                }
                else if (k > 0 && (k + lw) == ls)
                {
                    if (str[k - 1] == ' ')
                        doIncrement = 1;
                }
                if (doIncrement == 1)
                    i++;
                else
                    break;
            }
        }
        chk = i - k;
        if (chk == lw)
            countWord++;
        i = k;
    }
    cout << "\nOccurrence of '" << word << "' = " << countWord;
    cout << endl;
    return 0;
}