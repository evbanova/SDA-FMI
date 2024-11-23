// had 30% on this, because of how slow it was
//the other tests were ok therefore the logic was ok
//kati nad done it with a vector pair for score and name and after that sort with lambda function


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    int N = 0;
    std::cin >> N;

    int* score = new int[N];
    string* names = new string[N];

    for (int i = 0; i < N; i++)
        std::cin >> names[i];

    for (int i = 0; i < N; i++)
        std::cin >> score[i];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (score[j] < score[j + 1])
            {
                std::swap(score[j], score[j + 1]);
                std::swap(names[j],names[j + 1]);
            }
            else if (score[j] == score[j + 1])
            {
                if (names[j] > names[j + 1])
                {
                    std::swap(names[j], names[j + 1]);
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
        std::cout << names[i] << " " << score[i] << std::endl;

    delete[] score;
    delete[] names;

    return 0;
}