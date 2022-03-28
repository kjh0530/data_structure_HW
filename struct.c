#include <stdio.h>

struct student1 { /*char��, int��, char�� ������ �ִ� 
                    student1 ����ü ���� 
                    ����ü�� typedef���� �������� �ʾ����Ƿ�
                    �ش� ����ü�� ������ �� �տ� struct��� 
                    �ٿ��� ����ü�� ���� �˷��־�� �Ѵ�.*/
    char lastName;
    int studentId;
    char grade;
};
typedef struct { /*char��, int��, char�� ������ �ִ� 
                   student2 ����ü ���� 
                   ����ü�� typedef���� ���������Ƿ�
                   �ش� ����ü�� ������ �� �տ� struct��� 
                   ������ �ʾƵ� �ȴ�.(����� ���� data type) */
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    printf("[----- ������  2020039027 -----]\n\n"); //�̸�, �й� ���
    struct student1 st1 = {'A', 100, 'A'}; /* student1 ����ü st1 ���� �� �ʱ�ȭ 
                                              student1 ����ü�� ������ �� typedef����
                                              �������� �ʾ����Ƿ� �ش� ����ü�� ������ ��
                                              struct�� �տ� �ٿ��� �����ؾ� �Ѵ�.*/
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);
    /* �ش� ����ü�� ������� ��� */

    student2 st2 = {'B', 200, 'B'}; /* student2 ����ü st2 ���� �� �ʱ�ȭ 
                                       student2 ����ü�� ������ �� typedef����
                                       ���������Ƿ� �ش� ����ü�� ������ �� 
                                       �տ� struct�� ������ �ʾƵ� �ȴ�.
                                       (�ϳ��� data typeó�� ����) */
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
    /* �ش� ����ü�� ������� ��� */

    student2 st3; // student2 ����ü st3 ����
    st3 = st2; /* ����ü st3�� st2�� �Ҵ��Ѵ�.
                  ���� ���׷��̵�� �����Ϸ�������
                  ���� ����ü�� ����ü�� �Ҵ��� �� �ִ�.
                  (��� ��������� ���� �Ҵ�ȴ�) */
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    /* �ش� ����ü�� ������� ��� */

    /* equality test */
    /* if(st3 == st2) //gcc�����Ϸ��δ� ����ü������ �񱳸� �� �� ����.
    printf("equal\n"); //�׷��Ƿ� �� ������ ������ ������ ����.
    else
    printf("not equal\n"); */
    return 0;
}
/* github repository �ּ�
   https://github.com/kjh0530/data_structure_HW.git 
   �� repostory�� HW#3 commit�� HW#3 ���� �Դϴ�. */