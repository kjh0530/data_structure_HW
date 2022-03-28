#include <stdio.h>
void print1 (int *ptr, int rows);
int main()
{
    printf("[----- 김주훈  2020039027 -----]\n\n"); //이름, 학번 출력
    int one[] = {0, 1, 2, 3, 4}; /* 원소의 개수가 5인 int형 배열
                                    one 선언 및 초기화 */
    printf("one = %p\n", one); //배열 one의 첫 번째 주소 출력
    printf("&one = %p\n", &one); //배열 one의 첫 번째 주소 출력 
    printf("&one[0] = %p\n", &one[0]); //배열 one의 첫 번째 원소의 주소 출력
    //위의 3개의 출력 값은 모두 같다.(배열의 이름은 첫 번째 주소)
    printf("\n");
    print1(&one[0], 5); /* print1 함수의 매개변수에 one의 첫 번째 주소와,
                           배열의 원소의 개수인 5 할당 */
    return 0;
}
void print1 (int *ptr, int rows) /* 배열의 시작 주소와 원소의 개수를
                                    매개 변수에 할당 받아서 배열의 모든
                                    원소들의 주소와 값을 출력하는 함수 */
{/* print out a one-dimensional array using a pointer */
    int i; //int형 변수 i 선언
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) //배열 원소의 개수만큼 반복
    printf("%p \t %5d\n", ptr + i, *(ptr + i));
    /* 배열의 시작 주소를 할당 받은 ptr과 ptr이 
       가리키는 값을 출력(반복할 때마다 주소가 i만큼 커짐) */ 
    printf("\n");
}

/* github repository 주소
   https://github.com/kjh0530/data_structure_HW.git 
   이 repostory의 HW#3 commit이 HW#3 과제 입니다. */