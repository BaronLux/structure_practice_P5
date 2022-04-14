#pragma once
#include "Algorithm.h"
class BinarySearch :
    public Algorithm
{
    int finded;
    int find(const int* arr, int key, int count)
    {
        int l = 0;            // нижн€€ граница
        int u = count - 1;    // верхн€€ граница

        while (l <= u) {
            int m = (l + u) / 2;
            if (arr[m] == key) return m;
            if (arr[m] < key) l = m + 1;
            if (arr[m] > key) u = m - 1;

            comparison_count+=3;
        }
        auto res = std::numeric_limits<int>::max();
        return res;
    }

    int* Alg(int* arr, int n) final // функци€ Al
    {
        finded = find(arr, key, n - 1);
        return arr;
    }

    string GetName() final
    {
        return "binary search";
    }
};

