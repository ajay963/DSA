#include <iostream>
using namespace std;

int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    int index = 0;
    for (int i = 0; i < (int)str2.length(); i++)
    {
        switch (str2[i])
        {
        case 'R':
            if (index + 1 < (int)str1.length())
                index++;
            break;
        case 'L':
            if (index > 0)
                index--;
            break;
        case 'T':
            if (str1[index] != '9')
                str1[index]++;
            break;
        case 'D':
            if (str1[index] != '0')
                str1[index]--;
            break;
        case 'S':
            i++;
            string num;
            for (i; i < (int)str2.length() and str2[i] >= '0' and str2[i] <= '9'; i++)
                num.push_back(str2[i]);
            i--;
            int ind = stoi(num);
            swap(str1[index], str1[ind - 1]);
            break;
        }
    }
    cout << str1 << endl;
}
