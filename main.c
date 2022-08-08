#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // 변수 선언
    int *p;
    int i, strike, random[3];
    int one, two, three;
    // 숫자 입력 받는 곳
    printf("0~9까지 3자리 숫자를 입력하시오 : ");
    scanf("%d %d %d", &one, &two, &three);
    // 난수 발생
    srand(time(NULL));
    for (i = 0; i<=3; i++){
        random[i] = rand()%9;
        printf("%d", random[1]);
    }
    


}