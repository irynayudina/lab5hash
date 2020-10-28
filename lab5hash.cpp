#include <iostream>
using namespace std;
// hash functions//////////////////////////////////////////////////////////////////////////////////////////////////
int HashFunctionMultiplication(int k)
{
	int N = 33; double A = 0.618033;
	int h = floor(N * fmod(k * A, 1));
	return h;
}
int HashFunctionDivision(int k)
{
	return (k % 33);
}
int HashFunctionRowKeys(const char* ch)
{
	int a = 29; int M = 33;
	int result = 0;
	int size = sizeof(ch);
	for (int i = 0; i < size; i++) {
		result += (static_cast<int>(ch[i])*pow(a,i));
	}
	result = result % M;
	return result;
}
int HashFunctionRowKeys(string ch)
{
	int a = 26; int M = 13;
	int result = 0;
	int size = ch.length();
	for (int i = 0; i < size; i++) {
		result += (static_cast<int>(ch[i]) * pow(a, i));
	}
	result = result % M;
	return result;
}
//convertation functions/////////////////////////////////////////////////////////////////////////////////////////////////
int convert_char_to_int(char ch) {
	
	return static_cast<int>(ch);
}
int convert_chars_to_int(const char* ch) {
	int result = 0;
	int size = sizeof(ch);
	for (int i = 0; i < size; i++) {
		result += static_cast<int>(ch[i]);
	}
	return result;
}
int convert_chars_to_int(char* ch) {
	int result = 0;
	int size = sizeof(ch);
	for (int i = 0; i < size; i++) {
		result += static_cast<int>(ch[i]);
	}
	return result;
}
int convert_string_to_int(string ch) {
	int result = 0;
	int size = ch.length();
	for (int i = 0; i < size; i++) {
		result += static_cast<int>(ch[i]);
	}
	return result;
}
void main()
{
	setlocale(LC_ALL, "Rus");
	int key = 0;
	char c = 'c';
	const char cs = 'c';
	char* crs = new char[10];
	for (int i = 0; i < 10; i++) 
	{
		crs[i] = i;
	}
	const char* crars = "convertation";
	string conv;
	conv = "sstringToBeConverted";
	//menu/////////////////////////////////////////////////////////////////////////////////////////
	int choise = 0, val=0;
	string str;
	while (choise != 4) {
		cout << "choose the action" << endl;
		cout << "1 - HashFunctionMultiplication" << endl;
		cout << "2 - HashFunctionDivision" << endl;
		cout << "3 - HashFunctionRowKeys" << endl;
		cout << "4 - exit the menu" << endl;
		cin >> choise;
		switch (choise) {
		case 1:
			cout << "enter the int" << endl;
			cin >> val;
			cout << HashFunctionMultiplication(val) << endl;
			break;
		case 2:
			cout << "enter the int" << endl;
			cin >> val;
			cout << HashFunctionDivision(val) << endl;
			break;
		case 3:
			cout << "enter the string" << endl;
			cin >> str;
			cout << HashFunctionRowKeys(str) << endl;
			break;
		}
	}
	system("pause>>void");
}