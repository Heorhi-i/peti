#include <stdio.h>
#include <iostream>
#include <cmath>
#include<string>
#include<stdlib.h>
using namespace std;

/*
 I WANT TO BE FREE
*/
using namespace std;

const int b = 777, b1 = 2;
int numLK1;
string sarryL[b][b1], pass2;
string::size_type sz;


string BB() {
	void bbb();

	string nameD1;
	cin.clear();
	cin >> nameD1;
	if (nameD1.size() > 5 && nameD1.size() < 9) {
		return nameD1;
	}
	else {
		cout << "tru again data" << endl;
		BB();
	}
//	return "gg";
}


void bb(string aas) {
	void gg();
	void chek(string);

	if (aas == "666666") {
		cout << "Hi master" << "\n";
		pass2 = "666";
		numLK1 = stoi(pass2, &sz);
		sarryL[numLK1][1] = "666";
		cout << "[" << numLK1 << "]" << endl;
		cout << "send your - pass" << endl;
		gg();
	}
	else if (aas == "111111") {
		cout << "Hi GOD" << "\n";
		pass2 = "665";
		numLK1 = stoi(pass2, &sz);
		sarryL[numLK1][1] = "711";
		cout << "[" << numLK1 << "]" << endl;
		cout << "send your - pass" << endl;
		gg();
	}
	else if (aas == "000000") {
		cout << "Hi ZIRO" << "\n";
		pass2 = "664";
		numLK1 = stoi(pass2, &sz);
		sarryL[numLK1][1] = "000";
		cout << "[" << numLK1 << "]" << endl;
		cout << "send your - pass" << endl;
		gg();
	}
	else {
		chek(aas);
	}
	return;
}

bool ch4ek(string aass2) {
		signed int i = 0;

		while (i < b) {
			if (aass2 == sarryL[i][0]) {
				numLK1 = i; 
				return true;
			}
			else
				i++;
	}
	return false;
}

void chek(string aas1) {
	void inkom();
	void gg();
	bool ch4ek(string);

	if (ch4ek(aas1)) {
		cout << "good work, you are ";
		cout << "[" << numLK1 << "]" << endl;
		string pass1;
		pass2 = to_string(numLK1) + to_string(numLK1) + to_string(numLK1);
		pass1 = "pass" + pass2;
		sarryL[numLK1][1] = pass1;
		cout << "send your - pass" << endl;
		gg();
	}
	else {
		cout << "try again login" << endl;
		inkom();
	}
	return;
}

void gg() {
	void sWich();

	string val1;
	cin.clear();
	cin >> val1;
	if (val1 == sarryL[numLK1][1]) {
		cout << "good work, your modul =" << (numLK1 + 666) % 10 << "\n";
		cout << "your multiplication =" << 666 * numLK1 << "\n";
		//pair<int, int> divide12(int app1, int app2); книга говорит что реализация должна возрващать результат деления
		//auto [app1, app2] = divide12(666,111);
		cout << "your division =" << 666 / b1 << "\n";
		cout << "your division =" << 666 / b1 << "\n";
		cout << "your adition =" << numLK1 + 666 << "\n";
		cout << "your subtraction =" << 666 - numLK1 << "\n";
		cout << "Good news, all 666 users in your node left a signature here. " << "\n" << "So? now your time." << "\n" << "ENTER YOUR SIGNATURE" << "\n";
		sWich();
	}
	else {
		cout << "try again pass" << endl;
		gg();
	}
	return;
}


int inbuff(char* s, size_t n) {
	size_t i = 0;
	char c;
	while (i < n && (c = getchar()) != EOF && c != '\n') {
		s[i++] = c;
	}
	return atoi(s);
}

void sWich() {
	string sing2(int);
	int inbuff(char*, size_t);
	const int b11 = 4;

	char buf[b11];
	cin.clear();
	cin >> buf;
		int buff = inbuff(buf, b11);
		string a = sing2(buff);
		if (a == "tru again") { cout << a << endl; sWich(); }
		else {
			cout << a << endl;
			return;
		}
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
	ios12 = "tru again11";
	return ios12;
}

void inkom() {
	cout << "Hi user 666, input your birthdey data" << endl;
	int random_number = 1 + rand() % 666;
	sarryL[random_number][0] = "332000";
	string pox = BB();
	bb(pox);
	return;
}

int main() {

	cout << "Hi user, send number? what u want: registration '[1]' or autorizzation '[2]'" << endl;
	int a12;
	cin >> a12;
	int aaa1 = 1 + rand() % 9; 
	cout << aaa1 << endl;
	switch (a12) {
	case 1:
		cout << "Prove that you are not a robot: sent data today in format 01XXX10XXX1991XXX, XXX you can see there->"<< aaa1<< aaa1<< aaa1 << endl;
		break;
	case 2:
		inkom();
		break;
	}
	return 1;
}