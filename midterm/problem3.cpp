#include <iostream>
using namespace std;
int main()
{
	double a, b;
	double solution;
	char oper;

	cout << "Enter the Operation top perform. Example: a+b | a-b | a*b | a/b: " << endl;
	cin >> a >> oper >> b;

	switch (oper)
	{
	case '+':
		solution = a + b;
		break;

	case'-':
		solution = a - b;
		break;

	case'*':
		solution = a * b;
		break;

	case'/':
		solution = a / b;
		if (b == 0)
			cout << "Invalid operation dividing by 0..." << endl;
		else
			break;
	}
	cout << a << oper << b << " = " << solution << endl;
	system("pause");
	return 0;
}
