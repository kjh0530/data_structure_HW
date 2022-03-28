#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};
/* 구조체 student 정의
   멤버 변수로 char형 문자열, int형 정수, 
   short형 범위가 작은 정수 */

int main()
{
    printf("[----- 김주훈  2020039027 -----]\n\n"); //이름, 학번 출력
    struct student pst; /* 위에서 정의한 구조체 student인 pst 선언
                           typedef로 데이터 타입으로 정의하지 않았기
                           때문에 앞에 struct를 붙여야 한다. */
    printf("size of student = %ld\n", sizeof(struct student)); 
    /* 구조체 student의 메모리 크기 출력 
       크기가 13인 char형 문자열과
       int형 변수 하나, short형 변수 하나가
       있으므로 student의 실질적인 크기는 19여야 한다.
       하지만 출력된 결과는 24이다. 구조체의 padding 
       때문에 일어나는 일이다.*/
    printf("size of int = %ld\n", sizeof(int)); //int형 크기 출력(4byte)
    printf("size of short = %ld\n", sizeof(short)); //short형 크기 출력(2byte)
    return 0;
}
/* github repository 주소
   https://github.com/kjh0530/data_structure_HW.git 
   이 repostory의 HW#3 commit이 HW#3 과제 입니다. */