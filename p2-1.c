#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int); //�Լ� ���� ����
float input[MAX_SIZE], answer; /* ������ ������ MAX_SIZE���� 
                                  float�� �迭 input�� float��
                                  ���� answer ���� */
int i; //int�� �������� i ���� 
void main(void)
{
    printf("[----- ������  2020039027 -----]\n\n"); //�̸�, �й� ���

    for(i=0; i < MAX_SIZE; i++) //���� ������ MAX_SIZE�� �ݺ�
        input[i] = i;
    /* input �迭�� 0 ~ MAX_SIZE-1���ҿ� 
       0 ~ MAX_SIZE-1�� ���ڸ� �Ҵ� */
    /* for checking call by reference */
    printf("address of input = %p\n", input); //�迭�� �ּ� ���
    answer = sum(input, MAX_SIZE); /* sum�Լ��� �Ű������� �迭�� �ּҿ�
                                      �迭�� ������ ������ �ְ� ���ϰ��� 
                                      answer�� �Ҵ� */
    printf("The sum is: %f\n", answer); //answer�� �Ҵ�� �� ���
}
float sum(float list[], int n) /* �Ű������� float�� �迭�� �ּҿ� int�� ������
                                  �Ҵ�ް�, float�� ���ϰ��� ������ �Լ� sum ���� */
{
    printf("value of list = %p\n", list); /* list���� float�� �迭�� �ּҸ� �Ҵ�
                                             �޾����Ƿ� �Ҵ���� float�� �迭��
                                             �ּҸ� ��� */
    printf("address of list = %p\n\n", &list); /* list�� �Լ� sum�� ���������̹Ƿ�  
                                                  list�� �ּҴ� �Ҵ���� �ּҿ� �ٸ���. */
    int i; //int�� ���� i ����
    float tempsum = 0; // float�� ���� tempsum ���� �� 0���� �ʱ�ȭ
    for(i = 0; i < n; i++) //n�� �ݺ�
    tempsum += list[i]; //tempsum�� list[i]�� ���� ���� tempsum�� �Ҵ�
    return tempsum; //tempsum�� ����

    /* github repository �ּ�
       https://github.com/kjh0530/data_structure_HW.git 
       �� repostory�� HW#3 commit�� HW#3 ���� �Դϴ�. */
}