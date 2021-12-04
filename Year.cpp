#include <iostream>

using namespace std;

int main()
{
	int Year = 0;
	cout << "Enter year" << endl;
	cin >> Year;
	if (Year % 4 != 0 or Year % 100 == 0 and Year % 400 != 0)
	{
		cout << "Common year - 365 days" << endl;
	}
	else
	{
		cout << "Leap year - 366 days" << endl;
	}
	system("pause");
	return 0;
}