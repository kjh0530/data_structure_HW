#include <stdio.h>
int main()
{
    printf("[----- ������  2020039027 -----]\n\n"); //�̸�, �й� ���
    int i; /* int�� ���� i ���� */
    int *ptr; /* int�� ������ ����Ű�� ������ ���� ptr ���� */
    int **dptr; /* int�� ������ ����Ű�� ������ ������ ����Ű�� ���� ������ ���� dptr ���� */
    i = 1234; /* ���� i�� 1234 �� �Ҵ� */
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); /* int�� ���� i�� �� ��� */
    printf("address of i == %p\n", &i); /* int�� ���� i�� �ּҰ� ��� */
    printf("value of ptr == %p\n", ptr); /* ������ ���� ptr�� �� ��� */
    printf("address of ptr == %p\n", &ptr); /* ������ ���� ptr�� �ּҰ� ��� */
    /* ������ ���� ptr�� �ּҰ��� �����ϴ� �����̹Ƿ�
     �ּҰ�(���� �ʱ�ȭ�� �ȵ����Ƿ� �����Ⱚ) ��� */ 

    ptr = &i; /* ������ ���� ptr�� i�� �ּҰ� �Ҵ� */
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i); /* i�� �� ��� */
    printf("address of i == %p\n", &i); /* i�� �ּҰ� ��� */
    printf("value of ptr == %p\n", ptr); /* ptr�� �� ��� */
    printf("address of ptr == %p\n", &ptr); /* ptr�� �ּҰ� ��� */
    printf("value of *ptr == %d\n", *ptr); /* ptr�� ����Ű�� �ִ� ������ �� ��� */
    /* ptr�� i�� �ּҰ��� �Ҵ� �����Ƿ� ptr�� ���� &i�� ���� ����.
     �׸��� ptr�� �����̹Ƿ� ptr�� �ּҰ��� ������ �ʴ´�. */

    dptr = &ptr; /* ���� ������ ���� dptr�� ptr�� �ּҰ� �Ҵ� */
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); /* i�� �� ��� */
    printf("address of i == %p\n", &i); /* i�� �ּҰ� ��� */
    printf("value of ptr == %p\n", ptr); /* ptr�� �� ��� */
    printf("address of ptr == %p\n", &ptr); /* ptr�� �ּҰ� ��� */
    printf("value of *ptr == %d\n", *ptr); /* ptr�� ����Ű�� �ִ� ������ �� ��� */
    printf("value of dptr == %p\n", dptr); /* dptr�� �� ��� */
    printf("address of dptr == %p\n", &dptr); /* dptr�� �ּҰ� ��� */
    printf("value of *dptr == %p\n", *dptr); /* dptr�� ����Ű�� �ִ� ������ �� ��� (ptr�� ���� ��µȴ�.) */
    printf("value of **dptr == %d\n", **dptr); /* dptr�� ����Ű�� �ִ� ������ ����Ű�� �ִ� ������ �� ��� 
                                                 (ptr�� ����Ű�� �ִ� ������ i�� ���� ��µȴ�.) */
    /* dptr�� ptr�� �ּҰ��� �Ҵ� �����Ƿ� dptr�� ���� &ptr�� ���� ����.
    dptr�� �����̹Ƿ� dptr�� �ּҰ��� ������ �ʴ´�. */

    *ptr = 7777; /* ptr�� ����Ű�� �ִ� ���� i�� 7777�̶�� ���� �Ҵ��Ѵ�. */
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); /* i�� �� ��� (7777�� ��µȴ�.) */
    printf("value of *ptr == %d\n", *ptr); /* ptr�� ����Ű�� �ִ� ���� i�� �� ��� 
                                            (i�� ���� 7777�� ��µȴ�.) */
    printf("value of **dptr == %d\n", **dptr); 
    /* dptr�� ����Ű�� �ִ� ������ ����Ű�� �ִ� ���� i�� �� ���
      (dptr�� ����Ű�� �ִ� ������ ptr�̰� ptr�� ����Ű�� �ִ� 
      ������ i�̹Ƿ� i�� ���� ��µȴ�.) */

    **dptr = 8888; /* dptr�� ����Ű�� �ִ� ������ ����Ű�� �ִ� ������
                     8888�̶�� ���� �Ҵ��Ѵ�. */
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); /* i�� �� ��� (8888�� ��µȴ�.) */
    printf("value of *ptr == %d\n", *ptr); /* ptr�� ����Ű�� �ִ� ���� i�� �� ���
                                            (8888�� ��µȴ�.) */
    printf("value of **dptr == %d\n", **dptr); 
    /* dptr�� ����Ű�� �ִ� ���� ptr�� ����Ű�� �ִ�
     ���� i�� �� ��� (8888�� ��µȴ�.) */

    return 0;
}