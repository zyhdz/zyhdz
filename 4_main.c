//202510306206
//805971612@qq.com
//周玉恒
#include <stdio.h>

int main() {
    int num = 100;  
    int count = 0;  
    int hundreds, tens, units;

   
    while (num <= 999) {
      
        hundreds = num / 100;
        tens = (num / 10) % 10;
        units = num % 10;

        
        if (hundreds * hundreds * hundreds + tens * tens * tens + units * units * units == num) {
            
            if (count > 0) {
                printf(" ");
            }
            printf("%d", num);
            count++;
        }

        num++; 
    }
    printf("\n"); 

    return 0;
}
