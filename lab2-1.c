#include <stdio.h>
int main()
{
    printf("[----- ������  2020039027 -----]\n\n"); //�̸�, �й� ���
    char charType; //char�� ���� ����
    int integerType; //int�� ���� ����
    float floatType; //float�� ���� ����
    double doubleType; //double�� ���� ����

    printf("Size of char: %ld byte\n",sizeof(charType)); /*char�� ������ �޸� ũ�� ���(1)*/
    printf("Size of int: %ld bytes\n",sizeof(integerType)); /*int�� ������ �޸� ũ�� ���(4)*/
    printf("Size of float: %ld bytes\n",sizeof(floatType)); /*float�� ������ �޸� ũ�� ���(4)*/
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); /*double�� ������ �޸� ũ�� ���(8)*/
    /*���� 4���� ��� ��� �� ������ ������ Ÿ���� �޸� ũ��(byte)�� ����Ѵ�.*/
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); /*char���� �޸� ũ�� ���(1)*/
    printf("Size of int: %ld bytes\n",sizeof(int)); /*int���� �޸� ũ�� ���(4)*/
    printf("Size of float: %ld bytes\n",sizeof(float)); /*float���� �޸� ũ�� ���(4)*/
    printf("Size of double: %ld bytes\n",sizeof(double)); /*double���� �޸� ũ�� ���(8)*/
    /*���� 4���� ��� ��� �� ������ Ÿ���� �޸� ũ��(byte)�� ����Ѵ�.*/
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); /*char�� ������ ����Ű�� ������ ������ �޸� ũ�� ���(8)*/
    printf("Size of int*: %ld bytes\n",sizeof(int*)); /*int�� ������ ����Ű�� ������ ������ �޸� ũ�� ���(8)*/
    printf("Size of float*: %ld bytes\n",sizeof(float*)); /*float�� ������ ����Ű�� ������ ������ �޸� ũ�� ���(8)*/
    printf("Size of double*: %ld bytes\n",sizeof(double*)); /*double�� ������ ����Ű�� ������ ������ �޸� ũ�� ���(8)*/
    /*���� 4���� ��� ��� �� ������ Ÿ���� ����Ű�� �ִ� ������ ������ �޸� ũ��(byte)�� ����Ѵ�.
    ������ ������ �ּҰ��� ������ �����Ƿ� �޸��� ũ�Ⱑ 32bit ��ǻ�Ϳ����� 4byte, 64bit ��ǻ�Ϳ����� 8byte�̴�.
    �׷��Ƿ� ���� 4���� ����� ��� 64bit ���E�Ϳ��� ������ ������ �޸� ũ���� 8byte�̴�.*/
    return 0;
}