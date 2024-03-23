#include <stdio.h>

int main(){
    int n, min, cpr; // 도시의 개수, 최솟값, 도시당 리터가격 
    int distance[1000]; // 두 도시를 연결하는 도로의 길이 
    long long price = 0; // 입력 받을 수 있는 최대 값이 10000 * 10000 *  1000 = 100,000,000,000 
    
    scanf("%d",&n); 
    
    for (int i=0; i<n-1; i++){ // 두 도시를 연결하는 도로의 길이를 입력받는다 
        scanf("%d",&distance[i]); 
    }
    
    for(int i=0; i<n-1; i++){ // 첫번째 도시부터 마지막 도시-1까지 
        scanf("%d",&cpr);  // 리터당 가격 읽기 
        if (i==0 || min > cpr)
            min = cpr; // min 초깃값 = 첫번째 도시
        price += (long long)min * distance[i]; // 최저가 * 도로의 길이 
    }
    
    printf("%lld",price); 
}