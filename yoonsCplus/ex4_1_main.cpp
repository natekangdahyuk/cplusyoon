#include <iostream>

#include "ex4_1.hpp"

//직사각형을 나타내는 Rectangle 클래스와 원을 나타내는 Circle 클래스를 디자인 해 보자.
//이 클래스는 넓이를 구하는기능과 둘레를 구하는 기능을 지녀야 한다.
//다음에 제공되는 main함수와 출력 결과를 통해서 요구되는 Rectangle 클래스와 Circle 클래스를 디자인 해 보자.
void main() {
	Rectangle rec(3, 4);

	std::cout << "면적 : " << rec.GetArea() << std::endl;
	std::cout << "둘레 : " << rec.GetGirth() << std::endl;

	Circle cir(5);

	std::cout << "면적 : " << cir.GetArea() << std::endl;
	std::cout << "둘레 : " << cir.GetGirth() << std::endl;

}
