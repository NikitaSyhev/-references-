//���� ������ ������ � ������� ������������� �������
#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

template <typename T> 
void show_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}

void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}

void pswap(int* pn1, int* pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}

void refswap(int refn1, int refn2) {
	int tmp = refn1;
	refn1 = refn2;
	refn2 = tmp;
}

int mx[10][2];

int& func(int index) {
	return mx[index][1];

}


template <typename T> 
T& max_arr(T arr[], const int length) {
	int i_max = 0;
	for (int i = 1; i < length; i++)
		if (arr[i] > arr[i_max])
			i_max = i;

	return arr[i_max];
}


int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;

	n = 10; m = 30;

	for (int i = 0; i < 10; i++) {
		std::cout << "��� � " << i + 1 << ": ";
		std::cin >> mx[i][0];
		func(i) = mx[i][0];
	}
	std::cout << "�������� ������: \n";
	for (int i = 0; i < 10; i++)
		std::cout << mx[i][0] << '\t' << func(i) << '\n';

	const int size = 5;
	int arr[5]{ 4, 2, 7, 1, 6 };
	std::cout << "����������� ������: \n";
	show_arr(arr, size);

	std::cout << "�������� = " << max_arr(arr, size) << '\n';
	std::cout << "�������� ��������....\n�������� ������: \n";
	max_arr(arr, size) = 0;
	show_arr(arr, size);


	//����������� ���������
	
	//������ ������
	//int *pn = 0;

	//int* pn = NULL; // ������ ������

	int* pn = nullptr;//������ ������


	if (pn == nullptr)
		std::cout << "��������� �����������������\n";
	else 
		std::cout << *pn << "\n";

	int a = 10, b = 20, c = 30;

	//������ ��� ��������� �������
	
	//my_swap(n, m); //������, �� �� ��������
	//pswap(&n, &m); // �������� �� �� ������

	refswap(n, m);
	std::cout << n << ' ' << m << '\n';


	//��������� �� ���������. ��������� ������������� ������ �������� �������� ����������, �� ������� ���������

	int const* pa;
	pa = &b;
	std::cout << *pa << '\n';

	
	//����������� ���������
	/*const int* pb;
	pb = &b;
	std::cout << *pb << '\n';
	pb = &c;
	std::cout << *pb << '\n';
	*pb = 35; // ������*/

	//����������� ��������� �� ���������. ������ ������ �������� ����������, � ����� ������ �������������� ���������
	const int* const pc = &c;
	std::cout << *pc << '\n';
	pc = &a; // ������
	*pc = 50; //������



	//������ �� ����������

	int& refn = n; // �������� ������, ��������� � ���������� n
	std::cout << "n = " << n << '\n';
	std::cout << "refn = " << refn << '\n';

	refn = 15;

	std::cout << "����� n = " << n << '\n';






	



	















	return 0;
}