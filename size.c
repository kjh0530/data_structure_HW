#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- ������  2020039027 -----]\n\n"); //�̸�, �й� ���
    int **x; //���� ������ ���� x�� ����
    printf("sizeof(x) = %lu\n", sizeof(x)); //x�� ũ�� ���
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //x�� ����Ű�� �ִ� ���� ũ�� ���
    printf("sizeof(**x) = %lu\n", sizeof(**x)); /* x�� ����Ű�� �ִ� ���� ����Ű�� 
                                                   ���� ũ�� ��� */
}
/* github repository �ּ�
   https://github.com/kjh0530/data_structure_HW.git 
   �� repostory�� HW#3 commit�� HW#3 ���� �Դϴ�. */