#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};
/* ����ü student ����
   ��� ������ char�� ���ڿ�, int�� ����, 
   short�� ������ ���� ���� */

int main()
{
    printf("[----- ������  2020039027 -----]\n\n"); //�̸�, �й� ���
    struct student pst; /* ������ ������ ����ü student�� pst ����
                           typedef�� ������ Ÿ������ �������� �ʾұ�
                           ������ �տ� struct�� �ٿ��� �Ѵ�. */
    printf("size of student = %ld\n", sizeof(struct student)); 
    /* ����ü student�� �޸� ũ�� ��� 
       ũ�Ⱑ 13�� char�� ���ڿ���
       int�� ���� �ϳ�, short�� ���� �ϳ���
       �����Ƿ� student�� �������� ũ��� 19���� �Ѵ�.
       ������ ��µ� ����� 24�̴�. ����ü�� padding 
       ������ �Ͼ�� ���̴�.*/
    printf("size of int = %ld\n", sizeof(int)); //int�� ũ�� ���(4byte)
    printf("size of short = %ld\n", sizeof(short)); //short�� ũ�� ���(2byte)
    return 0;
}
/* github repository �ּ�
   https://github.com/kjh0530/data_structure_HW.git 
   �� repostory�� HW#3 commit�� HW#3 ���� �Դϴ�. */