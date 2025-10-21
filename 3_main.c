//202510306206
//805971612@qq.com
//周玉恒
#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d\n", a / b); 
            } else {
                printf("除数不能为 0\n");
            }
            break;
        default:
            printf("输入运算符无效\n");
            break;
    }
    return 0;
}
