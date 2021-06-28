
#include <stdio.h>
#include <iostream>
#include<string>
#include<stdlib.h>

using namespace std;

const int b = 666;
string sarryL[b];
string sarryP[b];
string ff;
int numK;

string bb(string val) {
	int numLK1;
	if (val.size() < 10 && val.size() > 5) {
		int i;
		for (i = 0; i < b; ++i)
		{
			if (val == sarryL[i]) {
				string ff = "good work, you are ";
				cout << ff;
				numLK1 = i;
				cout << "[" << numLK1 << "]" << endl;
				string numLK = to_string(numLK1);
				break; return numLK;
			}
		}
	}
	else {
		cout << "tru enuf" << endl;
		return "error1010";
	}
}
int main()
{
	void gg();
	cout << "Hi user, input your birthdey data" <<endl;
	sarryL[5] = "332000";
	string valik;
	cin >> valik;
	string numL=bb(valik);
	cout << numL;
	string pass1 = "pass" + numL;
	cout << pass1;
	numK = atoi(numL.c_str());
	cout << numK;
		sarryP[numK] = pass1;
		cout << sarryP[numK];
	gg();
	return 1;
}
void gg() {
	string val1;
	cout << "send your - pass" << endl;
	cin >> val1;
	int i;
	for (i = 0; i < b; ++i)
	{
		if (val1 == sarryP[i]) {
			break; cout << "good work"; return;
		}
	}
	gg();
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
