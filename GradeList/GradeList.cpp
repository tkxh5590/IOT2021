#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include "GradeListF.h"
#include "GradeListLib.cpp"

using namespace std;

class Person
{
private:
	string name;
	int age;
	int rank;

public:
	string name_G() { return name; };
	int age_G() { return age; };
	int rank_G() { return rank; };
};

class Student : public Person
{
private:
	int  kor, eng;
public:
	Student(int kor = 0, int eng = 0, string name = "", int age = 0)// : Person(name, age, rank)
	{
		this->kor = kor;
		this->eng = eng;
	}
	int K_G() { return kor; };
	int E_G() { return eng; };
	double Sum_G()
	{
		return this->E_G() + this->K_G();
	}
	double cen()
	{
		return Sum_G() / 2;
	}
};

int main()
{
	Student stu[10];
	char str_in;

	FILE* InF = fopen("C:\\Users\\Kim\\Desktop\\input", "r");
	FILE* OuF = fopen("C:\\Users\\Kim\\Desktop\\output", "r");

	for (int i = 0; i < 30; i++)
	{
		if (i < 10)
		{
			fscanf(InF, "%s", str_in);
			//stu[10].name(str_in);
		}
		else if (i >= 10 && i < 20)
		{
			//fprintf(fout, "\n");
			fscanf(InF, "%d", stu[i - 10].K_G());
		}
		else if (i >= 20 && i < 30)
		{
			//fprintf(fout, "\n");
			fscanf(InF, "%d", stu[i - 20].E_G());
		}
	}
}
