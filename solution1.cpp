#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>

using namespace std;

int main()
{
    string str;
    vector<int> v;

    cout << "Customer ID please: ";
    getline(cin, str);

    char ch = ' ';
    char ch1 = '*';
    char ch2 = '#';

    string underscore = "_";
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]) || isalpha(str[i]) || str[i] == '_')
        {
            if (isdigit(str[i]))
            {
                v.push_back(str[i] - '0');
            }
        }
        else
        {
            cout << "invalid character" << endl;
            cout << "Program exiting\n";

            return 0;
        }
    }

    //sum caluclation
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }

    //even
    if (sum % 2 == 0)
    {
        ch = ch1;
    }

    else
    {
        ch = ch2;
    }

    //vector
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i]; j++)
        {
            cout << ch;
        }
        cout << endl;
    }

    /*Solution for part 1:b

sketching pattern:
We can create my pattern as:

Instead of checking sum of digit, It will check each digit itself for odd and even number.

If the digit is odd it will print '#'

else it will print '*'.

For input C7242_TY, It will print this pattern:

#######

**

**

**
*/

    cout << "\nMy Pattern:\n";

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
            ch = ch1;
        else
            ch = ch2;

        for (int j = 0; j < v[i]; j++)
        {
            cout << ch;
        }
        cout << endl;
    }
    system("pause");

    return 0;
}