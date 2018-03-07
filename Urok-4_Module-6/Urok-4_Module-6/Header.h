#pragma once

enum Arrange { increase, decrease };

double hypotenuse(double *x, double *y); // ������� 1
double distance(double *x1, double *y1, double *x2, double *y2); // ������� 2 
int overloadFuntcion(int x); // ������� 3
int overloadFuntcion(int x, int y); // ������� 3
float overloadFuntcion(float x); // ������� 3
float overloadFuntcion(float x, float y); // ������� 3
void swap(int *a, int *b); // ������� 4
void swap(int &a, int &b); // ������� 5
int gcd(int x, int y); // ������� 6
void extremumNumbers(int *arr, int len); // ������� 7
void arr(int *arr, int len, Arrange dir); // ������� 8
void evenness(int *arr, int len); // ������� 9

void fillArrayInteger(int * mas, int len, int *min, int *max);
void printArray(int * mas, int len);
void arrangeArray(int *arr, int len, Arrange dir);
