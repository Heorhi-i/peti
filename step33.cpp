
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
string nameP, sarryL[b][b1], pass1, pass2;
string::size_type sz;
string val1;

string BB() {
	string nameD1;
	cin >> nameD1;
	return nameD1;
};

void bbb() {
	void bb();
	cout << "tru again data" << endl;
	bb();
	return;
}
void bb() {
	void sing1();
	void gg();
	string nameD = BB();
	if (nameD.size() > 5 && nameD.size() < 9) {
		if (nameD == "666666") {
			cout << "Hi master" << "\n"; pass2 = "666";
			numLK1 = stoi(pass2, &sz);
			sarryL[numLK1][1] = "666";
			cout << "[" << numLK1 << "]" << endl;
			cout << "send your - pass" << endl;
			gg();
		}
		else if (nameD == "111111") {
			cout << "Hi GOD" << "\n"; pass2 = "665";
			numLK1 = stoi(pass2, &sz);
			sarryL[numLK1][1] = "711";
			cout << "[" << numLK1 << "]" << endl;
			cout << "send your - pass" << endl;
			gg();
		}
		else if (nameD == "000000") {
			cout << "Hi ZIRO" << "\n"; pass2 = "664";
			numLK1 = stoi(pass2, &sz);
			sarryL[numLK1][1] = "000";
			cout << "[" << numLK1 << "]" << endl;
			cout << "send your - pass" << endl;
			gg();
		}
		else if ((nameD != "000000") && (nameD != "111111") && (nameD != "666666")) {
			for (int i = 0; i < b; ++i) {
				if (nameD == sarryL[i][0]) {
					cout << "good work, you are ";
						numLK1 = i;
						cout << "[" << numLK1 << "]" << endl;
						pass2 = to_string(numLK1) + to_string(numLK1) + to_string(numLK1);
						pass1 = "pass" + pass2;
						sarryL[numLK1][1] = pass1;
						cout << "send your - pass" << endl;
						gg();
				}
			}
		}
		else {
			cout << "try again data" << endl;
			bb();
		}
		cout << "wellcome ";
	}
	else {
		bbb();
	}
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
		cout << "Good news, all 666 users in your node left a signature here. " << "\n" << "So? now your time." << "\n" << "ENTER YOUR SIGNATURE" << "\n";
		sing1();
		}
		else {
			cout << "try again pass" << endl;
			gg();
		}
	return;
}
void sing1() {
	string sing2(int a11);
	int a111;
	cin >> a111;
	sing2(a111);
	return;
}
string sing2(int a11) {
	string ios12;
	switch (a11) {
	case 666:
		ios12 = "ok, you are a real person in hell";
		return ios12;
	case 111:
		ios12 = "ok, you are a real person in paradise";
		return ios12;
	}
	ios12 = "tru again";
	sing1();
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
