#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 8; i++, cout << "\n") //����� 8
		for (int j = 0; j < 8; j++) //�� 8
		{
			if ((i + j) % 2 == 0)
			{
				cout << "-"; // ����� 
			}
			else
			{
				cout << "*"; // ׸����
			}
		}
	system("pause");
	return 0;
}