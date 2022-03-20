#include <stdio.h>
int main()
{
    printf("[----- 김주훈  2020039027 -----]\n\n"); //이름, 학번 출력
    char charType; //char형 변수 선언
    int integerType; //int형 변수 선언
    float floatType; //float형 변수 선언
    double doubleType; //double형 변수 선언

    printf("Size of char: %ld byte\n",sizeof(charType)); /*char형 변수의 메모리 크기 출력(1)*/
    printf("Size of int: %ld bytes\n",sizeof(integerType)); /*int형 변수의 메모리 크기 출력(4)*/
    printf("Size of float: %ld bytes\n",sizeof(floatType)); /*float형 변수의 메모리 크기 출력(4)*/
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); /*double형 변수의 메모리 크기 출력(8)*/
    /*위의 4개의 출력 모두 각 변수의 데이터 타입의 메모리 크기(byte)를 출력한다.*/
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); /*char형의 메모리 크기 출력(1)*/
    printf("Size of int: %ld bytes\n",sizeof(int)); /*int형의 메모리 크기 출력(4)*/
    printf("Size of float: %ld bytes\n",sizeof(float)); /*float형의 메모리 크기 출력(4)*/
    printf("Size of double: %ld bytes\n",sizeof(double)); /*double형의 메모리 크기 출력(8)*/
    /*위의 4개의 출력 모두 각 데이터 타입의 메모리 크기(byte)를 출력한다.*/
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); /*char형 변수를 가리키는 포인터 변수의 메모리 크기 출력(8)*/
    printf("Size of int*: %ld bytes\n",sizeof(int*)); /*int형 변수를 가리키는 포인터 변수의 메모리 크기 출력(8)*/
    printf("Size of float*: %ld bytes\n",sizeof(float*)); /*float형 변수를 가리키는 포인터 변수의 메모리 크기 출력(8)*/
    printf("Size of double*: %ld bytes\n",sizeof(double*)); /*double형 변수를 가리키는 포인터 변수의 메모리 크기 출력(8)*/
    /*위의 4개의 출력 모두 각 데이터 타입을 가리키고 있는 포인터 변수의 메모리 크기(byte)를 출력한다.
    포인터 변수는 주소값을 가지고 있으므로 메모리의 크기가 32bit 컴퓨터에서는 4byte, 64bit 컴퓨터에서는 8byte이다.
    그러므로 위의 4개의 출력은 모두 64bit 컴픂터에서 포인터 변수의 메모리 크기인 8byte이다.*/
    return 0;
}