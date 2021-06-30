
#include <stdio.h>
#include <iostream>
#include<string>
#include<stdlib.h>
/*
 I WANT TO BE FREE
 */
using namespace std;

const int b = 777, b1 = 2;
int numLK1, passI;
string nameD, nameP, sarryL[b][b1], pass1, pass2;
string::size_type sz;
int a111 = 000;
string val1;

void bb() {
	void sing1();
	void gg();
	cin >> nameD;
	if (nameD.size() > 5 && nameD.size() <9){
		if (nameD =="666666") {
			cout << "Hi master" << "\n"; pass2 = "666"; 
			numLK1 = stoi(pass2, &sz);
			sarryL[numLK1][1] = "666";
			cout << "send your - pass" << endl;
			gg();
		}
		else if (nameD == "111111") {
			cout << "Hi GOD" << "\n"; pass2 = "111";
			numLK1 = stoi(pass2, &sz);
			sarryL[numLK1][1] = "711";
			cout << "send your - pass" << endl;
			gg();
		}
		else {
			for (int i = 0; i < b; ++i) {
				if (nameD == sarryL[i][0]){
				cout << "good work, you are ";
				numLK1 = i;
				}
			}
			cout << "[" << numLK1 << "]" << endl;
			pass1 = "pass" + to_string(numLK1) + to_string(numLK1) + to_string(numLK1);
			pass2 = to_string(numLK1) + to_string(numLK1) + to_string(numLK1);
			sarryL[numLK1][1] = pass1;
			cout << "send your - pass" << endl;
			gg();
		}
	}
	else {
		cout << "tru again data" << endl;
		bb();
	}
	cout << "wellcome ";
	return;
}
void gg() {
	void sing1();
	cin >> val1;
		if (val1 == sarryL[numLK1][1]) {
		cout << "good work, your modul ="<<  (numLK1+666)%10 <<"\n"; 
		cout << "your multiplication =" << 666 * numLK1 << "\n";
		cout << "your division =" << 666 / b1 << "\n";
		cout << "your adition =" << numLK1+666 << "\n";
		cout << "your subtraction =" <<  666-numLK1 << "\n";
		sing1();
		}
		else {
			cout << "tru again pass" << endl;
			gg();
		}
	return;
}
void sing1() {
	void sing2();
	passI = stoi(pass2, &sz);
	cout << "Good news, all 666 users in your node left a signature here. " << "\n" << "So? now your time."<<"\n"<<"ENTER YOUR SIGNATURE" << "\n";
	sing2();
	return;
}

void sing2() {
	cin >> a111;
	switch (a111) {
	case 666:
		cout << "ok, you are a real person" << "\n";
		return;
	case 111:
		cout << "ok, you are a real person" << "\n";
		return;
	default: 	cout << "tru again" << endl; sing2();
	}
	return;
}
int main(){
	cout << "Hi user 666, input your birthdey data" << endl;
	sarryL[4][0] = "332000";
	bb();
	
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
