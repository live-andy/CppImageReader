#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

string HexOutput(char);

int main(int argc, char *argv[])
{
	unsigned char a;
	unsigned char b;
	a = 30;
	b = 42;
	unsigned int answer = 0;
	answer += a;
	answer = answer << 8;
	answer += b;
	cout << answer;
	cin.get();
	/*
	ifstream myFile;
	myFile.open("C://photo_2016-08-20_13-03-35.jpg", ios::in|ios::binary);
	char data = 0;
	while (!myFile.eof())
	{
		data = 0;
		myFile.get(data);
		cout << HexOutput(data) << "  ";
	}
	cin.get();
	return 0;
	*/
}

string HexOutput(char data)
{
	char Hex[] = "0123456789ABCDEF";
	unsigned char NewData = (unsigned char)data;
	string ReturnValue = "";
	ReturnValue += Hex[NewData / 16];
	ReturnValue += Hex[NewData % 16];
	return ReturnValue;
}