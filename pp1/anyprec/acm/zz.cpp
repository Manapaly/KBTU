#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string digits = "0123456789abcdefghijklmnopqrstuvwxyz";
    unsigned int maxRadix = digits.length();

    string value;
    unsigned int from, to;
    cout << "Enter number from_radix to_radix: ";
    cin >> value >> from >> to;

    if (from < 2 || from > maxRadix || to < 2 || to > maxRadix)
    {
        cerr << "Wronf radix(es)\n";
        return 1;
    }

    for (size_t i = 0; i < value.length(); i++)
    {
        size_t pos = digits.find(tolower(value[i]));
        if (pos == string::npos || pos > from)
        {
            cerr << "Wrong symbol in value " << value << endl;
            return 1;
        }
    }

    unsigned long long number = 0;

    for (size_t i = 0; i < value.length(); ++i)
    {
        char k = tolower(value[i]);
        number = number*from + ((k>='a') ? k-'a' + 10 : k-'0');
    }

    cout << "Decimal: " << number << endl;

    string result;
    while(number)
    {
        result.push_back(digits[number%to]);
        number /= to;
    }
    for(int i = 0, j = result.length()-1; i < j; ++i, --j)
    {
        char x = result[i];
        result[i] = result[j];
        result[j] = x;
    }

    cout << result << endl;

    system("pause");
    return 0;
}