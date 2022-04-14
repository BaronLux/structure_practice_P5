// algorithms.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "Algorithm.h"
#include "Generators.h"
#include "QuikSort.h"
#include "BinarySearch.h"

using namespace std;

void PrintArr(int* arr, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}

void test()
{
	auto bin = new BinarySearch();
	auto sort = new QuickSort();
	


	int n = 6;
	int* arr = new int[] {-100, -10, 0, 12, 13, 14 };
	arr = sort->Alg(arr, n);
	PrintArr(arr, n);

	bin->Run(arr, n);
	bin->Print();
}

int main()
{
	auto bin = new BinarySearch();
	auto sort = new QuickSort();

	auto gen = new Generators();
	cout << "input key";
	cin >> bin->key;
	for (size_t i = 2; i < 7; i++)
	{
		int n = pow(10, i);
		auto key_idx = rand() % n;
		auto arr = gen->RandomGen(n);
		arr[key_idx] = bin->key;
		arr = sort->Alg(arr, n);

		cout << n << endl;

		bin->Run(arr, n);

		bin->Print();
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
