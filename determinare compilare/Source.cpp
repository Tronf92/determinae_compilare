#ifdef __cplusplus
#include <iostream>
#else
#include <stdio.h>
#endif

using namespace std;

void main(void){
#ifdef __cplusplus
	cout << "Compilare C++";
#else
	printf("Compilare C\n");
#endif
	system("pause");
}