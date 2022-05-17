#ifndef OVERLOAD_H
#define OVERLOAD_H
#include <iostream>

using namespace std;
void puz(double*, int);
void puz(int*, int);
double* create(double*, int);
void full(double*, int);
void print(double*, int);
int* create(int* mas, int size);
void full(int* mas, int size);
void print(int* mas, int size);
#endif