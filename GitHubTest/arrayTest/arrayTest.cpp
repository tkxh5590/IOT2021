#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <iostream>


void array5T(int arr1[], int arr2[], const char* arr_n[])
{
	int i, j, k = 0;
	//int arr1[50] = { 45,75,80,40,60,20,90,95,30 };
	int arr_2[50];
	float arr3[50];
	float arr5[7];
	float arr6[7];
	float arr7[7];
	const char *arr4[7];
	for (i = 0; i < 7; i++)
	{
		arr5[i] = (arr1[i] * 0.3) + (arr2[i] * 0.7);
	}
	for (j = 0; j < 7; j++)
	{
		if (arr5[j] == NULL)
		{
			break;
		}
		for (i = 0; i < 7; i++)
		{
			if (arr5[i] == NULL)
			{
				break;
			}
			if (arr5[i] > arr5[j])
			{
				k++;
			}
		}
		arr_2[j] = k;
		k = 0;
	}
	for (j = 0; j < 7; j++)
	{
		if (arr5[j] == NULL)
		{
			break;
		}
		arr3[arr_2[j]] = arr5[j];
		arr6[arr_2[j]] = arr1[j];
		arr7[arr_2[j]] = arr2[j];
		arr4[arr_2[j]] = arr_n[j];
	}
	for (j = 0; j < 7; j++)
	{
		if (arr1[j] == NULL)
		{
			break;
		}
		printf("%d등 : %s  %2.f    %2.f   %.2f\n", (j + 1), arr4[j], arr6[j], arr7[j], arr3[j]);
	}
	printf("");
}

struct student
{
	int kor; //{ 82,93,71,69,78,84,75,45,22,74 };
	int eng; //{ 76,91,67,73,86,63,83,99,21,33 };
	char name[10];
};
struct student std_Iot[10];

void array6T()
{
	const char* arr_c[] = { "name1","name2","name3","name4","name5","name6","name7","name8","name9","name10"};
	int arr_k[10] = { 82,93,71,69,78,84,75,33,57,34 };
	int arr_e[10] = { 76,91,67,73,86,63,83,71,45,92 };
	for (int a = 0; a < 10; a++)
	{
		strcpy(std_Iot[a].name, arr_c[a]);
		std_Iot[a].eng=arr_k[a];
		std_Iot[a].kor=arr_e[a];
	}
	printf("순위  이름  국어  영어  합계 \n");
	//array5T(std_Iot.kor, std_Iot.eng, std_Iot.name);
}

void VoidPrint(void* p, int i)
{
	if (i == 1)
	{
		char* pc= (char*)p;
		printf("%s\n", pc);
	}
	if (i == 2)
	{
		printf("%d\n", *(int*)p);
	}
	if (i == 3)
	{
		printf("%.3f\n", *(double*)p);
	}
}

void VoidTest()
{
	char c[10] = { 'z' };
	int a = 10;
	double n = 1.414;

	void* vp;
	VoidPrint(&c, 1);
	VoidPrint(&a, 2);
	VoidPrint(&n, 3);
}

typedef struct {
	int kor;
	int eng;
	char name[20];
}stu;
void streamTest()
{
	stu STU[10];
	char str_in[1024];


	FILE* fin = fopen("C:\\Users\\Kim\\Desktop\\aa", "r");
	FILE* fout = fopen("C:\\Users\\Kim\\Desktop\\aa1", "w+b");


	for (int i = 0; i < 30; i++)
	{
		if (i < 10)
		{
			fscanf(fin, "%s", str_in);
			strcpy(STU[i].name,str_in);
			printf("%6s ", STU[i].name);
			fprintf(fout, " %6s", STU[i].name);
		}
		else if (i >= 10 && i < 20)
		{
			if (i == 10)
			{
				printf("\n");
				fprintf(fout, "\n");
			}
			fscanf(fin, "%d", &STU[i-10].kor);
			printf("%6d ", STU[i - 10].kor);
			fprintf(fout, " %6d", STU[i - 10].kor);
		}
		else if (i >= 20 && i < 30)
		{
			if (i == 20) 
			{
				printf("\n");
				fprintf(fout, "\n");
			}
			fscanf(fin, "%d", &STU[i - 20].eng);
			printf("%6d ", STU[i - 20].eng);
			fprintf(fout, " %6d", STU[i - 20].eng);
		}
	}

	printf("\n  이름     국어   영어 \n");
	for (int i = 0; i < 10; i++)
	{
		printf("  %5s %6d %6d\n", STU[i].name, STU[i].kor, STU[i].eng);
	}
	/*for (int i = 0; i < 10; i++)
	{
		fscanf(fin, "%d", kor[i]);
		printf("%d ", kor[i]);
		fprintf(fout, " %d", kor[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		fscanf(fin, "%d", eng[i]);
		printf("%d ", eng[i]);
		fprintf(fout, " %d", eng[i]);
	}

	while (true) 
	{
		fgets(buf, sizeof(buf), stdin);
		if (strlen(buf) < 3);
		{
			break;
		}
		fputs("입력한 문자===========>", stdout);
		fputs(buf, stdout);
	}*/
}
#define KBD_BUF_SIZE 20
#define MAX(x,y) (x>y)?x:y
#define MIN(x,y) (x<y)?x:y

//int Getint()
//{
//
//}

void StringParse()
{
	while (true)
	{
		int k; 
		
		int num1, num2;
		float d_num1, d_num2;
		char b;
		printf("\n\n\n================\n"
			"    1.정수(int)\n"
			"    2.실수(double)\n"
			"    3.문자열(공백포함)\n"
			" ============================\n"
			" Select Menu ");

		scanf("%d", &k);

		if (k == 1)
		{
			char buf[KBD_BUF_SIZE];
			printf("정수를 입력하세요 : ");
			scanf("%s", buf);
			fgets(buf, KBD_BUF_SIZE, stdin);
			int n = atoi(buf);
			printf("반환된 정수 값 : %d \n", n);
		}
		else if (k == 2)
		{
			char buf[KBD_BUF_SIZE];
			printf("실수를 입력하세요 : ");
			scanf("%s", buf);
			fgets(buf, KBD_BUF_SIZE, stdin);
			double n = atof(buf);
			printf("반환된 정수 값 : %f\n", n);
		}
		else if (k == 6)
		{
			printf("두개의 정수를 입력하세요 : ");
			scanf("%d %d", &num1, &num2);
			printf("입력한 정수 %d와 %d중 큰 수는 %d 입니다\n", num1, num2, MAX(num1, num2));
			printf("두개의 실수를 입력하세요 : ");
			scanf("%f %f", &d_num1, &d_num2);
			printf("입력한 실수 %f와 %f중 작은 수는 %f 입니다\n", d_num1, d_num2, MIN(d_num1, d_num2));
		}
		else if (k == 0) { break; }
	}
}

int main()
{
	std::cout << "Hello C++ World!";
	/*printf("실행할 기능 \n1.VoidTest()\n2.array6T()\n3.streamTest()\n4.StringParse()\n5.종료\n");
	char aaa;
	while (1)
	{
		aaa = getch();
		if (aaa == '1')
		{
			VoidTest();
		}
		else if (aaa == '2')
		{
			array6T();
		}
		else if (aaa == '3')
		{
			streamTest();
		}
		else if (aaa == '4')
		{
			StringParse();
		}
		else if(aaa == '5')
		{
			break;
		}
	}*/

}
