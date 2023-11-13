#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[] = "the quick brown fox jumped over the lazy dog";

    int words = 1;

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == ' ')
        {
            words++;
        }
    }

    string *str = new string[words];

    int j = 0;
    for (int i = 0; i < words; i++)
    {

        while (j < strlen(arr))
        {
            if (arr[j] != ' ')
            {
                str[i] += arr[j];
            }
            else
            {
                j++;
                break;
            }
            j++;
        }
    }

    for (int j = 0; j < words; j++)
    {

        for (int i = 0; i < words -1; i++)
        {
           
            if (str[i][0] > str[i + 1][0])
            {
                string temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
            }
        }
    }

    // cout << "hbhb";
    for (int i = 0; i < words; i++)
    {
        cout << str[i] << endl;
    }

    delete str;
    return 0;
}