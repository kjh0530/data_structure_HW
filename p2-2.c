#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
    printf("[----- ������  2020039027 -----]\n\n"); //�̸�, �й� ���
    int one[] = {0, 1, 2, 3, 4}; /* ������ ������ 5�� int�� �迭
                                    one ���� �� �ʱ�ȭ */
    printf("one = %p\n", one); //�迭 one�� ù ��° �ּ� ���
    printf("&one = %p\n", &one); //�迭 one�� ù ��° �ּ� ��� 
    printf("&one[0] = %p\n", &one[0]); //�迭 one�� ù ��° ������ �ּ� ���
    //���� 3���� ��� ���� ��� ����.(�迭�� �̸��� ù ��° �ּ�)
    printf("\n");
    print1(&one[0], 5); /* print1 �Լ��� �Ű������� one�� ù ��° �ּҿ�,
                           �迭�� ������ ������ 5 �Ҵ� */
    return 0;
}
void print1 (int *ptr, int rows) /* �迭�� ���� �ּҿ� ������ ������
                                    �Ű� ������ �Ҵ� �޾Ƽ� �迭�� ���
                                    ���ҵ��� �ּҿ� ���� ����ϴ� �Լ� */
{/* print out a one-dimensional array using a pointer */
    int i; //int�� ���� i ����
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) //�迭 ������ ������ŭ �ݺ�
    printf("%p \t %5d\n", ptr + i, *(ptr + i));
    /* �迭�� ���� �ּҸ� �Ҵ� ���� ptr�� ptr�� 
       ����Ű�� ���� ���(�ݺ��� ������ �ּҰ� i��ŭ Ŀ��) */ 
    printf("\n");
}

/* github repository �ּ�
   https://github.com/kjh0530/data_structure_HW.git 
   �� repostory�� HW#3 commit�� HW#3 ���� �Դϴ�. */