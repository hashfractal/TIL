#include "Header.h"

int main()
{
	string problem_code;

	while (true)
	{
		system("cls");

		cout << "문제 코드: ";
		cin >> problem_code;

		if (problem_code == "lgi1")
			lgi1();
		else
		{
			cout << "문제 코드를 찾을 수 없습니다\n";
			system("pause");
		}
			
	}
	
}

void pause()
{
	cout << "\n";
	system("pause");
}