#include <stdio.h>
int main()
{
    printf("[----- 김주훈  2020039027 -----]\n\n"); //이름, 학번 출력
    int i; /* int형 변수 i 선언 */
    int *ptr; /* int형 변수를 가리키는 포인터 변수 ptr 선언 */
    int **dptr; /* int형 변수를 가리키는 포인터 변수를 가리키는 이중 포인터 변수 dptr 선언 */
    i = 1234; /* 변수 i에 1234 값 할당 */
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i); /* int형 변수 i의 값 출력 */
    printf("address of i == %p\n", &i); /* int형 변수 i의 주소값 출력 */
    printf("value of ptr == %p\n", ptr); /* 포인터 변수 ptr의 값 출력 */
    printf("address of ptr == %p\n", &ptr); /* 포인터 변수 ptr의 주소값 출력 */
    /* 포인터 변수 ptr은 주소값을 저장하는 변수이므로
     주소값(아직 초기화가 안됐으므로 쓰레기값) 출력 */ 

    ptr = &i; /* 포인터 변수 ptr에 i의 주소값 할당 */
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i); /* i의 값 출력 */
    printf("address of i == %p\n", &i); /* i의 주소값 출력 */
    printf("value of ptr == %p\n", ptr); /* ptr의 값 출력 */
    printf("address of ptr == %p\n", &ptr); /* ptr의 주소값 출력 */
    printf("value of *ptr == %d\n", *ptr); /* ptr이 가리키고 있는 변수의 값 출력 */
    /* ptr에 i의 주소값을 할당 했으므로 ptr의 값과 &i의 값은 같다.
     그리고 ptr도 변수이므로 ptr의 주소값은 변하지 않는다. */

    dptr = &ptr; /* 이중 포인터 변수 dptr에 ptr의 주소값 할당 */
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i); /* i의 값 출력 */
    printf("address of i == %p\n", &i); /* i의 주소값 출력 */
    printf("value of ptr == %p\n", ptr); /* ptr의 값 출력 */
    printf("address of ptr == %p\n", &ptr); /* ptr의 주소값 출력 */
    printf("value of *ptr == %d\n", *ptr); /* ptr이 가리키고 있는 변수의 값 출력 */
    printf("value of dptr == %p\n", dptr); /* dptr의 값 출력 */
    printf("address of dptr == %p\n", &dptr); /* dptr의 주소값 출력 */
    printf("value of *dptr == %p\n", *dptr); /* dptr이 가리키고 있는 변수의 값 출력 (ptr의 값이 출력된다.) */
    printf("value of **dptr == %d\n", **dptr); /* dptr이 가리키고 있는 변수가 가리키고 있는 변수의 값 출력 
                                                 (ptr이 가리키고 있는 변수인 i의 값이 출력된다.) */
    /* dptr에 ptr의 주소값을 할당 했으므로 dptr의 값과 &ptr의 값은 같다.
    dptr도 변수이므로 dptr의 주소값은 변하지 않는다. */

    *ptr = 7777; /* ptr이 가리키고 있는 변수 i에 7777이라는 값을 할당한다. */
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i); /* i의 값 출력 (7777이 출력된다.) */
    printf("value of *ptr == %d\n", *ptr); /* ptr이 가리키고 있는 변수 i의 값 출력 
                                            (i의 값인 7777이 출력된다.) */
    printf("value of **dptr == %d\n", **dptr); 
    /* dptr이 가리키고 있는 변수가 가리키고 있는 변수 i의 값 출력
      (dptr이 가리키고 있는 변수는 ptr이고 ptr이 가리키고 있는 
      변수는 i이므로 i의 값이 출력된다.) */

    **dptr = 8888; /* dptr이 가리키고 있는 변수가 가리키고 있는 변수에
                     8888이라는 값을 할당한다. */
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); /* i의 값 출력 (8888이 출력된다.) */
    printf("value of *ptr == %d\n", *ptr); /* ptr이 가리키고 있는 변수 i의 값 출력
                                            (8888이 출력된다.) */
    printf("value of **dptr == %d\n", **dptr); 
    /* dptr이 가리키고 있는 변수 ptr이 가리키고 있는
     변수 i의 값 출력 (8888이 출력된다.) */

    return 0;
}