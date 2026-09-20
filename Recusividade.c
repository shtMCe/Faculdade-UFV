#include <stdio.h>
#include <math.h>

int hip_fat (int n) {
    if (n == 1) 
        return 1;
    
    else {
        
        return pow(n, n) * hip_fat(n-1);
    } 
}

int main() {
	
    int n, hip_fat_result;
    
    scanf("%d", &n);
    
    hip_fat_result = hip_fat(n);
    
    printf("%d", hip_fat_result);
    
	return 0;
}