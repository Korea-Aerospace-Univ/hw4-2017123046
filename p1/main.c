// Online C compiler to run C program online
#include <stdio.h>

int main(void)
{
    int count = 0; //시도횟수를 나타내는 변수입니다.선언과 동시에 0으로 초기화해줍니다.
    int target; // 정답을 나타내는 변수입니다.scanf 사용 예정이므로 초기화하지 않습니다.
    int guess;  // 입력을 나타내는 변수입니다.scanf 사용 예정이므로 초기화하지 않습니다.
    
    scanf("%d",&target); // 정답을 입력받습니다.
    
    do{
        scanf("%d",&guess); 
        if (target < guess) // 입력이 정답보다 클 때입니다.
        {
            printf("%d>?\n",guess);
            count++;
        }
        
        if (target > guess) // 정답이 입력보다 클 때입니다.
        {
            printf("%d<?\n",guess);
            count++;
        }
        
    }while(target != guess); // 정답을 맞힐 때까지 루프를 돌리기 위한 코드입니다.
    
    count++; // 정답을 맞힌 순간은 횟수에 반영되지 않아서
             // while문 밖에서 한번 더 count를 증가시켜줘야 합니다.
    printf("%d==?\n",guess); // 정답을 맞혔다는 의미의 코드를 적어줍니다.
    printf("%d",count); // 최종적으로 시도횟수를 출력해줍니다.            

    return 0;
}
