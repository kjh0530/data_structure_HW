#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- 김주훈  2020039027 -----]\n\n"); //이름, 학번 출력
    int list[5]; //원소의 개수가 5개인 int형 배열 선언
    int *plist[5]; /* 원소의 개수가 5개인 int형을 가리키는 
                      포인터 배열 선언 */
    list[0] = 10; // list의 첫 번째 원소에 10 할당
    list[1] = 11; // list의 두 번째 원소에 11 할당
    plist[0] = (int*)malloc(sizeof(int)); /* 메모리의 heap영역에 int형의 크기(4바이트)
                                             만큼의 메모리의 첫 번째 주소를 받는다.*/
    printf("list[0] \t= %d\n", list[0]); /* list의 첫 번째 원소의 값 출력 */
    printf("address of list \t= %p\n", list); /* list의 첫 번째 주소 출력
                                                 (배열의 이름은 첫 번째 주소) */
    printf("address of list[0] \t= %p\n", &list[0]); /* list의 첫 번째 원소의 
                                                        주소 출력 (list와 같은 주소) */
    printf("address of list + 0 \t= %p\n", list+0); /* int형 배열의 주소 연산에서는 int형의
                                                       크기(4바이트)만큼 연산한다.
                                                       그러므로 list+(0*4)는 list와 값이 같다. */
    printf("address of list + 1 \t= %p\n", list+1); /* 주소 연산이므로 list+(1*4)이다.
                                                       list에 4만큼 증가시킨 값이다. */
    printf("address of list + 2 \t= %p\n", list+2); /* 주소 연산이므로 list+(2*4)이다.
                                                       list에 8만큼 증가시킨 값이다. */
    printf("address of list + 3 \t= %p\n", list+3); /* 주소 연산이므로 list+(3*4)이다.
                                                       list에 12만큼 증가시킨 값이다. */
    printf("address of list + 4 \t= %p\n", list+4); /* 주소 연산이므로 list+(4*4)이다.
                                                       list에 16만큼 증가시킨 값이다. */
    printf("address of list[4] \t= %p\n", &list[4]); /* list의 다섯 번째 원소의 주소이므로
                                                        list+4와 같다. */
    free(plist[0]); /* plist의 동적메모리 할당을 해제한다. */

    /* github repository 주소
       https://github.com/kjh0530/data_structure_HW.git 
       이 repostory의 HW#3 commit이 HW#3 과제 입니다. */
}