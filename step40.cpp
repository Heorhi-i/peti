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

const int b{777}, b1{2};
int numLK1{0};
string sarryL[b][b1]{" "}, pass2{" "};
string::size_type sz;

string nameD1{ " " };

string BB() {
	void bbb();
	
	cin.clear();
	cin >> nameD1;
	if (nameD1.size() > 5 && nameD1.size() < 9) {
		return nameD1;
	}
	else {
		cout << "tru again data" << endl;
		BB();
	}
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
	signed int i{0};

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
		string pass1{ " " };
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

	string val1{ " " };
	cin.clear();
	cin >> val1;
	if (val1 == sarryL[numLK1][1]) {
		cout << "good work, your modul =" << (numLK1 + 666) % 10 << "\n";
		cout << "your multiplication =" << 666 * numLK1 << "\n";
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
	size_t i { 0 };
	char c{' '};
	while (i < n && (c = getchar()) != EOF && c != '\n') {
		s[i++] = c;
	}
	return atoi(s);
}

void sWich() {
	bool sing2(int);
	int inbuff(char*, size_t);
	const int b11{ 4 };

	char buf[b11];
	cin.clear();
	cin >> buf;
	int buff = inbuff(buf, b11);
	string ios12{" "};
		if (sing2(buff)) {
			switch (buff) {
				case 666:
					ios12 = "ok, you are a real person in hell";
					cout << ios12 << endl;
					return;
				case 111:
					ios12 = "ok, you are a real person in paradise";
					cout << ios12 << endl;
					return;
				default:
					return;
			}
		}
		else {
			cout << "try inaf" << endl;
			sWich();
			return;
		}
		return;
}

bool sing2(int a11) {
	switch (a11) {
	case 666:
		return true;
	case 111:
		return true;
	default:	
		return false;
	}
}

bool sing3(char a11) {

	switch (a11) {
	case 1:
		return true;
	case 2:
		return true;
	default:
		return false;
	}
}


void inkom() {
	cout << "Hi user 666, input your birthdey data" << endl;
	int random_number = 1 + rand() % 666;
	sarryL[random_number][0] = "332000";
	string pox = { " " };
	pox=BB();
	bb(pox);
	return;
}


void inKome() {
	char a12{ ' '};
	cin.clear();
	cin >> a12;
	if (isdigit(a12)) {
		int a13 = a12;
		if (sing3(a13)) {
			int aaa1 = { 0 };
			aaa1 = 1 + rand() % 9;
			switch (a13) {
			case 1:
				cout << "Prove that you are not a robot: sent data today in format 01XXX10XXX1991XXX, XXX you can see there->" << aaa1 << aaa1 << aaa1 << endl;
				break;
			case 2:
				inkom();
				break;
			default:
				cout << "try inaf" << endl;
				inKome();
				return;
			}
		}
		else
		{
			cout << "try inaf" << endl;
			inKome();
			return;
		}
	}
	else {
		cout << "try inaf stupid baka" << endl; inKome();
		return;
	}
	return;
}


int main() {
	cout << "Hi user, send number? what u want: registration '[1]' or autorizzation '[2]'" << endl;
	inKome();
	return 1;
}