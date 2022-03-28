#include <stdio.h>
#define MAX_SIZE 100
float sum(float [], int); //함수 원형 선언
float input[MAX_SIZE], answer; /* 원소의 개수가 MAX_SIZE개인 
                                  float형 배열 input과 float형
                                  변수 answer 선언 */
int i; //int형 전역변수 i 선언 
void main(void)
{
    printf("[----- 김주훈  2020039027 -----]\n\n"); //이름, 학번 출력

    for(i=0; i < MAX_SIZE; i++) //밑의 문장을 MAX_SIZE번 반복
        input[i] = i;
    /* input 배열의 0 ~ MAX_SIZE-1원소에 
       0 ~ MAX_SIZE-1의 숫자를 할당 */
    /* for checking call by reference */
    printf("address of input = %p\n", input); //배열의 주소 출력
    answer = sum(input, MAX_SIZE); /* sum함수의 매개변수에 배열의 주소와
                                      배열의 원소의 개수를 넣고 리턴값을 
                                      answer에 할당 */
    printf("The sum is: %f\n", answer); //answer에 할당된 값 출력
}
float sum(float list[], int n) /* 매개변수에 float형 배열의 주소와 int형 변수를
                                  할당받고, float형 리턴값을 가지는 함수 sum 선언 */
{
    printf("value of list = %p\n", list); /* list에는 float형 배열의 주소를 할당
                                             받았으므로 할당받은 float형 배열의
                                             주소를 출력 */
    printf("address of list = %p\n\n", &list); /* list는 함수 sum의 지역변수이므로  
                                                  list의 주소는 할당받은 주소와 다르다. */
    int i; //int형 변수 i 선언
    float tempsum = 0; // float형 변수 tempsum 선언 및 0으로 초기화
    for(i = 0; i < n; i++) //n번 반복
    tempsum += list[i]; //tempsum에 list[i]를 더한 값을 tempsum에 할당
    return tempsum; //tempsum을 리턴

    /* github repository 주소
       https://github.com/kjh0530/data_structure_HW.git 
       이 repostory의 HW#3 commit이 HW#3 과제 입니다. */
}