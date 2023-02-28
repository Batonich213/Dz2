#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "¬ведите число: \n";
	cin >> size;
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			for (int k = 0; k < size; k++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (j % 2 == 0)
					{
						for (int z = 0; z < size; z++)
						{
							cout << "/";
						}
					}
					else
					{
						for (int d = 0; d < size; d++)
						{
							cout << ".";
						}
					}
				}
				cout << "\n";
			}
		}
		else
		{
			for (int k = 0; k < size; k++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (j % 2 == 0)
					{
						for (int z = 0; z < size; z++)
						{
							cout << ".";
						}
					}
					else
					{
						for (int d = 0; d < size; d++)
						{
							cout << "/";
						}
					}
				}
				cout << "\n";
			}
		}
	}
	return 0;
}
