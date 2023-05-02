#include "CPPL7_2_2.h"

// ������ �������� (�����������: ���������� ���������������� ������� input_vector)
void input_vector(std::vector<int>&);

// ������������� ������ (�����������: ���������� ��������� ������� print_vector ���, ����� ���������� �������� �������)
void print_vector(std::vector<int>&);

// ������ 2*. �������� ������
void CPPL7_2_2()
{
	std::vector<int> v(5;); // �������������� ������ (�����������: ���������� ������� ; � �������)
	//std::vector<int> v(5); // ����������� �������������� ������
	input_vector(v);
	print_vector(v);
}

void print_vector(std::vector<int>& v) {
	for (int& vi : v) {
		vi *= 2;
	}

	// ����������� ������������� ������
	//for (const int& vi : v) {
	//	std::cout << vi;
	//}
}

// ����������� ������ ��������
//void input_vector(std::vector<int>& v) {
//	for (int i = 0; i < v.size(); i++) {
//		std::cin >> v[i];
//	}
//}
