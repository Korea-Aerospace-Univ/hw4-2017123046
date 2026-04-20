#include <stdio.h>

int main(void) {
    int N; // 문자열 길이입니다.scanf를 사용하기 때문에 초기화 하지 않습니다.
    int numcount = 0,charcount = 0; // 숫자나 문자가 연속인지 체크하는 변수입니다.
    int maxnumcount = 0,maxcharcount = 0; // 연속적인 숫자와 소문자의 최댓값을 나타내는 변수입니다.
    int idx = 0; // 문자열 배열의 인덱스를 나타내는 변수입니다.
    
    scanf("%d",&N);
    char arr[N+1]; // N값을 입력받은 후,문자 배열을 선언해줍니다.
                   // 문자열 마지막에 '\0'자리가 필요하므로 N+1로 선언합니다.
    scanf("%s",arr); // 문자열을 입력받습니다.
    
    while (arr[idx] != '\0') // 문자열 끝까지 루프를 돌리면서 확인합니다.
    {                        
        if (arr[idx] >= 'a')  // 소문자라면
        {
            charcount++; // 연속 소문자 개수를 증가시킵니다.
            numcount = 0; 
            // 동시에 숫자는 연속적이지 않기 때문에 
            // 연속 숫자 개수는 0으로 초기화 해줘야 합니다.
            if (charcount > maxcharcount) maxcharcount = charcount;
            // 또한 최대 연속 소문자 개수도 갱신해줍니다.
        }
        else
        {
            numcount++; // 연속 숫자 개수를 증가시킵니다.
            charcount = 0;
            // 동시에 소문자는 연속적이지 않기 때문에
            // 연속 소문자 개수는 0으로 초기화 해줘야 합니다.
            if (numcount > maxnumcount) maxnumcount = numcount;
            // 또한 최대 연속 숫자 개수도 갱신해줍니다.
        }
        
        idx++; // 다음 문자로 이동합니다.
    }
    
    printf("%d\n",maxcharcount); // 최대 연속 소문자 개수를 출력합니다.
    printf("%d",maxnumcount); // 최대 연속 숫자 개수를 출력합니다.
}
