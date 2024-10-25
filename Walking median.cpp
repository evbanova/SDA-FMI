#include <iostream>

int main() {
    unsigned N = 0;
    std::cin >> N;

    int* A = new int[N];
    float* arr_results = new float[N];

    for (int i = 0; i < N; i++)
    {
        int num;
        std::cin >> num;
        int j = i - 1;

        while (j >= 0 && A[j] > num)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = num;

        if ((i + 1) % 2)
            arr_results[i] = A[i / 2];
        else
            arr_results[i] = (float)((A[i / 2] + A[i / 2 + 1])) / 2;
    }

    for (int i = 0; i < N; i++)
        std::cout << arr_results[i] << std::endl;

    delete[] A;
    delete[] arr_results;

}