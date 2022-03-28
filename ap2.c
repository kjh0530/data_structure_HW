#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- ������  2020039027 -----]\n\n"); //�̸�, �й� ���
    int list[5]; //������ ������ 5���� int�� �迭 ����
    int *plist[5]; /* ������ ������ 5���� int���� ����Ű�� 
                      ������ �迭 ���� */
    list[0] = 10; // list�� ù ��° ���ҿ� 10 �Ҵ�
    list[1] = 11; // list�� �� ��° ���ҿ� 11 �Ҵ�
    plist[0] = (int*)malloc(sizeof(int)); /* �޸��� heap������ int���� ũ��(4����Ʈ)
                                             ��ŭ�� �޸��� ù ��° �ּҸ� �޴´�.*/
    printf("list[0] \t= %d\n", list[0]); /* list�� ù ��° ������ �� ��� */
    printf("address of list \t= %p\n", list); /* list�� ù ��° �ּ� ���
                                                 (�迭�� �̸��� ù ��° �ּ�) */
    printf("address of list[0] \t= %p\n", &list[0]); /* list�� ù ��° ������ 
                                                        �ּ� ��� (list�� ���� �ּ�) */
    printf("address of list + 0 \t= %p\n", list+0); /* int�� �迭�� �ּ� ���꿡���� int����
                                                       ũ��(4����Ʈ)��ŭ �����Ѵ�.
                                                       �׷��Ƿ� list+(0*4)�� list�� ���� ����. */
    printf("address of list + 1 \t= %p\n", list+1); /* �ּ� �����̹Ƿ� list+(1*4)�̴�.
                                                       list�� 4��ŭ ������Ų ���̴�. */
    printf("address of list + 2 \t= %p\n", list+2); /* �ּ� �����̹Ƿ� list+(2*4)�̴�.
                                                       list�� 8��ŭ ������Ų ���̴�. */
    printf("address of list + 3 \t= %p\n", list+3); /* �ּ� �����̹Ƿ� list+(3*4)�̴�.
                                                       list�� 12��ŭ ������Ų ���̴�. */
    printf("address of list + 4 \t= %p\n", list+4); /* �ּ� �����̹Ƿ� list+(4*4)�̴�.
                                                       list�� 16��ŭ ������Ų ���̴�. */
    printf("address of list[4] \t= %p\n", &list[4]); /* list�� �ټ� ��° ������ �ּ��̹Ƿ�
                                                        list+4�� ����. */
    free(plist[0]); /* plist�� �����޸� �Ҵ��� �����Ѵ�. */

    /* github repository �ּ�
       https://github.com/kjh0530/data_structure_HW.git 
       �� repostory�� HW#3 commit�� HW#3 ���� �Դϴ�. */
}