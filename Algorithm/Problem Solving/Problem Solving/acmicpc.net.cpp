#include "Header.h"

void an1()
{
	vector<string> v;
	vector<string>::iterator ite;

	v.push_back("joonas");
	v.push_back("baekjon");

	string input;
	cin >> input;

	for (ite = v.begin(); ite != v.end(); ite++)
	{
		if (input == *ite)
		{
			cout << input + "??!";
		}
	}
	
	pause();
}

void an2()
{
	int value;

	cin >> value;
	value -= 543;
	cout << value;

	pause();
}

void an3()
{
	int king;
	int queen;
	int ruke;
	int vishop;
	int knight;
	int pone;

	cin >> king;
	cin >> queen;
	cin >> ruke;
	cin >> vishop;
	cin >> knight;
	cin >> pone;

	king = 1 - king;
	queen = 1 - queen;
	ruke = 2 - ruke;
	vishop = 2 - vishop;
	knight = 2 - knight;
	pone = 8 - pone;

	printf("%d %d %d %d %d %d", king, queen, ruke, vishop, knight, pone);

	pause();
}

void an4()
{
	cout << "         ,r'\"7\nr`-_   ,'  ,/\n \\. \". L_r'\n   `~\\/\n      |\n      |";

	pause();
}

void an5()
{
	int x;
	int y;

	cin >> x;
	cin >> y;

	if (0 < x && 0 < y)
	{
		cout << 1;
	}
	else if (x < 0 && 0 < y)
	{
		cout << 2;
	}
	else if (x < 0 && 0 > y)
	{
		cout << 3;
	}
	else if (x > 0 && 0 > y)
	{
		cout << 4;
	}

	pause();
}

void an6()
{
	int h;
	int m;

	cin >> h;
	cin >> m;

	if (m - 45 < 0)
	{
		m = 60 + m - 45;
		h--;
	}
	else
	{
		m -= 45;
	}

	if (h < 0)
	{
		h = 23;
	}

	cout << h << " " << m;

	pause();
}

void an7()
{
	int current_hour;
	int current_minutes;
	int take_time;
	int mtoh;
	int left_min;

	cin >> current_hour;
	cin >> current_minutes;
	cin >> take_time;

	current_minutes += take_time;

	mtoh = current_minutes / 60;
	left_min = current_minutes % 60;

	current_hour += mtoh;
	current_hour = current_hour % 24;

	cout << current_hour << " " << left_min;

	pause();
}

void an8()
{
	int d1 = 0;
	int d2 = 0;
	int d3 = 0;

	int res;

	cin >> d1;
	cin >> d2;
	cin >> d3;


	if (d1 == d2 and d1 == d3)
	{
		res = 10000 + d1 * 1000;
	}
	else if (d1 != d2 and d2 != d3 and d3 != d1)
	{
		int sel = d1;
		if (sel < d2)
		{
			sel = d2;
		}
		if (sel < d3)
		{
			sel = d3;
		}

		res = sel * 100;
	}
	else
	{
		if (d1 == d2)
		{
			res = 1000 + d1 * 100;
		}
		else if (d2 == d3)
		{
			res = 1000 + d2 * 100;
		}
		else
		{
			res = 1000 + d3 * 100;
		}
	}

	cout << res;

	pause();
}

void an9()
{
	int n = 0;
	cin >> n;

	for (int i = 1; i < 10; i++)
	{
		cout << n << " * " << i << " = " << n * i << endl;
	}

	pause();
}

void an10()
{
	int n = 0;
	cin >> n;

	int x;
	int y;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cin >> y;

		cout << x + y << endl;
	}

	pause();
}

void an11()
{
	int n;
	int res = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
		res += i;

	cout << res;

	pause();
}

void an12()
{
	int X;
	int N;
	int a;
	int b;
	int compare = 0;

	cin >> X;
	cin >> N;

	for (size_t i = 0; i < N; i++)
	{
		cin >> a;
		cin >> b;
		compare += a * b;
	}

	X == compare ? cout << "Yes" : cout << "No";

	pause();
}

void an13()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;

	int a;
	int b;

	cin >> T;


	for (size_t i = 0; i < T; i++)
	{
		cin >> a;
		cin >> b;

		cout << a + b << "\n";
	}

	pause();
}

void an14()
{
	long long a;
	long long b;
	long long c;

	cin >> a;
	cin >> b;
	cin >> c;

	cout << a + b + c;

	pause();
}