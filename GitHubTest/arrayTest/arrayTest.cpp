#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <string.h>

//int arrayT()
//{
//	char str1[5] = "Good";
//	char str2[] = "morning";
//	char str3[] = "afternoon";
//	char str4[] = "evening";
//	time_t timer;
//	timer = time(NULL);
//	struct tm* t;
//	t = localtime(&timer);
//
//	if (t->tm_hour < 12 && t->tm_hour >= 6)
//	{
//		printf("%s %s\n", str1, str2);
//	}
//	else if (t->tm_hour < 18 && t->tm_hour >= 12)
//	{
//		printf("%s %s\n", str1, str3);
//	}
//	else if ((t->tm_hour < 24 && t->tm_hour >= 18) || (t->tm_hour < 6 && t->tm_hour >= 0))
//	{
//		printf("%s %s\n", str1, str4);
//	}
//
//	printf("현재 시간 - %d : %d \n", t->tm_hour, t->tm_min);
//	return 0;
//}
//
//int array2T()
//{
//	int arr1[3][2] = { 1,2,3,4,5,6 };
//
//	printf("%x\n", *arr1[0]);
//	printf("%x\n", *arr1[1]);
//	printf("%x\n", *arr1[2]);
//	printf("%x\n", arr1);
//	return 0;
//}
//
//int array3T()
//{
//	int i, j;
//	char c_get;
//	char arr1[100];
//
//	scanf("%s", arr1);
//	for (i = 0; i < 100; i++)
//	{
//		if (arr1[i] == NULL)
//		{
//			j = i;
//			i = 99;
//		}
//	}
//
//	for (i = 0; i < j; i++)
//	{
//		printf("%c ", arr1[i]);
//	}
//	for (;;)
//	{
//		c_get = getch();
//		if ((((int)c_get) - 48) < j && (((int)c_get) - 48) > 0)
//		{
//			printf("\n%c", arr1[(((int)c_get) - 48)]);
//		}
//		if ((((int)c_get) - 48) == 0)
//		{
//			break;
//		}
//	}
//	return 0;
//}
//
//int array4T()
//{
//	int i, j;
//	char arr1[100];
//
//	scanf("%s", arr1);
//	for (i = 0; i < 100; i++)
//	{
//		if (arr1[i] == NULL)
//		{
//			j = i;
//			printf("문자열의 길이 : %d", j);
//			break;
//		}
//	}
//	return 0;
//}

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
	int arr1[50] = { 45,75,80,40,60,20,90,95,30,22,31,55,14,32,79,38,65,47,94,34,63,82,19,44 };
	int arr2[50];
	printf("순위  이름  국어  영어  합계 \n");
	//array5T(std_Iot.kor, std_Iot.eng, std_Iot.name);
}

//void VoidPrint(void* p, int i)
//{
//	if (i == 1)
//	{
//		char* pc= (char*)p;
//		printf("%s\n", *pc);
//	}
//	if (i == 2)
//	{
//		printf("%d\n", *(int*)p);
//	}
//	if (i == 3)
//	{
//		printf("%.3f", *(double*)p);
//	}
//}
//
//void VoidTest()
//{
//	char c = 'z';
//	int a = 10;
//	double n = 1.414;
//
//	void* vp;
//	VoidPrint(&c, 1);
//	VoidPrint(&a, 2);
//	VoidPrint(&n, 3);
//}

void streamTest()
{
	char buf[1024];
	FILE* f = fopen("C:\\Users\\KOSTA\\Desktop\\aa","r");
	while (true) 
	{
		fgets(buf, sizeof(buf), stdin);
		if (strlen(buf) < 3);
		{
			break;
		}
		fputs("입력한 문자===========>", stdout);
		fputs(buf, stdout);
	}
}

int main()
{
	//VoidTest();
	//array6T();
	streamTest();
}
