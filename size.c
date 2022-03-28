#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- 김주훈  2020039027 -----]\n\n"); //이름, 학번 출력
    int **x; //이중 포인터 변수 x를 선언
    printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //x가 가리키고 있는 값의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); /* x가 가리키고 있는 값이 가리키는 
                                                   값의 크기 출력 */
}
/* github repository 주소
   https://github.com/kjh0530/data_structure_HW.git 
   이 repostory의 HW#3 commit이 HW#3 과제 입니다. */