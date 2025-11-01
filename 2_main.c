//202510306206
//805971612@qq.com
//周玉恒
#include <stdio.h>

int main() {
    int num, hundreds, tens, units;
    int count = 0;  

   
    for (num = 100; num <= 999; num++) {
       
        hundreds = num / 100;         
        tens = (num / 10) % 10;        
        units = num % 10;             

        
        if (hundreds * hundreds * hundreds + 
            tens * tens * tens + 
            units * units * units == num) {
            
            
            if (count > 0) {
                printf(" ");
            }
            printf("%d", num);
            count++;
        }
    }
    printf("\n"); 

    return 0;
}
