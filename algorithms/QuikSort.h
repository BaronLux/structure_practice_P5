#pragma once
#include "Algorithm.h"
class QuickSort :
    public Algorithm
{

    int* quickSort(int* numbers, int left, int right)
    {
        int pivot; // ����������� �������
        int l_hold = left; //����� �������
        int r_hold = right; // ������ �������
        pivot = numbers[left];
        while (left < right) // ���� ������� �� ���������
        {
            while ((numbers[right] >= pivot) && (left < right))
            {
                this->comparison_count++;
                this->iter_count++;

                right--;
            }// �������� ������ ������� ���� ������� [right] ������ [pivot]
            if (left != right) // ���� ������� �� ����������
            {
                numbers[left] = numbers[right]; // ���������� ������� [right] �� ����� ������������
                left++; // �������� ����� ������� ������
            }
            while ((numbers[left] <= pivot) && (left < right))
            {
                this->comparison_count++; // ���������� ���������
                this->iter_count++; // ���������� ��������

                left++; // �������� ����� ������� ���� ������� [left] ������ [pivot]
            }
            if (left != right) // ���� ������� �� ����������
            {
                numbers[right] = numbers[left]; // ���������� ������� [left] �� ����� [right]
                right--; // �������� ������ ������� �����
            }
        }
        numbers[left] = pivot; // ������ ����������� ������� �� �����
        pivot = left;
        left = l_hold;
        right = r_hold;
        if (left < pivot) // ���������� �������� ���������� ��� ����� � ������ ����� �������
            quickSort(numbers, left, pivot - 1);
        if (right > pivot)
            quickSort(numbers, pivot + 1, right);

        
        return numbers;
    }

    string GetName()
    {
        return "quick sort";
    }
public:
    int* Alg(int* arr, int n) final // ������� Al
    {
        return quickSort(arr, 0, n - 1);
    }
};

