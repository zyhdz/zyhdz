//202510306206
//805971612@qq.com
//周玉恒
#include <stdio.h>
#include <math.h>  


int isPrime(int num) {
    
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1; 
}

int main() {
    int n;
   
    scanf("%d", &n);
    
    
    if (isPrime(n)) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }
    
    return 0;
}
