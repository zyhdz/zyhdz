#202510306206
#805971612@qq.com
#周玉恒
#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);
    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80 && score <= 89) {
        printf("B\n");
    } else if (score >= 70 && score <= 79) {
        printf("C\n");
    } else if (score >= 60 && score <= 69) {
        printf("D\n");
    } else if (score >= 0 && score < 60) {
        printf("E\n");
    } else {
        printf("输入成绩无效\n");
    }
    return 0;
}
