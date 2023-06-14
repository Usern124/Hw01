#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;

ifstream fin("in.txt");
ofstream fout("out.txt");

void out(int* arr, unsigned size);

int main()
{
	unsigned n = 0;
	unsigned m = 0;
	int* arr_n = 0;
	int* arr_m = 0;
	int tmp = 0;

	if (!fin.is_open()) {
		cout << "File not found\n";
		return 1;
	}

	fin >> n;
	arr_n = new int[n]();
	for (int i = 0; i < n; ++i)
		fin >> arr_n[i];

	fin >> m;
	arr_m = new int[m]();
	for (int i = 0; i < m; ++i)
		fin >> arr_m[i];

	fin.close();

	tmp = arr_m[m - 1];
	for (int i = m - 1; i > 0; --i) {

		arr_m[i] = arr_m[i - 1];
	}
	arr_m[0] = tmp;

	tmp = arr_n[0];
	for (int i = 0; i < n - 1; ++i) {

		arr_n[i] = arr_n[i + 1];
	}
	arr_n[n - 1] = tmp;


	out(arr_m, m);
	out(arr_n, n);
	cout << "Saved\n";

	delete[] arr_m;
	delete[] arr_n;

	return 0;
}

void out(int* arr, const unsigned size) {
	fout << size << endl;
	for (int i = 0; i < size; ++i)
		fout << arr[i] << ' ';
	fout << endl;
}