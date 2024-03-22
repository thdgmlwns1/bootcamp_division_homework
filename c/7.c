/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int month, year, days;



    scanf("%d", &year);
    scanf("%d", &month);


    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        days = 31;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    case 2:
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            days=29;
        }
        else{
            days=28;
        }
        break;
    default:
        break;
}

 // 결과 출력
printf("%d\n",days);




    return 0;
}