
#include <stdio.h>
#include <iostream>
#include<string>
#include<stdlib.h>
/*
 I WANT TO BE FREE
 */
using namespace std;

const int b = 666, b1 = 2;
int numLK1;
string nameD, nameP, sarryL[b][b1];

void bb() {
	cin >> nameD;
		for (int i = 0; i < b; ++i){
			if (nameD == sarryL[i][0])
				{
				auto ff = "good work, you are ";
				cout << ff;
				numLK1 = i;
				cout << "[" << numLK1 << "]" << endl;
				return;
				}
		}
	cout << "tru again" << endl;
	bb();
}
void gg() {
	string val1;
	cin >> val1;
		if (val1 == sarryL[numLK1][1]) {
		cout << "good work, your modul ="<<  (numLK1+666)%10 <<"\n"; 
		cout << "your multiplication =" << 666 * numLK1 << "\n";
		cout << "your division =" << 666 / b1 << "\n";
		cout << "your adition =" << numLK1+666 << "\n";
		cout << "your subtraction =" <<  666-numLK1 << "\n";
		
		return;
		}
		else {
			cout << "tru again" << endl;
			gg();
		}
}
int main(){
	//void gg();
	sarryL[4][0] = "332000";
	cout << "Hi user 666, input your birthdey data" <<endl;
	bb();
	string pass1 = "pass" + to_string(numLK1) + to_string(numLK1) + to_string(numLK1);
	sarryL[numLK1][1] = pass1;
	cout << "send your - pass" << endl;
	gg();
	return 1;
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
