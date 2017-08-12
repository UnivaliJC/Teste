// jonathan.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char a='a', b='b', c='c', d='d', e='e', f='f', g='g', h='h', i='i';
	cout << a << " | " << b << " | " << c << endl << d << " | " << e << " | " << f << endl << g << " | " << h<<" | "<<i<<endl;
	cout << "Digite a posição que deseja jogar: ";
	return 0;
}

