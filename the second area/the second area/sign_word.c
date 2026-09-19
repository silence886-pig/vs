//标识符：我们自己起的名字，比如变量名，函数名
//命名规则：
    //1：由数字，字母，下划线_组成
    //2：不能以数字开头
    //3：不能是关键字
    //4：区分大小写，a和A是不一样的
    //（硬性要求）
    //1：用英文单词，见名知义
    //2：变量名：全部小写
    //3：代码文件名：全部小写，单词之间用下划线隔开，开头可用数字
    //（软性建议）
//void while return都是关键字且关键字都小写If为标识符，这个I是大写，所以不是关键字


//键盘录入：scanf，是scanner format的缩写，这是一个函数
//scanf作用为获取用户在键盘上输入的数据，并赋值给变量
//键盘录入时要在变量名前加一个&
//vs中可以用scanf_s
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////#include <stdlib.h> 
//int main()
//{
//    //system("chcp 65001");
//    int a;
//    printf("请输入一个整数：");
//    //键盘录入
//    scanf_s("%d", &a);
//    //打印一下
//    printf("变量里a的值为：%d\n", a);
//    return 0;
//}
//字符串变量定义方法
//数据类型 变量名[大小]=字符串；
// char     str  [内存占用大小]= "aaa"
//内存占用大小计算方法
//英文：1个字母，符号，数字占用一个字节
//中文：在vs或vc中，默认情况下，一个中文占两个字节
//结束标记占一个字节，看不见
//其实字节不用算【】这个里面大一些就好
//#include<stdio.h>
//int main()
//{
//    char a[225];    变量名记录英雄名字 
//    printf("请选择你的英雄:\n");   让输入更直观
//    scanf("%s", &a);     键盘录入
//    printf("你选择的英雄是:%s",a);    打印输出
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a[100];
//    printf("你的女朋友是：\n");
//    scanf("%s", &a);
//    printf("你的她是%s", a);
//    return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    char age[100];
//    printf("请输入你的年龄\n");
//    scanf("%s", &age);
//    printf("你的年龄是%s", &age);
//    return 0;
//    
//}
//tips:这个键盘录入的scanf内逗号前，尽量只能有%什么，不然你加了什么，录入时也得加什么才能得到正确结果
       //变量前一定要加&
       // 
       // 
//计算器
//#include<stdio.h>
//int main()
//{
//    int num1;
//    int num2;
//    printf("请输入需要相加的两个数据\n");
//    scanf("%d", &num1);
//    scanf("%d", &num2);
//    printf("结果是%d\n", num1 + num2);
//    return 0;
//
//}
//其次，这个也可以一行多录scanf("%d %d %d", &a, &b, &c);
//逗号前面用空格，也可以用逗号隔开，最好是空格，逗号后用逗号隔开，反正输入数值一定要对应，如果逗号前你是逗号隔开，你输入也得用逗号隔开
//一定要一一对应


//练习
//#include<stdio.h>
//int main()
//{
//    char name[100];
//    int age;
//    int weight;
//    printf("请输入你的姓名,身高,年龄");
//    scanf("%s %d %d", &name, &age, &weight);
//    printf("你的身份信息是\n姓名：%s\n身高：%dcm\n年龄：%d岁\n", name, age, weight);
//    return 0;
//} 
#include<stdio.h>
int main()
{
    printf("请输入长方体的长宽高");
    double length;
    double width;
    double height;
    double volume;
    scanf("%lf", &length);
    scanf("%lf", &width);
    scanf("%lf", &height);
    printf("长方体的体积是%.2f",volume= length * width * height);
    return 0;
}
//tips:
// printf中，double语句都是f
//但是在scanf中，double语句是lf