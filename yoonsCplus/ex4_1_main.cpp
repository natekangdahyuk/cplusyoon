#include <iostream>

#include "ex4_1.hpp"

//���簢���� ��Ÿ���� Rectangle Ŭ������ ���� ��Ÿ���� Circle Ŭ������ ������ �� ����.
//�� Ŭ������ ���̸� ���ϴ±�ɰ� �ѷ��� ���ϴ� ����� ����� �Ѵ�.
//������ �����Ǵ� main�Լ��� ��� ����� ���ؼ� �䱸�Ǵ� Rectangle Ŭ������ Circle Ŭ������ ������ �� ����.
void main() {
	Rectangle rec(3, 4);

	std::cout << "���� : " << rec.GetArea() << std::endl;
	std::cout << "�ѷ� : " << rec.GetGirth() << std::endl;

	Circle cir(5);

	std::cout << "���� : " << cir.GetArea() << std::endl;
	std::cout << "�ѷ� : " << cir.GetGirth() << std::endl;

}
