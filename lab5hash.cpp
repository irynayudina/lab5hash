#include <iostream>
using namespace std;
int HashFunctionMultiplication(int k)
{
	int N = 8; double A = 0.618033;
	int h = N * fmod(k * A, 1);
	return h;
}
int HashFunctionMultiplication(int k)
{
	int N = 8; double A = 0.618033;
	int h = N * fmod(k * A, 1);
	return h;
	return 0;
}
int HashFunctionDivision(int k)
{
	return (k % 13);
}
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

	/*cout << "int " << HashFunctionMultiplication(key) << endl;
	cout << "char " << HashFunctionMultiplication(c) << endl;
	cout << "const char " << HashFunctionMultiplication(cs) << endl;
	cout << "char array " << HashFunctionMultiplication(crs) << endl;
	cout << "const char array " << HashFunctionMultiplication(crars) << endl;
	cout << "string " << HashFunctionMultiplication(conv) << endl;*/

	system("pause>>void");
}