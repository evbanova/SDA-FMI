#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned N = 0;
    cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        char ch_num;
        cin >> ch_num;

        if (ch_num >= '0' && ch_num <= '9')
            arr[i] = ch_num - '0' + 1;
        else if (ch_num >= 'a' && ch_num <= 'z')
            arr[i] = ch_num - 'a' + 11;
        else
            arr[i] = ch_num - 'A' + 37;
    }

    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
    {

        if (arr[i] >= 1 && arr[i] <= 10)
            cout << char(arr[i] - 1 + '0');
        else if (arr[i] >= 11 && arr[i] <= 36)
            cout << char(arr[i] - 11 + 'a');
        else
            cout << char(arr[i] - 37 + 'A');
    }

    delete[] arr;
    return 0;
}
