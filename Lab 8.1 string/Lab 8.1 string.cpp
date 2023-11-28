#include <iostream>
#include <string>
using namespace std;
int Count(const std::string s)
{
	const char charsToCount[] = { 'B', 'A', 'S', 'I', 'C'};

	int k = 0;
	for (char c : charsToCount) {
		size_t pos = 0;
		while ((pos = s.find(c, pos)) != -1) {
			pos++;
			k++;
		}
	}

	return k;
}string Change(string& s)
{
	const string stringToReplace = "BASIC";
	const string replacementString = "DELPHI";

	size_t pos = 0;
	while ((pos = s.find(stringToReplace, pos)) != -1)
	{
		s.replace(pos, stringToReplace.length(), replacementString);
		pos += replacementString.length();
	}

	return s;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Number of chars BASIC:    " << Count(str) << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
