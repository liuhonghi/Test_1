//
//  main.c
//  test
//
//  Created by HiLau on 2023/5/17.
//

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "add.h"
#include "game.h"
//进阶
//2023-7-01  数据的存储（整型和浮点型）
//字符类型的意义 - 使用这个类型开辟的内存空间的大小（大小决定了使用范围）
//             - 如何看待内存空间的视角
//整型家族
//       - char - unsigned char - signed char //char因为存储的是acsii码
//       - short - unsigned short [int] - signed short [int]
//       - int - unsigned int - signed int
//       - long - unsigned long [int] - signed long [int]

//浮点型家族
//          - float
//          - double

//构造类型（自定义类型）
//                  - struct结构体类型
//                  - 数组
//                  - enum枚举
//                  - union联合体

//指针类型

//空类型
//      - void - 函数返回类型/函数参数/指针


int main()
{
    int a = -10;
    return 0;
}

//---------------------------------------------------------------------------------------

//bool canConstruct(char * ransomNote, char * magazine){
//    int r=strlen(ransomNote);
//    int m=strlen(magazine);
//    if(r>m){
////判断两个字符串长度
//        return false;
//    }
//    int ans[26]={0};
////创建额外数组
//    for(int i=0;i<r;i++){
//        ans[ransomNote[i]-'a']++;
//        ans[magazine[i]-'a']--;
////1遍历，ransomNote的元素下标++
////magezine的元素下标--
//    }
//    if(m>r){
////判断magazine是否长于ransomNote
//        for(int i=r;i<m;i++){
////继续遍历，注意是从r开始
//            ans[magazine[i]-'a']--;
//        }
//    }
//    for(int i=0;i<26;i++){
//        if(ans[i]>0)
////只要大于0就return false,可以是负数，因为magezine可以长于ransomNote
//        return false;
//    }
//    return true;
//}
//
//int main() {
//    char ransomNote[] = "aabbcc";
//    char magazine[] = "abcabc";
//
//    bool result = canConstruct(ransomNote, magazine);
//
//    if (result) {
//        printf("可以构建\n");
//    } else {
//        printf("无法构建\n");
//    }
//
//    return 0;
//}
//---------------------------------------------------------------------------------------

//2023-6-26 初阶考核编程
//1、写一个算法求：两个正整数的最小公倍数
//方法1
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d",&a,&b);
//    int m = a>b?a:b;
//    while(1)
//    {
//        if(m%a == 0 && m%b == 0)
//        {
//            printf("%d\n",m);
//            break;
//        }
//        m++;
//    }
//    return 0;
//}

//方法2
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d",&a,&b);
//    int i = 1;
//    while(1)
//    {
//        if(a*i%b == 0)
//        {
//            printf("%d\n",a*i);
//            break;;
//        }
//        i++;
//    }
//    return 0;
//}

//2、倒置字符串内容 - 如i like beijing.  --> beijing. like i

//void reverse(char* left,char* right)
//{
//    while(left<right)
//    {
//        char tmp = 0;
//        tmp = *left;
//        *left = *right;
//        *right = tmp;
//
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[100] = {0};
//    fgets(arr, 100, stdin);
//    int len = strlen(arr);
//    reverse(arr,arr+len-1);
//
//    char* start = arr;
//    while(*start)
//    {
//        char* end = start;
//        while(*end != ' ' && *end != '\0')
//        {
//            end ++;
//        }
//        reverse(start, end - 1);
//        if(*end == ' ')
//            start = end + 1;
//        else
//            start = end;
//    }
//    printf("%s\n",arr);
//    return 0;
//}
//------------------------------------------------------

//2023-6-23 操作符作业
//1、求一个整数二进制中1的个数
//问题代码 - 无法求负数
//int NumberOf1(int num)
//{
//    int count = 0;
//    while(num)
//    {
//        if(num % 2 == 1)
//        {
//            count ++;
//        }
//        num = num/2;
//    }
//    return count;
//}

//优化 - 加unsigned变为无符号整型
//int NumberOf1(unsigned int num)
//{
//    int count = 0;
//    while(num)
//    {
//        if(num % 2 == 1)
//        {
//            count ++;
//        }
//        num = num/2;
//    }
//    return count;
//}

//优化 -
//int NumberOf1(int num)
//{
//    int count = 0;
//    int i = 0;
//    for(i = 0;i<32;i++)
//    {
//        if(((num>>i)&1) == 1)
//        {
//            count ++;
//        }
//    }
//    return count;
//}
//方法2
//int NumberOf1(int num)
//{
//    int count = 0;
//    while(num)
//    {
//        num = num &(num-1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int num = 1;
//    int ret = NumberOf1(num);
//    printf("%d\n",ret);
//    return 0;
//}

//题目变形 - 写一个代码判断一个数字是不是2的n次方
//void Fac(num)
//{
//        if((num&(num-1)) == 0)
//        {
//            printf("Yes\n");
//        }
//        else
//        {
//            printf("No\n");
//        }
//
//}
//int main()
//{
//    int num = 0;
//    scanf("%d",&num);
//    Fac(num);
//    return 0;
//}


//2、求两个数二进制中不同位的个数
//int Different(int m,int n)
//{
//    int count = 0;
//    int i = 0;
//    for(i = 0;i<32;i++)
//    {
//      if((((m^n)>>i)&1) == 1)
//      {
//          count ++;
//      }
//    }
//    return count;
//}

//优化
//int Different(int m,int n)
//{
//    int ret = m^n;
//    int count = 0;
//    while(ret)
//    {
//        ret = ret &(ret-1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d",&m,&n);
//    int count =Different(m,n);
//    printf("count = %d\n",count);
//    return 0;
//}

//3、打印整数二进制数中的奇数位和偶数位
//void print(int num)
//{
//    int i = 0;
//    for(i = 31;i>=1;i-=2)
//    {
//        printf("%d ",(num >> i)&1);
//    }
//    printf("\n");
//    for(i = 30;i>=0;i-=2)
//    {
//        printf("%d ",(num >> i)&1);
//    }
//    printf("\n");
//}
//int main()
//{
//    int num = 0;
//    scanf("%d",&num);
//    print(num);
//    return 0;
//}
//--------------------------------------------------------------------------------------

//模拟实现strcpy函数
//方法
//void my_strcpy(char* dest,char* src)
//{
//    while(*src != '\0')
//    {
//        *dest = *src;
//        dest ++;
//        src++;
//    }
//    *dest = *src;
//}

//优化1
//void my_strcpy(char* dest,char* src)
//{
//    while(*src != '\0')
//    {
//        *dest ++= *src++;
//    }
//    *dest = *src;
//}

//优化2
//void my_strcpy(char* dest,char* src)
//{
//    while(*dest ++= *src++)
//    {
//        ;
//    }
//}

//优化3 - 增加断言assert
//void my_strcpy(char* dest,char* src)
//{
//    assert(src != NULL);//断言
//    assert(dest != NULL);//断言
//    while(*dest++ = *src++)
//    {
//        ;
//    }
//}


//优化4 - 增加const修饰变量，变为常变量，不能被修改
//const修饰指针变量 - 如果const放在*左边，修饰的是*p，表示指针指向的内容不能通过指针来改变但是指针变量本身是可以修改的
//如果const放在*右边，修饰的是指针变量p，表示指针变量不能被改变，但是指针指向的内容可以被改变
//void my_strcpy(char* dest,const char* src)
//{
//    assert(src != NULL);//断言
//    assert(dest != NULL);//断言
//    while(*dest++ = *src++)
//    {
//        ;
//    }
//}

//优化5 - 改为返回char*类型
//char* my_strcpy(char* dest,const char* src)
//{
//    assert(src != NULL);//断言
//    assert(dest != NULL);//断言
//    int ret = dest;
//    while(*dest++ = *src++)
//    {
//        ;
//    }
//    return ret;
//}

//int main()
//{
//    char arr1[20] = "xxxxxx";
//    char arr2[]="hello";
//    //strcpy(arr1,arr2);
//    //my_strcpy(arr1,arr2);
//    //printf("%s\n",arr1);
//    printf("%s\n",my_strcpy(arr1,arr2));  //当改为char*时，可以进行链式访问；
//    return 0;
//}

//模拟实现strlen函数
//size_t  - unsigned int
//计数器方式
//size_t my_strlen(const char* str)
//{
//    //assert(str != NULL);
//    assert(str);
//    size_t count = 0;
//    while(*str++ != '\0')
//    {
//        count ++;
//    }
//    return count;
//}

//指针 - 指针方式
//size_t my_strlen(const char* str)
//{
//    assert(str);
//    char* end = str;
//    while(*end ++)
//    {
//        ;
//    }
//    return (end - str - 1);
//}
//int main()
//{
//    char arr[] = "hello";
//    size_t count = 0;
//    count = my_strlen(arr);
//    printf("count = %d\n",count);
//    return 0;
//}



//-----------------------------------------------------------------------------
//2023-6-21
//调试技巧
//



//给你一个 m x n 的整数网格 accounts ，其中 accounts[i][j] 是第 i​​​​​​​​​​​​ 位客户在第 j 家银行托管的资产数量。返回最富有客户所拥有的 资产总量 。 客户的 资产总量 就是他们在各家银行托管的资产数量之和。最富有客户就是 资产总量 最大的客户。

//在力扣上写的解
//int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
//    int sum = 0;
//    int max = 0;
//    int i = 0;
//    for(i = 0;i<accountsSize;i++)
//    {
//        int j = 0;
//        for(j = 0;j<accountsColSize[i];j++)
//        {
//            sum += accounts[i][j];
//        }
//        max = sum>max?sum:max;
//        sum = 0;
//    }
//return max;
//}
//#define ROW 3
//#define COL 3
//int MaxWealth(int arr[ROW][COL],int row,int col)
//{
//    int sum = 0;
//    int max = 0;
//    int i = 0;
//    for(i = 0;i<row;i++)
//    {
//        int j = 0;
//        for(j = 0;j<col;j++)
//        {
//            sum += arr[i][j];
//        }
//        max = sum>max?sum:max;
//        sum = 0;
//    }
//    return max;
//}

//自己写的主函数解
//int main()
//{
//    int arr[ROW][COL]={{1,5,7},{2,5,8},{3,5,9}};
//    int max = 0;
//    max = MaxWealth(arr,ROW,COL);
//    printf("max = %d\n",max);
//    return 0;
//}

//-----------------------------------------------------------------------------------

//2023-6-20
//结构体初阶
//结构体的定义和初始化
//struct B
//{
//    char name[20];
//    char sex[10];
//};
//
//struct Stu
//{
//    struct B sb;  // 结构体的成员可以是另一个结构体
//    char name[20];
//    char id[20];
//    int age;
//}s1,s2;//此时的s1和s2也是结构体变量，是全局的
//
//int main()
//{
//    struct Stu s;//此时的s是局部的
//    return 0;
//}


//结构体传参
//struct B
//{
//    char c;
//    short s;
//    double d;
//};
//
//struct Stu
//{
//    struct B sb;
//    char name[20];
//    int age;
//    char id[20];
//};
//
//void print1(struct Stu t)
//{
//    printf("%c %d %lf %s %d %s\n",t.sb.c,t.sb.s,t.sb.d,t.name,t.age,t.id);
//}
//
//void print2(struct Stu* t)
//{
//    printf("%c %d %lf %s %d %s\n",t->sb.c,t->sb.s,t->sb.d,t->name,t->age,t->id);
//}
//
//int main()
//{
//    struct Stu s = { {'w',20,3.14},"张三",30,"2005030124"};
//    //写一个函数打印s内容
//    print1(s); //传值调用
//    print2(&s); //传址调用（好） - 传参效率高-只传了一个指针大小，不需要重新开辟空间
//    //函数调用的参数压栈
//    //栈 - 一种数据结构，先进的后出，后进的先出
//    //压栈 - 给栈中存放数据
//    return 0;
//}
//-----------------------------------------------------------------------------------

//2023-6-19
//指针初阶1
//指针类型 - 1、指针类型决定了指针解引用的权限有多大：int型能访问四个字节，char型只能访问一个字节
//        - 2、指针类型决定了指针走一步能走多远（步长）
//int main()
//{
//    int arr[10] = {0};
//    int* p = arr;
//    int i = 0;
//    for(i = 0;i<10;i++)
//    {
//        *(p+i) = 1; //p+i其实是下标为1的地址; *(p+i)=1 - 把数组全改为1
//    }
//    return 0;
//}

//野指针
//1、指针未初始化
//int main()
//{
//    int* p;  //p是一个局部的指针变量，不初始化会默认是随机值
//    *p = 20;  //此时非法访问内存
//    return 0;
//}

//2、指针越界访问
//int main()
//{
//    int arr[10] = {0};
//    int* p = arr;
//    int i = 0;
//    for(i = 0;i<=10;i++)  //此时循环了十一次
//    {
//        *p = i;
//        p++;               //当第十一次时，造成越界访问
//    }
//    return 0;
//}

//3、指针指向的空间释放
//int* test()
//{
//    int a = 10;
//    return &a;
//}
//
//int main()
//{
//    int* p = test();
//    *p = 20;
//    return 0;
//}

//如何避免野指针
//1、指针初始化
//2、小心指针越界
//3、指针指向空间释放即使置NULL
//4、使用指针之前检查有效性


//指针运算
//1、指针 +- 整数
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//for(vp = 0;vp< &values[N_VALUES];)
//{
//    *vp++ = 0; //把数组初始化
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int* p = arr;
//    int *pend = arr+9;
//    while(p<=pend)
//    {
//        printf("%d ",*p);
//        p++;
//    }
//    printf("\n");
//    return 0;
//}

//2、指针 - 指针
//指针和指针相减的前提：两个指针指向同一块空间
//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n",&arr[9] - &arr[0]); //9 - 指针减指针得到的是两个指针之间的元素个数
//    return 0;
//}

//用指针 - 指针 写一个计算字符串长度的函数my_strlen
//int my_strlen(char* str)
//{
//    char* start = str;
//    while(*str != 0)
//    {
//        str++;
//    }
//    return str - start;
//}
//
//int main()
//{
//    char arr[]="abc";
//    int len = my_strlen(arr);
//    printf("%d\n",len);
//    return 0;
//}


//3、指针的关系运算
//标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较（方法A），但是不允许与指向第一个元素之前的那个内存位置的指针进行比较（方法B）；
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
////A
//for(vp = &values[N_VALUES];vp > &values[0];)
//{
//    *--vp = 0;
//}
//
////B
//for(vp = &values[N_VALUES - 1];vp >= &values[0];vp--)
//{
//    *vp = 0;
//}


//指针和数组
//数组名是数组首元素的地址
//int main()
//{
//    int arr[10] = {0};
//    printf("%p\n",arr);
//    printf("%p\n",&arr[0]);
//    return 0;
//}

//int main()
//{
//    int arr[10] = {0};
//    int* p = arr;
//    int i = 0;
//    for(i = 0;i<10;i++)
//    {
//        printf("%p == %p\n",&arr[i],p+i);
//        *(p+i) = i;
//    }
//    for(i = 0;i<10;i++)
//    {
//        printf("%d ",*(p+i));
//    }
//    printf("\n");
//    return 0;
//}

//int main()
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int* p = arr;
//    //arr[2] == *(p+2) == *(2+p) == *(2+arr) == *(arr+2) == 2[arr]
//    printf("%d\n",arr[2]); //3
//    printf("%d\n",2[arr]); //3
//    printf("%d\n",p[2]);   //3
//    return 0;
//}



//二级指针
//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    int* *ppa = &pa;
//    **ppa = 20;
//    printf("%d\n",a);
//    return 0;
//}


//指针数组


//-------------------------------------------------------------------------------------

//2023-6-18-数组定义初始化作业
//1、整型数组
//用Init()初始化数组
//用print()打印数组各个元素
//用reverse()逆序打印各个元素

//void Init(int* arr,int sz)
//{
//    int i = 0;
//    for(i = 0;i<sz;i++)
//    {
//        arr[i] = 0;
//    }
//}
//
//void print(int* arr,int sz)
//{
//    int i = 0;
//    for(i = 0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//}
//
//void reverse(int* arr,int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    int tmp = 0;
//    while(left < right)
//    {
//        tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//
//    print(arr,sz);
//    reverse(arr, sz);
//    print(arr, sz);
//
//    Init(arr,sz);
//    print(arr, sz);
//    return 0;
//}

//2、交换数组
//将数组A中的内容和数组B中的内容进行交换（数组一样大）
//void arrChange(int* arrA,int* arrB,int sz)
//{
//    int i = 0;
//    for(i=0;i<sz;i++)
//    {
//        int tmp = 0;
//        tmp = arrA[i];
//        arrA[i] = arrB[i];
//        arrB[i] = tmp;
//    }
//}
//
//
//
//
//int main()
//{
//    int arrA[] = {1,2,3,4,5,6,7,8,9,10};
//    int arrB[] = {10,9,8,7,6,5,4,3,2,1};
//    int sz = sizeof(arrA)/sizeof(arrA[0]);
//
//    arrChange(arrA,arrB,sz);
//    int i = 0;
//    for(i = 0;i<sz;i++)
//    {
//        printf("%d ",arrA[i]);
//    }
//    printf("\n");
//    for(i = 0;i<sz;i++)
//    {
//        printf("%d ",arrB[i]);
//    }
//    printf("\n");
//    return 0;
//}
//-------------------------------------------------------------------------------------



//隐式类型变换 - 整型提升详解
//例
//int main()
//{
//    char a = 3;
//    //00000000000000000000000000000011
//    //但是char类型，大小为一个字节 - 00000011
//    char b = 127;
//    //00000000000000000000000001111111
//    //但是char类型，大小为一个字节 - 01111111
//    char c = a + b;
//    //发现a和b是char类型，没有达到一个int大小
//    //整型提升 - 根据符号为补高位
//    //a 提升为 - 00000000000000000000000000000011
//    //b 提升为 - 00000000000000000000000001111111
//    //c 结果为 - 00000000000000000000000010000010
//    //但是c为char类型，要截断 - 10000010
//    //整型提升，符号位为1 - 111111111111111111111111110000010 - 补码
//    //                 - 111111111111111111111111110000001 - 反码
//    //                 - 000000000000000000000000001111110 - 原码 - 打印结果 - （-126）
//    printf("%d\n",c);
//    return 0;
//}
//
//-------------------------------------------------------------------------------------




//操作符详解
//1、算术操作符 -     + - * / %
// /取商  %取余 - % 两端必须为整数

//2、移位操作符 - 二进制位移动    //左移 - 左边丢弃，右边补0    //右移 - 右边丢弃，左边补0
// << - 左移操作符    >> - 右移操作符
//int main()
//{
//    int a = 3;
//    int b = a << 1;
//    //int b = a >> 1;
//    printf("b = %d\n",b);
//    return 0;
//}
// int main()
//{
//     int a = -1;
//     int b = a>>1;
//     printf("b=%d\n",b);
//     return 0;
// }

//3、位操作符（必须整数） - 按位与&            按位或|           按位异或^
//                  有0为0，同1为1      有1为1；同0为0     不同为1，相同为0
//int main()
//{
//    int a = 3;// - 011
//    int b = 5;// - 101
//    //int c = a & b; // = 1
//    //int c = a | b; // = 7
//    //int c = a ^ b; // = 6
//    printf("c = %d\n",c);
//    return 0;
//}
//
//位操作符面试题 - 交换两个变量，不能创建中间变量，a=3，b=5，交换后a=5，b=3
//int main()
//{
//    int a = 3;//011
//    int b = 5;//101
////    //方法一 - 有缺陷，因为int有最大值，当a和b太大时，会溢出
////    a = a+b;
////    b = a - b;
////    a = a - b;
//    //方法二 - 异或
//    //0^a=a  a^a=0 a^a^a=a
//    a = a ^ b;//110 - 想象成密码，再异或b，能得到a
//    b = a ^ b;//011
//    a = a ^ b;//101
//    printf("a = %d\n",a);
//    printf("b = %d\n",b);
//    return 0;
//}
//
//移位操作符和位操作符例题：编写一个代码，求一个数的二进制数中1的个数
//int main()
//{
//    int count = 0;
//    int a = 13;//1101
//
//    while(a>0)
//    {
//        if(a&1 == 1 )
//        {
//            count ++;
//        }
//        a = a>>1;
//    }
//        printf("count = %d\n",count);
//    return 0;
//}

//sizeof()
//int main()
//{
//    short s = 5;  //在内存中开辟两个字节的空间。
//    int a = 10;
//    printf("%d\n",sizeof(s = a + 2));//2  //sizeof括号里的表达式不参与运算
//    printf("%d\n",s);//5
//    return 0;
//}

//～ - 按位取反
//int main()
//{
//    int a = -1;
//    int b = ~a;  //对补码全部按位取反
//    printf("%d\n",b);
//    return 0;
//}

//& - 取地址操作符
//* - 解引用操作符/间接访问操作符
//int main()
//{
//    int a = 10;
//    printf("%p\n",&a); //取地址
//    int* pa = &a; //pa用来存放地址 - 指针变量
//    *pa = 20; // * - 解引用操作符，此时*pa就是a
//    printf("%d\n",a);
//    return 0;
//}

//数组传参时，传的是指针 - 首元素地址
//void test1(int arr[])
//{
//    printf("%d\n",sizeof(arr));
//}
//
//void test2(char ch[])
//{
//    printf("%d\n",sizeof(ch));
//}
//
//int main()
//{
//    int arr[10] = {0};
//    char ch[10] = {0};
//    printf("%d\n",sizeof(arr)); //40
//    printf("%d\n",sizeof(ch)); //10
//
//    test1(arr);
//    test2(ch);
//    return 0;
//}


//逗号表达式 - 整个表达式结果为最后一个表达式的结果
//int main()
//{
//    int a = 3;
//    int b = 5;
//    int c = 3;
//    int d = (c = 5,a = c -1,c+=5);
//    printf("d = %d\n",d);
//    return 0;
//}
//
//a = get_val();
//count_val(a);
//while(a>0)
//{
//    a = get_val();
//    count_val(a);
//}
//
//可写成
//while(a = get_val(),count_val(a),a>0)
//{
//
//}

//结构体引用的三种写法
//struct book
//{
//    char name[20];
//    char id[20];
//    int price;
//};
//
//int main()
//{
//    struct book b = {"c语言","C200503","55"};
//
//    //1.
////    printf("书名:%s\n",b.name);
////    printf("书号:%s\n",b.id);
////    printf("价格:%d\n",b.price);
//
//    //2.
////    struct book *pb = &b;
////    printf("书名:%s\n",(*pb).name);
////    printf("书号:%s\n",(*pb).id);
////    printf("价格:%d\n",(*pb).price);
//
//    //3.
//        struct book *pb = &b;
//        printf("书名:%s\n",pb->name);
//        printf("书号:%s\n",pb->id);
//        printf("价格:%d\n",pb->price);
//    return 0;
//}
//1.

//--------------------------------------------------------------------

//扫雷
//void game()
//{
//    char mine[ROWS][COLS] = {0};
//    char show[ROWS][COLS] = {0};
//
//    InitBoard(mine, ROWS, COLS,'0');
//    InitBoard(show, ROWS, COLS,'*');
//
//    DisplayBoard(show, ROW, COL);
//
//    SetMine(mine,ROW,COL);
//    //DisplayBoard(mine, ROW, COL);
//
//    FindMine(mine,show, ROW, COL);
//}
//
//void menu()
//{
//    printf("**************************\n");
//    printf("********* 1.play *********\n");
//    printf("********* 0.exit *********\n");
//    printf("**************************\n");
//}
//
//void test()
//{
//    int input = 0;
//    srand((unsigned int) time(NULL));
//    do
//    {
//        menu();
//        printf("请选择>:");
//        scanf("%d",&input);
//        switch(input)
//        {
//            case 1:
//            {
//                game();
//                break;
//            }
//            case 0:
//            {
//                printf("退出游戏\n");
//            }
//            default:
//                printf("选择错误，请重新选择\n");
//        }
//
//    }
//    while(input);
//
//}
//
//
//int main()
//{
//    test();
//    return 0;
//}
//-------------------------------------------------------------------

//三子棋
//void game()
//{
//    char ret = 0;
//    char board [ROW][COL] = {0};
//    //初始化
//    InitBoard(board,ROW,COL);
//    DisplayBoard(board,ROW,COL);
//    while(1)
//    {
//        PlayerBoard(board,ROW,COL);
//        DisplayBoard(board,ROW,COL);
//        ret = IsWin(board,ROW,COL);
//        if(ret != 'C')
//        {
//            break;
//        }
//        ComputerBoard(board,ROW,COL);
//        DisplayBoard(board,ROW,COL);
//        ret = IsWin(board,ROW,COL);
//        if(ret != 'C')
//        {
//            break;
//        }
//    }
//    if(ret == '*')
//    {
//        printf("玩家win\n");
//    }
//    else if (ret == '#')
//    {
//        printf("电脑win\n");
//    }
//    else
//    {
//        printf("平局\n");
//    }
//}
//void menu()
//{
//    printf("********************\n");
//    printf("*** 1.play 0.exit***\n");
//    printf("********************\n");
//}
//
//void test()
//{
//    srand((unsigned int) time(NULL));
//    int input = 0;
//    do
//    {
//        menu();
//        printf("请选择:");
//        scanf("%d",&input);
//        switch(input)
//        {
//            case 1:
//                game();
//                break;
//            case 0:
//                printf("退出游戏\n");
//                break;
//            default:
//                printf("请重新选择!\n");
//                break;
//        }
//    }
//    while(input);
//}
////三子棋游戏
//int main()
//{
//    test();
//    return 0;
//}
//-------------------------------------------------------------------------
//
//找出只出现一次的数 - 单身狗
//方法一：暴力求解
//int main()
//{
//    int arr[]={1,2,3,4,5,1,2,3,4};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int i = 0;
//    for(i = 0;i<sz;i++)
//    {
//        int j = 0;
//        int count = 0;
//        for(j = 0;j<sz;j++)
//        {
//            if(arr[i] == arr[j])
//            {
//                count ++;
//            }
//        }
//        if(count == 1)
//        {
//            printf("%d\n",arr[i]);
//            break;
//        }
//    }
//
//    return 0;
//}
//
//方法二 - 异或 -同为0不同为1
//int main()
//{
//
//    int ret = 0;
//    int i = 0;
//    int arr[]={1,2,3,4,5,1,2,3,4};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    for (i=0; i<sz; i++)
//    {
//        ret = ret ^ arr[i];
//    }
//    printf("%d\n",ret);
//    return 0;
//}
//-------------------------------------------------------------------
//
//数组作为函数参数 - 冒泡排序函数
//void Bubble_soft(int arr[],int sz)
//{
//    int i = 0;
//    int flag = 1;  //优化 - 如果有序，flag为1，跳出循环；无序，flag为0，继续循环；
//    for(i = 0;i<sz-1;i++)
//    {
//        int j = 0;
//        for(j=0;j<sz-1-i;j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                int temp = 0;
//                temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//                flag = 0; //无序为0
//            }
//        }
//        if(flag == 1) //有序为1，break；
//        {
//            break;
//        }
//    }
//    printf("排序后:");
//}
//int main()
//{
//    int arr[10]={0};
//    int n = 0;
//    printf("请输入十个数字:");
//    for(n = 0;n<10;n++)
//    {
//        scanf("%d",&arr[n]);
//    }
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    Bubble_soft(arr,sz);
//    for(n = 0;n<10;n++)
//    {
//        printf("%d ",arr[n]);
//    }
//    printf("\n");
//    return 0;
//}
//

//void Bubble_soft(int arr[],int sz)
//{
//    int i = 0;
//    int flag = 1;  //优化 - 如果有序，flag为1，跳出循环；无序，flag为0，继续循环；
//    for(i = 0;i<sz-1;i++)
//    {
//        int j = 0;
//        for(j=0;j<sz-1-i;j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                int temp = 0;
//                temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//                flag = 0; //无序为0
//            }
//        }
//        if(flag == 1) //有序为1，break；
//        {
//            break;
//        }
//    }
//}
//int main()
//{
//    int arr[10]={10,9,8,7,6,5,4,3,2,1};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    Bubble_soft(arr,sz);
//    int i = 0;
//    for(i = 0;i<10;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
//---------------------------------------------------------------------------

//一维数组
//arr和&arr[0]等价，但&arr是取整个数组的地址，虽然输出结果一样，但意义不同
//int main()
//{
//    int arr[]={1,2,3,4,5};
//    printf("%p\n",arr);
//    printf("%p\n",arr+1);//增加4个字节，也就是arr[1]的地址
//    printf("%p\n",&arr[0]);
//    printf("%p\n",&arr[0]+1);//增加4个字节，也就是arr[1]的地址
//    printf("%p\n",&arr);
//    printf("%p\n",&arr+1); //此处输出结果会增加20个字节，也就是跳过了此数组
//    printf("%d\n",*arr);
//    return 0;
//}


// int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10}; //一维数组创建时在内存中是连续存放的，低地址-->高地址
//    //&arr[0] = 0x16fdff220
//    //&arr[1] = 0x16fdff224
//    //&arr[2] = 0x16fdff228
//    //&arr[3] = 0x16fdff22c
//    //&arr[4] = 0x16fdff230
//    //&arr[5] = 0x16fdff234
//    //&arr[6] = 0x16fdff238
//    //&arr[7] = 0x16fdff23c
//    //&arr[8] = 0x16fdff240
//    //&arr[9] = 0x16fdff244
//    //&arr[10] = 0x16fdff248
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int i = 0;
//    for(i = 0;i<=sz;i++)
//    {
//        printf("&arr[%d] = %p\n",i,&arr[i]);
//    }
//    return 0;
//}

//二维数组

//二维数组的列不能省略，行可以省略
//行和列都是从0行0列开始
/*
 int main()
{
    //int arr1[3][4] = {1,2,3,4,5};//三行四列
    // 不完全初始化
    // 1,2,3,4在第一行，5在第二行，后面默认补0；
    int arr2[3][4]= {{1,2,3},{4,5}};
    //第一行为1，2，3，0 ；第二行为4，5，0，0；第三行默认补0
    //int arr3[][4] = {{1,2,3,4},{5,6,7,8}};
    int i = 0;
    for(i=0;i<3;i++)
    {
        int j = 0;
        for(j=0;j<4;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

//二维数组在内存中的存储方式
//&arr[0][0] = 0x16fdff218
//&arr[0][1] = 0x16fdff21c
//&arr[0][2] = 0x16fdff220
//&arr[0][3] = 0x16fdff224
//&arr[1][0] = 0x16fdff228
//&arr[1][1] = 0x16fdff22c        - 二维数组实际上在内存中也是连续的（行之间连续）
//&arr[1][2] = 0x16fdff230         ｜1｜2｜3｜0｜|4｜5｜0｜0||0｜0｜0｜0｜
//&arr[1][3] = 0x16fdff234         ｜arr[0][j]｜|arr[1][j]||arr[2][j]|
//&arr[2][0] = 0x16fdff238      可以把二维数组理解为以行连续排列的一维数组 - arr[0]arr[1]arr[2]
//&arr[2][1] = 0x16fdff23c
//&arr[2][2] = 0x16fdff240
//&arr[2][3] = 0x16fdff244

/*
 int main()
{
    int arr[3][4] = {{1,2,3},{4,5}};
    int i = 0;
    for(i = 0;i<3;i++)
    {
        int j = 0;
        for(j=0;j<4;j++)
        {
            printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
        }
    }
        return 0;
    
}
//-------------------------------------------------------------

//函数递归 - 调用自身 - 把大事化小
//1、存在限制条件 2、每次递归之后，越来越接近限制条件
//2、并不是只有死递归才会栈溢出

//经典递归问题1:汉诺塔问题
 /*
void Hanoi(int n,char a,char b,char c)
{
    if(n >= 2 )
    {
        Hanoi(n-1, a, c, b);  //a绕过c到b
        printf("%c-->%c\n", a, c);
        Hanoi(n-1, b, a, c);  //b绕过c到a
    }
    else
    {
        printf("%c-->%c\n", a, c);
    }
}
int main()
{
    int n = 0;
    printf("请输入总数:");
    scanf("%d",&n);
    printf("移动步骤:");
    Hanoi(n,'A','B','C');
    return 0;
}*/




//经典递归问题2:青蛙跳台阶问题
//一阶 - 1种 - 1
//二阶 - 2种 - 1+1/2
//三阶 - 3种 - 1+1+1/1+2/2+1
//四阶 - 5种 - 1+1+1+1/1+1+2/2+1+1/1+2+1/2+2
//转化为斐波那契数列问题，但斐波那契数列问题用递归的算法效率低，因为要重复运算，循环的方式效率高

//方法2: while循环
//重点，int c = n

/*
 int Fac(int n)
{
    int a = 1;
    int b = 2;
    int c = n;
    while(n>2)
     {
       c = a+b;
       a = b;
       b = c;
       n--;
     }
    return c;
}

int main()
{
    int i = 0;
    int ret = 0;
    printf("请输入台阶数:");
    scanf("%d",&i);
    ret = Fac(i);
    printf("共有%d跳法\n",ret);
    return 0;
}
 
//方法1:
/*
int Fac(int n)
{
    if(n == 1)
    {
        return n;
    }
   else if(n ==2 )
    {
        return n;
    }
    else
    {
        return Fac(n-1)+Fac(n-2);
    }
}

int main()
{
    int i = 0;
    int ret = 0;
    printf("请输入台阶数:");
    scanf("%d",&i);
    ret = Fac(i);
    printf("共有%d跳法\n",ret);
    return 0;
}




//求斐波那契数列
//方法1（递归）: 缺点：进行了大量的重复计算，效率低，此处使用递归不合适
//int count = 0;
/*
int Fib1(int n)
{
    //if(n == 3)
    //{
    //    count++;
    //}
    if(n<=2)
        return 1;
    else
        return Fib1(n-1)+Fib1(n-2);
}
//方法2（循环）:  速度更快
int Fib2(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    
    while(n>2)
    {
        c = a+b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int num = 0;
    int ret = 0;
    scanf("%d",&num);
    //TDD - 测试驱动开发
    ret = Fib2(num);
    printf("ret = %d\n",ret);
    //printf("count = %d\n",count);
    return 0;
}


//递归思想求n！
//for 循环
/*
int Fac1(int n)
{
    int ret = 1;
    int i = 0;
    for(i=1;i<=n;i++)
    {
        ret = ret * i;
    }
    return ret;
}
//递归
int Fac2(int n)
{
    if(n <= 1)
        return 1;
    else
        return n*Fac2(n-1);
}

int main()
{
    int i = 0;
    int ret = 0;
    scanf("%d",&i);
    ret = Fac2(i);
    printf("%d\n",ret);
    return 0;
}


//模拟实现strlen函数
//方法2（不含临时变量） - 递归
/*
int my_strlen(char* str)
{
    if(*str != '\0')
    {
        return 1+my_strlen(str+1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    char arr[]="lau";
    int len = my_strlen(arr);
    printf("len = %d\n",len);
    return 0;
}
//方法1（含临时变量）
/*
int my_strlen(char* str)
{
    int count = 0;
    while(*str != 0)
    {
        count++;
        str++;
    }
    return count;
}
 
 int main()
{
     char arr[]="bit";
     int len = my_strlen(arr);//arr是数组，传参时是第一个元素的地址
     printf("len = %d\n",len);
     return 0;
 }

//写一个递归，输入1234 输出1 2 3 4
/*
void print(int num)
{
    if(num>9)
    {
        print(num/10);
    }
    printf("%d ",num%10);
}

 int main()
 {
     unsigned int num = 0;
     scanf("%d",&num);
     print(num);
     printf("\n");
     return 0;
 }
 
 /*
//最简单的递归，但因为没有判断条件，导致死循环
 int main()
{
     printf("hehe\n");
     main();  //运行结果 - 栈溢出 - stackoverflow
     return 0;
 }


//----------------------------------------------------------------------

/*
int main()
{
    int a = 10;
    int b = 20;
    int c = Add(a,b);
    printf("%d\n",c);
    return 0;
}

//函数的嵌套调用和链式访问
//嵌套调用
/*void new_line()
{
    printf("hehe\n");
}
void three_line()
{
    int i = 0;
    for(i=1;i<=3;i++)
    {
        new_line();
    }
}
int main()
{
    three_line();
    return 0;
}*/

//链式访问 - 把一个函数的返回值作为另外一个函数的参数
/*
 int main()
{
    int a = 0;
    //1
    a = strlen("abc");
    printf("%d\n",a);
    //2
    printf("%d\n",strlen("abc"));
    return 0;
}
 
/*
 int main()
 {
     printf("%d\n",printf("%d",printf("%d",43)));
     // 1            2           43
     //输出结果为4321
     return 0;
 }

//---------------------------------------------------------------------
//自定义函数  思路 - 先写怎么用，再写函数怎么实现
/*  //写一个函数实现每调用一次这个函数，num的值增加1
void Add(int* num)
{
    (*num)++;
}
int main()
{
    int num = 0;
    Add(&num);
    printf("num = %d\n",num);
    Add(&num);
    printf("num = %d\n",num);
    Add(&num);
    printf("num = %d\n",num);
    return 0;
}
/* //写一个函数实现整型有序数组实现二分查找
int binary_search(int arr[],int k,int sz)
{
    int left = 0;
    int right = sz - 1;
    while(left <= right)
    {
        int mid = (left+right)/2;
        if(arr[mid]<k)
        {
            left = mid + 1;
        }
        else if(arr[mid]>k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
        return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int ret = binary_search(arr,k,sz);
    if(ret == -1)
    {
        printf("找不到\n");
    }
    else
    {
        printf("找到了,下标是：%d\n",ret);
    }
    return 0;
}

/* //写一个函数判断是不是闰年
int is_leap_year(int y)
{
    if((y%4==0&&y%100!=0)||(y%400==0))
    return 1;
    else
    return 0;
}

int main()
{
    int year = 0;
    for(year=1000;year<=2000;year++)
    {
       if(is_leap_year(year) == 1)
       {
           printf("%d ",year);
       }
    }
    printf("\n");
    return 0;
}
/* //写一个函数判断一个数是不是素数
int is_prime(int x)
{
    int y = 0;
    for(y=2;y<=sqrt(x);y++)
    {
        if(x%y==0)
            return 0;
    }
            return 1;
}

int main()
{
    int i = 0;
    int j = 0;
    scanf("%d %d",&i,&j);
    for(i=i;i<=j;i++)
    {
        if(is_prime(i) == 1)
            printf("%d ",i);
    }
    printf("\n");
    return 0;
}
/*
void change1(int a,int b)
{
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;
}
void change2(int* a,int* b)
{
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("a = %d b = %d\n",a,b);
    change1(a, b);//传值调用 - 形参和实参分别占用不同的内存块，对形参的修改不会影响实参
    printf("a = %d b = %d\n",a,b);
    change2(&a,&b);//传址调用 - 函数外部创建变量的内存地址传递给函数参数 函数内部可以直接操作函数外部的变量
    printf("a = %d b = %d\n",a,b);
    return 0;
}
/*
 int getmax(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    int a = 10;
    int b = 20;
    int max = 0;
    max = getmax(a,b);
    printf("max = %d\n",max);
    return 0;
}




//-------------------------------------------------------------------

//memset - void* memset(void* ptr,int value,size_t num); //内存设置
/*
 int main()
{
    char arr[] = "xxx,i love u";
    memset(arr,'y', 1);
    memset(arr, 'z', 2);
    printf("%s\n",arr);
    return 0;
   
}
    
/*int main()
{
    char arr[] = "hello world";
    memset(arr, '*', 5); //把arr1前5个字符改为*
    printf("%s\n",arr);
    return 0;
}
//---------------------------------------------------------------------
 
/*
//strcpy,strlen
int main()
{
    char arr1[]="bit";
    char arr2[20]="***********";
    strcpy(arr2, arr1); //arr1是源地址，arr2是目的地址，目的地址会被覆盖，会把arr1中的\0也复制
    printf("%s\n",arr2);
    //strcpy - string copy - 字符串拷贝
    //strlen - string length -字符串长度
    return 0;
}
//---------------------------------------------------------------------

//RAND_MAX - 随机数 最大值为 - 2147483647
/*
 void game()
{
    int ret = 0;
    int guess = 0;
    //拿时间戳来设置随机数生成的起始点
    //time_t time(time_t *timer)
    ret = rand()%100+1;
    //printf("%d\n",ret);
    while(1)
    {
        printf("请猜数字:");
        scanf("%d",&guess);
        if(guess>ret)
        {
            printf("猜大了!\n");
        }
        else if (guess<ret)
        {
            printf("猜小了!\n");
        }
        else
        {
            printf("恭喜你猜对了!\n");
            break;
        }
    }
}

void menu()
{
    printf("*********************\n");
    printf("*** 1.paly 0.exit ***\n");
    printf("*********************\n");
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL)); //time为长整型，用()强制转换为整型
    //生成随机数 - 时间戳 - 当前时间与1970-1-1-00-00差值，单位为秒
    do
    {
        menu();
        printf("请选择>:");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误\n");
                break;
        }
    }
    while(input);
    return 0;
            
    
    //输出99乘法表
    /*
    int i = 0;
    for(i=1;i<=9;i++)
    {
        int j = 0;
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-2d ",i,j,i*j); //%2d - 两位右对齐； %-2d - 两位左对齐
        }
        printf("\n");
    }
    return 0;
     
    //十个数的最大值
    /*
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int max = arr[0];
    int i = 0;
    int sz =sizeof(arr)/sizeof(arr[0]);
    for(i = 1;i<=9;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    printf("max = %d\n",max);
    return 0;
    
    //计算1/1-1/2+1/3-1/4....+1/99-1/100的值
    /*
    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for(i=1;i<=100;i++)
    {
        sum += flag*1.0/i;
        flag = -flag;
    }
    printf("sum = %lf\n",sum);
    return 0;
    
    //1-100所有整数出现了多少个9
    /*
    int i = 0;
    int count = 0;
    for(i = 1;i<=100;i++)
    {
        if(i%10 == 9)
            count++;
        if(i/10 == 9)
        count++;
        
    }
    printf("count=%d\n",count);
    return 0;
    
    
    //打印100-200的素数
    /*
    //试除法优化
    int i = 0;
    int count = 0;
    for(i=100;i<=200;i+=2) //优化 - 排除偶数
    {
        int j = 0;
        for(j=2;j<=sqrt(i);j++) //优化 - sqrt - 开平方
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j > sqrt(i))
        {
            printf("%d ",i);
            count++;
        }
        
    }
    printf("\ncount=%d\n",count);
    return 0;
    
    /*
    //试除法
    int i = 0;
    int count = 0;
    for(i=100;i<=200;i++)
    {
        int j = 0;
        for(j = 2;j<i;j++) //试除法
        {
            if(i%j == 0)
            {
                break;
            }
        }
       if(j == i)
       {
           printf("%d\n",i);
           count++;
       }
    }
    printf("\ncount=%d\n",count);
    return 0;
    
    //打印1000-2000闰年
    /*
    int year = 0;
    int count = 0;
    for(year=1000;year<=2000;year++)
    {
        //if((year%4==0 && year%100!=0) || (year%400==0))
        if(year%4 == 0 && year%100 != 0)
        {
            printf("%d\n",year);
            count++;
        }
        else if (year%400 == 0)
        {
            printf("%d\n",year);
            count++;
        }
    }
    printf("\ncount=%d\n",count);
    return 0;
    
    //给定两个数，求最大公约数 - 辗转相除法
    /*
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d",&a,&b);
    while(c = a%b)
    {
        a = b;
        b = c;
    }
    printf("%d\n",b);
    return 0;
    
    
    //输出1-100三的倍数
    /*
    int i = 0;
    for(i = 1;i<=100;i++)
    {
        if(i%3 == 0)
            printf("%d ",i);
    }
    return 0;
     
     
    //三个数从大到小输出
    /*
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a<c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if(b<c)
    {
        int tmp =b;
        b = c;
        c = tmp;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
    
    //代码实现模拟用户登陆情景，只允许输入三次密码，密码正确则提示登录成功，三次都错误则退出；
    /*
    char password[20]= {0};
    int i = 0;
    for(i = 0; i<3; i++)
    {
        printf("请输入密码:>");
        scanf("%s",password);
        if(strcmp(password,"123456") == 0) //不能用==来比较两个字符串是否相等，应该使用一个库函数 - strcmp
        {
            printf("welcome\n");
            break;
        }
        else
            printf("密码错误\n");
    }
    if(i == 3)
        printf("密码错误\n");
    return 0;
     
    //实现多个字符从两端移动，向中间汇聚
    /*
    char arr1[] = "welcome to bit!!!!!!";
    char arr2[] = "********************";
    int left = 0;
   // int right = sizeof(arr1)/sizeof(arr1[0])-2;
    int right = strlen(arr1)-1;
    
    while(left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        left++;
        right--;
    }
    return 0;
    
    
    //在一个有序数组中查找具体的某个数字n    - 折半查找算法/二分查找算法
    /*
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
    
    while(left <= right)
    {
        int mid = (left + right)/2;
        if(arr[mid] > k)
        {
            right = mid - 1;
        }
        else if(arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            printf("找到了，下标是:%d\n",mid);
            break;
        }
    }
    if(left > right)
        printf("不存在");
  
    //计算1!+2!+.....+10!
    //方法2  比方法1少一个循环，效率高
    /*
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    for(n=1;n<=10;n++)
    {
        ret = ret * n;
        sum =sum + ret;
    }
    printf("%d\n",sum);
    return 0;
    
    //方法1
    /*
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum = 0;
    for(n=1;n<=10;n++)
    {
        int ret = 1;
        for(i=1;i<=n;i++)
        {
            ret = ret * i;
        }
        //n!
        sum =sum + ret;
    }
    printf("%d\n",sum);
    return 0;
    
    
    //计算n!
     
    /* //方法1
    int i = 0;
    int n = 0;
    int sum = 1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum * i;
    }
    printf("%d\n",sum);
    return 0;
    /*  //do while循环
   //------------------------------------------------------------------
     
    int i = 1;
    do
    {
        if(i == 5)
            continue;   // 1 2 3 4 死循环
        printf("%d ",i);
        i++;
    }
    while(i<=10);
    return 0;
    //-------------------------------------------------------------------
    
    /*
    int i = 0;
    int k = 0;
    for(i = 0,k = 0;k = 0;i++,k++) //k = 0 - 不是判断语句，而是赋值，k为假，导致根本没进入循环。
        k++;
    return 0;
    
    /* //for循环变种2
    int x,y;
    for(x = 0,y = 0;x<2 && y<5;++x,y++)
    {
        printf("hehe\n");
    }
    
   /* //for循环变种1
    int i = 0;
    int j = 0;
    for(;i<10;i++)
    {
        for(;j<10;j++)  // j第一次进来，打印 0 1 2 3 4 5 6 7 8 9 共10个hehe，但最后j++ = 10，导致外层循环i++进入for j循环 j的值为10，条件不成立；
        {
            printf("hehe\n"); //此时输出10个hehe；不要随意省略初始化部分
        }
    }
    
   /*
    int i = 0;
    for(i = 0;i<10;i++)
    {
        int j = 0;
        for(j = 0;j<10;j++)
        {
            printf("hehe\n"); //内外10次循环，打印100个hehe
        }
    }
    return 0;
    /*
    //for循环
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    for(i = 0;i<10;i++)  //建议for语句的循环控制变量的取值采用“前闭后开区间”的写法；因为此处10具有某些含义：10次循环、10次打印、10个元素
    {
        printf("%d\n",arr[i]);
    }
    return 0;
    
    
    /*
    int i = 0;
    for(i = 1;i <= 10;i++)
    {
        if(i == 5)
            continue;  //i=1为第一步，i<=10是第二步，continue是第三步，i++是第四步；输出结果为1 2 3 4 6 7 8 9 10
        printf("%d\n",i);
    }
    
    /*
    int i = 0;
    for(i = 1;i <= 10;i++)
    {
        if(i == 5)
            break;    //如果i=5跳出循环，输出结果为1 2 3 4
        printf("%d\n",i);
    }
    
    //用for循环输出1-10；
    /*
    int i = 0;
    for(i = 1;i <= 10;i++)
    {
        printf("%d\n",i);
    }
------------------------------------------------------
     
    /*
    int ch = 0;
    while((ch = getchar()) != EOF)
    {
        if(ch<'0' || ch>'9')  //只输出ASCII码中0-9之间的数字
            continue;
        putchar(ch);
    }
    return 0;
    /*
    int ch = 0;
    while((ch = getchar()) != EOF) //EOF - end of file -> -1
    {
        putchar(ch);
    }
    /*
    int ch = getchar(); //getchar()用于接收键盘输入的字符
    putchar(ch);        //输出字符
    printf("%c\n",ch);  //输出字符
    return 0;
    
    //continue在while循环中的作用是用于终止本次循环的，也就是本次循环中continue后面的代码不会再执行，而是直接跳转到while语句的判断部分，进行下一次循环的入口判断
    //break在while循环中的作用是只要遇到break，就停止后面的所有的循环，直接终止循环，所以while中的break是用于永久终止循环的
    /*
    int a = 1;
    while (a<=10)
    {
        a++;
        if(a == 5)
            continue; //输出结果为1 2 3 4 6 7 8 9 10 11
        printf("%d\n",a);
    }
    return 0;
    
    /*
    int a = 1;
    while (a<=10)
    {
        if(a == 5)
            continue; //当a=5时，回到while判断，导致死循环；输出结果为1 2 3 4 死循环了
        printf("%d\n",a);
        a++;
    }
    return 0;
    
    int a = 1;
    while (a<=10)
    {
    if(a == 5)
            break;  //如果a=5，跳出，输出结果为1 2 3 4
        printf("%d\n",a);
        a++;
    }
    return 0;
    //----------------------------------------------
     
    /* switch case 语句
    int n = 1;
    int m = 2;
    switch (n)
    {
        case 1:
            m++;   //m=3
        case 2:
            n++;   //n=2
        case 3:
            switch (n)   //switch 允许嵌套使用
            {
                case 1:
                    n++;
                case 2:
                    m++; //m=4
                    n++; //n=3
                    break;
            }
        case 4:
            m++;  //m=5
            break;
        default:
            break;
    }
    printf("m = %d,n = %d\n",m,n);
    return 0;
 
 /*
  int main()
 {
     char grade = 0;
     scanf("%d",&grade);
     int x ;
     x= grade/10;
     switch(x)
     {
         case 10:
         case 9:
             printf("A\n");
             break;;
         case 8:
             printf("B\n");
             break;;
         case 7:
             printf("C\n");
             break;
         case 6:
             printf("D\n");
             break;;
         default:
             printf("E\n");
             break;
    //---------------------------------------------------
    
    /*
    //判断一个数是否为奇数
    //输出1-100之间的奇数
    int i = 1;
    while (i<=100)
    {
        if(i%2 ==1)
            printf(" %d\n",i);
            i++;
    }
    return 0;
    /*
     int i = 1;
    while (i<=100)
    {
        printf(" %d\n",i);
     i+=2;
    }
    return 0;
     
//----------------------------------------------
 /*
    int age = 40;
    if (age < 18)
        printf("未成年\n");
    else if (age >=18 && age<28)
        printf("青年\n");
    else if (age > 28 && age < 38)
        printf("中年\n");
    else
        printf("中老年\n");
    return 0;
    /*
    int age = 20;
    if (age<18)
        printf("未成年\n");
    else
        printf("成年\n");
    /*
     int age = 10;
    //int age = 20;
    if(age<18)
        printf("未成年\n");
    
    //--------------------------------------------------
    //结构体 - 我们自己创造出来的一种类型 - 描述复杂对象
    //创建结构体类型
   /*
    struct Book
    {
        char name[20];
        short price;
    };// 分号不可缺少
    int main()
    {
        //利用结构体类型 - 创建一个该类型的结构体变量
        struct Book b1 = {"C语言程序设计",55};
        struct Book* p = &b1;
        //利用p打印出书名和价格
        // .符号 - 结构体变量、成员
        // ->符号 - 结构体指针->成员、变量
        printf("%s\n",p->name);
        printf("%d\n",p->price);
        /*
        printf("书名:%s\n",b1.name);
        printf("价格:%d\n",b1.price);
        b1.price = 15;//price是一个变量，可以直接改
        strcpy(b1.name,"C++");//name是一个数组 strcpy - string copy 字符串拷贝 - 需要库函数 - string.h
        printf("修改后的价格:%d\n",b1.price);
        printf("修改后的书名:%s\n",b1.name);
        return 0;
    }
    //----------------------------------------------------------
    /*
    char ch = 'a';
    char *p = &ch;
    printf("%d\n",sizeof(p));
    return 0;
    //指针
    //要懂指针先了解内存 -
    //如何产生地址（空间） - 一个空间就是一个字节（byte）
    //32位 - 32根地址线/数据线
    //       正电 负电
    //        1   0
    //000000000000000000000000000000000 - 11111111111111111111111111111111 一共2^32个地址
    /*
    int a = 10;//在内存里申请4个字节
    int* p = &a;//取地址    用int型是因为a是int型
    //有一种变量是用来存放地址的 - 指针变量
    //指针大小在32位平台是4个byte，在64位平台是8个byte
    *p = 20;// * - 解引用操作符/间接访问操作符
    printf("%p\n",&a);
    printf("%p\n",p);
    printf("%d\n",a);
    return 0;
    
    //---------------------------------------------------------------
    
    //#define 定义常量
    //#define MAX 100 - MAX的值为100
    //#define 定义宏（带参数）
    //#define MAX(X,Y) (X>Y?X:Y)
    
    //常见关键字 - 关键字不能与变量名冲突
    //auto break case char const continue default do double else enum
    //extern(引用外部符号) float for goto if int long register(寄存器关键字) return
    //signed unsigned short sizeof static struct switch typedef(类型定义） union(联合体) void volatile while
    //register 计算机存储数据   register int a = 10; //a使用的频率高，仅是建议把a放到寄存器，能不能放取决于编译器的判断
    //        ｜  寄存器     ｜
    //        ｜  高速缓存   ｜
    //        ｜  内存      ｜
    //        ｜  硬盘      ｜ 从下往上访问速度越来越快，空间越来越小
    
   /*
    //typedef - 类型定义/类型重定义
    typedef unsigned int uint_32;
    int main()
    {
    unsigned int num1 = 10;
    uint_32 num2 = 20;
    //以上两个变量的类型是一样的
    return 0;
    }
    */
    
    /*
     //static 修饰局部变量 - 使局部变量的生命周期变长
     //static 修饰全局变量 - 改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
     //static 修饰函数 - 改变了函数的链接属性
     //普通的函数具有外部连接属性，当被static关键字修饰变成了内部属性
    void test()
    {
        //int a =1; //输出结果为2 2 2 2 2
        static int a = 1;//此时a是一个静态的局部变量，输出结果为2 3 4 5 6
        a++;
        printf("a= %d\n",a);
    }
    int main()
    {
    int i = 0;
    while (i<5)
    {
        test()
        i++;
    }
        return 0;
    }
    //-----------------------------------------------------
    
    //逗号表达式
    //exp1,exp2,exp3,...expN
    /*
    int arr[10] = {0};//[] - 下标引用操作符
    return 0;
     */
     
    /*
    //条件操作符（三目操作符）
    //exp1 ? exp2 : exp3; --exp为表达式，而不是一个数值
    //表达式1的结果为真，则表达式2要执行且为整个表达式的结果
    //表达式1的结果为假，则表达式3要执行且为整个表达式的结果
    int a = 100;
    //int a = 10;
    int b = 20;
    int max = 0;
    max = (a>b?a:b);
    printf("max = %d\n",max);
    return 0;
    
    /*
    //真-非0,假-0
    int a = 3;
    int b = 5;
    //int c = a && b; //&&--逻辑与
    int c = a || b; //||--逻辑或
    printf("c = %d\n",c);
    return 0;
    
    //> >= < <= != ==
    
    /*
    int a = (int)3.14; //3.14是double，a是整型,(int)强制转换为整型,()---强制转换
    return 0;
     
/*  int a = 10;
    //int b = a++;//后置++，先使用，再++  //11 10
    //int b = ++a;//前置++，先++，再使用  //11 11
    //int b = a--;//后置--，先使用，再--  //9 10
    //int b = --a;//前置--，先--，再使用  //9 9
    printf("a=%d b=%d\n",a,b);
     
    /*
    int a = 0; //00000000000000000000000000000000
    int b = ~a;//11111111111111111111111111111111    ～的意思是按（2进制）位取反
    printf("%d\n",b); //输出结果为1而不是 2^32-1，原因：负数在内存中存储的时候，存储的是二进制的补码；
    //实际上输出的二进制为1000000000000000000000000000001 */
    
    /*
     int a = 10;
    int arr[] = {1,2,3,4,5,6};
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof a);
    printf("%d\n", sizeof(arr));
    printf("%d\n",sizeof(arr) / sizeof(arr[0]));
     */
    
/*
int Max(int x,int y)
{
    if(x>y)
    return x;
    else
        return y;
}
int main()
{
    int num1 = 0;
    int num2 = 0;
    int max = 0;
    scanf("%d%d",&num1,&num2);
    max = Max(num1,num2);
    printf(" max = %d\n",max);
     */
    
    //a = a+10,a += 10,两种写法一样；
    //复合赋值符
    //+= -= *= /= %= >>= <<= &= |= ^=
    /*
    int a = 10;
    a = 10;//=-赋值； ==-判断相等；
     */
     
    //(2进制)位操作
    //& 按位与:同为1，异为0；
    //| 按位或：有1为1；
    //^ 按位异或：同为0，异为1；
    /*
    int a=3; //0011
    int b=5; //0101
    int c=a&b; //0001
    printf("%d\n",c);
    */

    //%-取模（余数） /-取商
    //移位（ 2进制）操作符
    //<<左移
    //>>右移动
    /*
    int a=1;//整型1占4个字节32bit位：00000000000000000000000000000001
    int b=a<<1;//00000000000000000000000000000010
    printf("%d\n",b);
    printf("%d\n",a);
    
    /* int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    while(i<10)
    {
        printf("%d ",arr[i]);
        i++;
    }
     
   /* int line=0;
    printf("欢迎加入bit\n");
    while(line<20000){
        printf("请输入一行代码%d\n",line);
        line++;
    }
    printf("好offer\n");
     
    /*int num1=0;
    int num2=0;
    int sum=0;
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    printf("%d\n",sum);
     
   /* int input=0;
    printf("欢迎加入比特\n");
    printf("你想学习还是摆烂(1/0):\n");
    scanf("%d",&input);
    if(input == 1)
        {
        printf("给你一个好offer！\n");
        }
else
{
    printf("卖红薯\n");
}
    
    return 0;
     
}
*/








