#pragma once
#ifndef __��������4_1_H__
#define __��������4_1_H__

class Rectangle {
public:
	Rectangle(int, int);
	int GetArea();//����
	int GetGirth();//�ѷ�
private:
	int x;
	int y;
};

class Circle {
public:
	Circle(long);
	double GetArea();//����
	double GetGirth();//�ѷ�
private:
	double r;
};

#endif
