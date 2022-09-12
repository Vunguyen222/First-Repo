#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

bool operator<(string &a, string &b)
{
    long int lenga = static_cast<int>(a.length());
    long int lengb = static_cast<int>(b.length());

    if (lenga > lengb)
        return 0;
    else if (lenga < lengb)
        return 1;

    long int i;
    for (i = 0; i < lenga; i++)
    {
        if (a[i] != b[i])
            break;
    }
    return a[i] < b[i];
}

void bigSorting(vector<string> &unsorted)
{
    sort(unsorted.begin(), unsorted.end());
}
int main()
{
    ifstream ifs("input.txt");
    vector<string> arr;
    arr.reserve(100);
    string temp;
    while (getline(ifs, temp))
    {
        arr.push_back(temp);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "\n\n\n";
    bigSorting(arr);
    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << "\n";
    }
    ifs.close();
    system("pause");
    return 0;
}