//202510306206
//805971612@qq.com
//周玉恒
#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;
    int i;

   
    
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    
    arr[4] = sum;

   、
    for (i = 0; i < 5; i++) {
        if (i == 0) {
            printf("%d", arr[i]);
        } else {
            printf(" %d", arr[i]);
        }
    }

    return 0;
}
