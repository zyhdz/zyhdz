//202510306206
//805971612@qq.com
//周玉恒
#include <stdio.h>
#include <math.h>

int main() {
    int n;
   
    scanf("%d", &n);
    
    int is_prime = 1; 
    int i = 2;         
    
   
    if (n <= 1) {
        is_prime = 0;
    } else {
       
        while (i <= sqrt(n)) {
            if (n % i == 0) {
                is_prime = 0;  
                break;        
            }
            i++;  
        }
    }
    
   
    if (is_prime) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }
    
    return 0;
}
