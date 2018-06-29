#pragma once
#ifndef __연습문제4_1_H__
#define __연습문제4_1_H__

class Rectangle {
public:
	Rectangle(int, int);
	int GetArea();//면적
	int GetGirth();//둘레
private:
	int x;
	int y;
};

class Circle {
public:
	Circle(long);
	double GetArea();//면적
	double GetGirth();//둘레
private:
	double r;
};

#endif
