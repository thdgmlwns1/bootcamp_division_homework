/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int score;
    
    scanf("%d", &score);
    
    switch(score/10){
    
    	case 10:
        	printf(" A");
            break;
            
        case 9:
        	printf(" A");
            break;
            
        case 8:
        	printf("B");
            break;
            
        case 7:
        	printf("C");
            break;
            
        case 6:
        	printf("D");
            break;
            
        default:
        	printf("F");
            break;
            
    }

    return 0;
}