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
		else if (problem_code == "an1")
		{
			an1();
		}
		else if (problem_code == "an2")
		{
			an2();
		}
		else if (problem_code == "an3")
		{
			an3();
		}
		else if (problem_code == "an4")
		{
			an4();
		}
		else if (problem_code == "an5")
		{
			an5();
		}
		else if (problem_code == "an6")
		{
			an6();
		}
		else if (problem_code == "an7")
		{
			an7();
		}
		else if (problem_code == "an8")
		{
			an8();
		}
		else if (problem_code == "an9")
		{
			an9();
		}
		else if (problem_code == "an10")
		{
			an10();
		}
		else if (problem_code == "an11")
		{
			an11();
		}
		else if (problem_code == "an12")
		{
			an12();
		}
		else if (problem_code == "an13")
		{
			an13();
		}
		else if (problem_code == "an14")
		{
			an14();
		}
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