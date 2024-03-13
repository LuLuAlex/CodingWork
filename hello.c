#include <stdio.h>

int main() {
    // 1. 定义1个int变量age同时赋值为18，然后打印内容
    int age = 18;
    printf("%d\n", age);
    // 2. 修改age的内容为20，然后打印内容
    age = 20;
    printf("%d\n", age);
    // 3. 定义2个int变量，然后在分别赋值，然后再打印内容
    int a, b;
    a = 123;
    b = 256;
    printf("%d\n", a);
    printf("%d\n", b);
    // 4. 定义1个float类型变量height同时赋值，然后打印内容
    float height = 1.77;
    printf("%f\n", height);

    return 0;
}