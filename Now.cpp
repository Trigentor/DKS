//
#include "iostream"

using namespace std;

int main()
{	
	setlocale(LC_ALL, "Russian");	//������� ���� � �������
	 
	int a,b;						//����������

	cout << "������� �����" << endl;
	cin >> a;
	b = a;
	if (a > 0)//������ ������
	{
		for (int i = 1; i < b;)//���� ��� ���������� 
		{
			a = a * i;
			i++;
		}
		cout << "��������� �����:" << a << endl;
	}

	
	return 0;
}