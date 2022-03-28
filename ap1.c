#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- 김주훈  2020039027 -----]\n\n"); //이름, 학번 출력
    int list[5]; //int형 배열 선언(원소의 개수 5)
    int *plist[5] = {NULL,}; /* int형을 가리키는 포인터 배열 선언 및 초기화
                                (원소의 개수 5) */
    plist[0] = (int *)malloc(sizeof(int)); /* malloc함수로 int의 크기(4바이트)만큼 동적 메모리를 
                                              만들고 그 주소를 plist의 첫 번째 원소에 할당 */
    list[0] = 1; //list의 첫 번째 원소에 1 할당
    list[1] = 100; //list의 두 번째 원소에 100 할당
    *plist[0] = 200; //plist의 첫 번째 원소가 가리키는 값에 200 할당

    printf("value of list[0] = %d\n", list[0]); //list의 첫 번째 원소의 값 출력
    printf("address of list[0] = %p\n", &list[0]); //list의 첫 번째 원소의 주소 출력
    printf("value of list = %p\n", list); /* list의 값 출력
                                            (배열의 이름은 배열의 첫 번째 주소를 값으로 갖는다.) */
    printf("address of list (&list) = %p\n", &list); //list의 주소 출력(배열의 첫 번째 주소)
    printf("----------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]); //list의 두 번째 원소의 값 출력(100 출력)
    printf("address of list[1] = %p\n", &list[1]); /* list의 두 번째 원소의 주소 출력
                                                      list는 int형 배열이므로 주소 하나의 차이마다
                                                      4바이트의 크기를 갖는다.
                                                      (list[0]의 주소보다 4바이트 크다.) */
    printf("value of *(list+1) = %d\n", *(list + 1)); /* list 배열의 첫 번째 주소에 4바이트 더한 주소의
                                                         값을 출력(list[1]과 같은 뜻이다.) 
                                                         100을 출력 */
    printf("address of list+1 = %p\n", list+1); /* list+1의 주소 출력
                                                   (list의 주소보다 4바이트 크다.) */
    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]); /* plist의 첫 번째 원소가 가리키는 값 출력
                                                       해당하는 주소의 값인 200 출력
                                                       (plist는 포인터 배열이므로 원소의 값이 모두 주소이다.) */
    printf("&plist[0] = %p\n", &plist[0]); /* plist의 첫 번째 원소의 주소 출력 */
    printf("&plist = %p\n", &plist); /* plist의 첫 번째 주소 출력
                                        (첫 번째 원소의 주소와 같음) */
    printf("plist = %p\n", plist); /* plist의 첫 번째 주소 출력
                                      (첫 번째 원소의 주소와 같음) */
    printf("plist[0] = %p\n", plist[0]); /* plist의 첫 번째 값 출력 
                                            heap영역에서 동적 메모리가 할당 되었으므로 
                                            해당 메모리의 주소가 출력된다. */
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    /* plist는 선언과 동시에 모든 원소의 값을 NULL로 초기화 했으므로 모두 NULL 값을 출력
       첫 번째 원소는 malloc함수로 동적메모리를 할당했으므로 해당 메모리의 주소 값을 갖는다. */
    free(plist[0]); //동적 메모리 할당을 해제한다.
    
    /* github repository 주소
       https://github.com/kjh0530/data_structure_HW.git 
       이 repostory의 HW#3 commit이 HW#3 과제 입니다. */
}