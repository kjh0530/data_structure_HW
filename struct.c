#include <stdio.h>

struct student1 { /*char형, int형, char형 변수가 있는 
                    student1 구조체 정의 
                    구조체를 typedef으로 정의하지 않았으므로
                    해당 구조체를 선언할 때 앞에 struct라고 
                    붙여서 구조체인 것을 알려주어야 한다.*/
    char lastName;
    int studentId;
    char grade;
};
typedef struct { /*char형, int형, char형 변수가 있는 
                   student2 구조체 정의 
                   구조체를 typedef으로 정의했으므로
                   해당 구조체를 선언할 때 앞에 struct라고 
                   붙이지 않아도 된다.(사용자 정의 data type) */
    char lastName;
    int studentId;
    char grade;
} student2;

int main() {
    printf("[----- 김주훈  2020039027 -----]\n\n"); //이름, 학번 출력
    struct student1 st1 = {'A', 100, 'A'}; /* student1 구조체 st1 선언 및 초기화 
                                              student1 구조체를 정의할 때 typedef으로
                                              정의하지 않았으므로 해당 구조체를 선언할 때
                                              struct를 앞에 붙여서 선언해야 한다.*/
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);
    /* 해당 구조체의 멤버변수 출력 */

    student2 st2 = {'B', 200, 'B'}; /* student2 구조체 st2 선언 및 초기화 
                                       student2 구조체를 정의할 때 typedef으로
                                       정의했으므로 해당 구조체를 선언할 때 
                                       앞에 struct를 붙이지 않아도 된다.
                                       (하나의 data type처럼 선언) */
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);
    /* 해당 구조체의 멤버변수 출력 */

    student2 st3; // student2 구조체 st3 선언
    st3 = st2; /* 구조체 st3에 st2를 할당한다.
                  현재 업그레이드된 컴파일러에서는
                  같은 구조체를 구조체에 할당할 수 있다.
                  (모든 멤버변수의 값이 할당된다) */
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    /* 해당 구조체의 멤버변수 출력 */

    /* equality test */
    /* if(st3 == st2) //gcc컴파일러로는 구조체끼리의 비교를 할 수 없다.
    printf("equal\n"); //그러므로 이 문장은 컴파일 에러가 난다.
    else
    printf("not equal\n"); */
    return 0;
}
/* github repository 주소
   https://github.com/kjh0530/data_structure_HW.git 
   이 repostory의 HW#3 commit이 HW#3 과제 입니다. */