#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- ������  2020039027 -----]\n\n"); //�̸�, �й� ���
    int list[5]; //int�� �迭 ����(������ ���� 5)
    int *plist[5] = {NULL,}; /* int���� ����Ű�� ������ �迭 ���� �� �ʱ�ȭ
                                (������ ���� 5) */
    plist[0] = (int *)malloc(sizeof(int)); /* malloc�Լ��� int�� ũ��(4����Ʈ)��ŭ ���� �޸𸮸� 
                                              ����� �� �ּҸ� plist�� ù ��° ���ҿ� �Ҵ� */
    list[0] = 1; //list�� ù ��° ���ҿ� 1 �Ҵ�
    list[1] = 100; //list�� �� ��° ���ҿ� 100 �Ҵ�
    *plist[0] = 200; //plist�� ù ��° ���Ұ� ����Ű�� ���� 200 �Ҵ�

    printf("value of list[0] = %d\n", list[0]); //list�� ù ��° ������ �� ���
    printf("address of list[0] = %p\n", &list[0]); //list�� ù ��° ������ �ּ� ���
    printf("value of list = %p\n", list); /* list�� �� ���
                                            (�迭�� �̸��� �迭�� ù ��° �ּҸ� ������ ���´�.) */
    printf("address of list (&list) = %p\n", &list); //list�� �ּ� ���(�迭�� ù ��° �ּ�)
    printf("----------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]); //list�� �� ��° ������ �� ���(100 ���)
    printf("address of list[1] = %p\n", &list[1]); /* list�� �� ��° ������ �ּ� ���
                                                      list�� int�� �迭�̹Ƿ� �ּ� �ϳ��� ���̸���
                                                      4����Ʈ�� ũ�⸦ ���´�.
                                                      (list[0]�� �ּҺ��� 4����Ʈ ũ��.) */
    printf("value of *(list+1) = %d\n", *(list + 1)); /* list �迭�� ù ��° �ּҿ� 4����Ʈ ���� �ּ���
                                                         ���� ���(list[1]�� ���� ���̴�.) 
                                                         100�� ��� */
    printf("address of list+1 = %p\n", list+1); /* list+1�� �ּ� ���
                                                   (list�� �ּҺ��� 4����Ʈ ũ��.) */
    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]); /* plist�� ù ��° ���Ұ� ����Ű�� �� ���
                                                       �ش��ϴ� �ּ��� ���� 200 ���
                                                       (plist�� ������ �迭�̹Ƿ� ������ ���� ��� �ּ��̴�.) */
    printf("&plist[0] = %p\n", &plist[0]); /* plist�� ù ��° ������ �ּ� ��� */
    printf("&plist = %p\n", &plist); /* plist�� ù ��° �ּ� ���
                                        (ù ��° ������ �ּҿ� ����) */
    printf("plist = %p\n", plist); /* plist�� ù ��° �ּ� ���
                                      (ù ��° ������ �ּҿ� ����) */
    printf("plist[0] = %p\n", plist[0]); /* plist�� ù ��° �� ��� 
                                            heap�������� ���� �޸𸮰� �Ҵ� �Ǿ����Ƿ� 
                                            �ش� �޸��� �ּҰ� ��µȴ�. */
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    /* plist�� ����� ���ÿ� ��� ������ ���� NULL�� �ʱ�ȭ �����Ƿ� ��� NULL ���� ���
       ù ��° ���Ҵ� malloc�Լ��� �����޸𸮸� �Ҵ������Ƿ� �ش� �޸��� �ּ� ���� ���´�. */
    free(plist[0]); //���� �޸� �Ҵ��� �����Ѵ�.
    
    /* github repository �ּ�
       https://github.com/kjh0530/data_structure_HW.git 
       �� repostory�� HW#3 commit�� HW#3 ���� �Դϴ�. */
}