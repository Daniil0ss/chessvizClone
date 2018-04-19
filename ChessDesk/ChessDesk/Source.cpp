#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 8; i++, cout << "\n") //Доска 8
		for (int j = 0; j < 8; j++) //на 8
		{
			if ((i + j) % 2 == 0)
			{
				cout << "-"; // Белые 
			}
			else
			{
				cout << "*"; // Чёрные
			}
		}
	system("pause");
	return 0;
}