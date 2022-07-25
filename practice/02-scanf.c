// 이름과 나이를 '입력'받아서 '출력'하는 프로그램
// 모르면 모른다고 말하고 안들림 지금
#include <stdio.h>

int main(){
    char name[10];
    int age; // ; 없음
    printf_s("name? \n");
    scanf_s("%s", &name);
    printf_s("age? \n");
    scanf_s("%d", &age); // ; 없음
    
    printf_s("%s, %d\n", name, age);
    return 0;
}
