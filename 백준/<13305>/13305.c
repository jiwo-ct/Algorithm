#include <stdio.h>

int main(){
    long long result = 0; 
    int distance[100000];
    int n, min, cur; 
    
    scanf("%d",&n); 
    
    for (int i=0; i<n-1; i++){
        scanf("%d",&distance[i]); 
    }
    for(int j=0; j<n-1; j++){
        scanf("%d",&cur);  // 리터당 가격 읽기 
        if (j==0 || min > cur) min = cur; // min
        result += (long long)min * distance[j]; 
    }
    
    printf("%lld",result); 
}
