///指针


//指针的主题，我们在初级阶段的《指针》章节已经接触过了，我们知道了指针的概念：
//1. 指针就是个变量，用来存放地址，地址唯一标识一块内存空间。
//2. 指针的大小是固定的4 / 8个字节（32位平台 / 64位平台）。
//3. 指针是有类型，指针的类型决定了指针的 + -整数的步长，指针解引用操作的时候的权限。
//4. 指针的运算。

//#include <stdio.h>;


//void test(int arr[])
//{
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr1[10] = {0};
//	test(arr1);
//	return 0;
//
//}

//1.字符指针
//在指针的类型中我们知道有一种指针类型为字符指针 char*;

//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'w';
//    return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//"abcdef"是一个常量字符串
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//}

//int main()
//{
//    const char* pstr = "hello bit.";//这里是把一个字符串放到pstr指针变量里了吗？
//    printf("%s\n", pstr);
//    return 0;
//}
//特别容易让同学以为是把字符串 hello bit 放到字符指针 pstr 里了，但是 / 本质是把字符串 hello
//bit.首字符的地址放到了pstr中。

#include <stdio.h>
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}
//这里str3和str4指向的是一个同一个常量字符串。C / C++会把常量字符串存储到单独的一个内存区域，当
//几个指针。指向同一个字符串的时候，他们实际会指向同一块内存。但是用相同的常量字符串去初始化
//不同的数组的时候就会开辟出不同的内存块。所以str1和str2不同，str3和str4不同。

//2 指针数组
//指针数组其实是数组,用来存放指针的
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* p[10];//存放整形指针的数组
//	int* p1[10];//存放整字符指针的数组
//}

//int main()
//{
//	int a = 10;
//	int b = 10;
//	int c = 10;
//	int d = 20;
//	int* arr[4] = { &a,&b,&c,&d };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d", *(arr[i]));
//
//	}
//	return 0;
//
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };//存了arr1，Aarr2,arr3,三个数组的首元素的地址
//	for (int i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5;j++)
//		{
//			printf("%d", *(parr[i] + j));//找到数组的地址，解引用操作就是地址的东西
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针
//数组指针是指针？还是数组？
//答案是：指针。

//int main()
//{
//	int* p = NULL;//p是整型指针，指向整型的指针。可以存放整型的地址
//	char* pc = NULL;
//	//数组指针，指向数组的指针。可以存放数组 的地址
//	int arr[10] = { 0 };
//	//arr-首元素的地址（数组名是首元素的地址）
//	//&arr[1]-首元素的地址
//	//&arr-数组的地址
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,67,7,8,9 };
//	int (*p)[10] = &arr;//数组的指针要存起来
//	//上面的p就是数组指针。
//
//}

//int* p1[10];
//int(*p2)[10];
////p1, p2分别是什么？
//int(*p)[10];
////解释：p先和*结合，说明p是一个指针变量，然后指着指向的是一个大小为10个整型的数组。所以p是一个
//指针，指向一个数组，叫数组指针。
////这里要注意：[]的优先级要高于*号的，所以必须加上（）来保证p先和*结合。


//3.2 & 数组名VS数组名

//arr 和& arr 分别是啥？
//我们知道arr是数组名，数组名表示数组首元素的地址。



//3.3 数组指针的使用（数字指针要用到二维数组以上才好用）
//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//    int(*p)[10] = &arr;//把数组arr的地址赋值给数组指针变量p
//    //但是我们一般很少这样写代码
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\n", (*p)[i]);//p就是一个数组的地址，解引用操作就可以得到数组的名称
//    }
//    return 0;
//}



#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col)
//{
//    int i = 0;
//    for (i = 0; i < row; i++)
//    {
//        int j = 0;
//        for (j = 0; j < col; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//
//printf("\n");
//   }
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//    int i = 0;
//    for (i = 0; i < row; i++)
//    {
//        int j = 0;
//        for (j = 0; j < col; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//    print_arr1(arr, 3, 5);
//    //数组名arr，表示首元素的地址
//    //但是二维数组的首元素是二维数组的第一行
//    //所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//    //可以数组指针来接收
//    print_arr2(arr, 3, 5);
//    return 0;
//}


//4. 数组参数、指针参数

//4.1 一维数组传参

//#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int* arr)//ok?
//{}
//void test2(int* arr[20])//ok?
//{}
//void test2(int** arr)//ok?
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//4.2 二维数组传参
//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？
//{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok？
//{}
//void test(int* arr[5])//ok？
//{}
//void test(int(*arr)[5])//ok？
//{}
//void test(int** arr)//ok？
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//4.3 一级指针传参
//
//#include <stdio.h>
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}
 



//5 函数指针——指向函数的指针,是存放函数地址的指针

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	//printf("%p\n", &Add);//取地址函数名和函数名都是函数的地址
//	//printf("%p\n", Add);
//
//	int(*pa)(int, int) = Add;
//
//	return 0;
//}



//6. 函数指针数组

//数组是一个存放相同类型数据的存储空间，那我们已经学习了指针数组，
//int* arr[10];
////数组的每个元素是int*

//那要把函数的地址存到一个数组中，那这个数组就叫函数指针数组，那函数指针的数组如何定义呢？
//int (*parr1[10])();
//int* parr2[10]();
//int (*)() parr3[10];
//
//答案是：parr1
//parr1 先和[] 结合，说明 parr1是数组，数组的内容是什么呢？
//是 int (*)() 类型的函数指针。

//函数指针数组的用途：转移表


//#include <stdio.h>
//int add(int a, int b)
//{
//    return a + b;
//}
//int sub(int a, int b)
//{
//    return a - b;
//}
//int mul(int a, int b)
//{
//    return a * b;
//}
//int div(int a, int b)
//{
//    return a / b;
//}
//int main()
//{
//    int x, y;
//    int input = 1;
//    int ret = 0;
//    do
//    {
//        printf("*************************\n");
//        printf(" 1:add           2:sub \n");
//        printf(" 3:mul           4:div \n");
//        printf("*************************\n");
//        printf("请选择：");
//        scanf_s("%d", &input);
//        switch (input)
//        {
//
//
//
// case 1:
//     printf("输入操作数：");
//     scanf_s("%d %d", &x, &y);
//     ret = add(x, y);
//     printf("ret = %d\n", ret);
//     break;
// case 2:
//     printf("输入操作数：");
//     scanf_s("%d %d", &x, &y);
//     ret = sub(x, y);
//     printf("ret = %d\n", ret);
//     break;
// case 3:
//     printf("输入操作数：");
//     scanf_s("%d %d", &x, &y);
//     ret = mul(x, y);
//     printf("ret = %d\n", ret);
//     break;
// case 4:
//     printf("输入操作数：");
//     scanf_s("%d %d", &x, &y);
//     ret = div(x, y);
//     printf("ret = %d\n", ret);
//     break;
// case 0:
//     printf("退出程序\n");
//     break;
// default:
//     printf("选择错误\n");
//     break;
//       }
// } while (input);
//
// return 0;
//}




//int Add(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//
//
//int mian()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int (*pfArr[4])(int,int) = &pfArr;//pfArr是一个指针——函数的指针数组
//	int(*(*ppArr)[4])(int, int) = &pfArr;//ppArr是指向函数数组的指针。
//	//ppfArr是一个数组指针，指针指向的数组的四个元素，指向的数组的每个元素类型是一个函数指针， int（*）（int， int）


//}

//8. 回调函数

//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个
//函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数
//的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进
//行响应。



//首先演示一下qsort函数的使用：
//#include <stdio.h>
////qosrt函数的使用者得实现一个比较函数
//int int_cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1 - *(int*)p2);
//}
//int main()
//{
//    int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    int i = 0;
//
//    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

//使用回调函数，模拟实现qsort（采用冒泡的方式）。
//注意：这里第一次使用 void* 的指针，讲解 void* 的作用。

//qsort是一个库函数，实现了快速排序的函数



#include <stdio.h>
#include<stdlib.h>

//int cmp_int(const void* e1, const void* e2)//void*类型的指针可以接受任意类型的地址，为了可以排序各种类型的数据，但是void*的指针不能进行解引用操作。
//{
//	//比较两个整型函数
//	return *(int*)e1 - *(int*)e2;//强制转换类型
//
//}
//
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,1,0,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
// 第一个参数，待排序数组的首元素的地址
// 第二个参数，待排序元素的个数
// 第三个参数，待排序数组每个元素的大小—单位是字节
// 第四个参数，是函数指针，比较两个元素的函数所用的地址——这个函数需要使用者自己实现
//            函数指针的两个参数是，待比较的两个元素的地址。
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d\n", arr[i]);
//
//	}
//
//}
//
//int main()
//{
//
//	test1();
//
//	return 0;
//}



///练习题

//int a[] = { 1,2,3,4 };
//printf("%d\n", sizeof(a));
////计算数数组大小，单位是是字节，4*4=16
//printf("%d\n", sizeof(a + 0));//4，加上0还是表示首元素的地址
////但是sizeof（数组名）——表示的是整个数组，----&（数组名）也表示整个数组
////其他的数组名表示的都是首元素的地址
//printf("%d\n", sizeof(*a));//4
////a是首元素的地址，*a就是首元素，
//printf("%d\n", sizeof(a + 1));//4
////a+1是第二个元素的地址
//printf("%d\n", sizeof(a[1]));//4
////第二个元素的大小
//printf("%d\n", sizeof(&a));//4
////&a，取出的是数组的地址，地址的大小就是4个或者8个字节，看自己的电脑是啥样的。
//printf("%d\n", sizeof(*&a));//16,取地址在解引用，访问的是整个数组。
//printf("%d\n", sizeof(&a + 1));//4
////只要是取地址，就是4或者8
//printf("%d\n", sizeof(&a[0]));//4
//printf("%d\n", sizeof(&a[0] + 1));//4.只要是取地址，没有解引用操作就是4或者8



//char arr[] = { 'a','b','c','d','e','f' };
//printf("%d\n", sizeof(arr));//6
////sizeof计算的数组的大小，
//printf("%d\n", sizeof(arr + 0));//4
////首元素的地址，arr+0还是首元素的地址
//printf("%d\n", sizeof(*arr));//1
////arr是首元素的地址，解引用是第一个元素的大小，一个字符，大小一个字节
//printf("%d\n", sizeof(arr[1]));//1
//printf("%d\n", sizeof(&arr));//4,取地址不接引用就是4或者8.
//printf("%d\n", sizeof(&arr + 1));//4
//printf("%d\n", sizeof(&arr[0] + 1));//4
//printf("%d\n", strlen(arr));//随机值
//
////,strlen是求字符串的长度的，找到/0需要,但是这个没有找到/0
//printf("%d\n", strlen(arr + 0));//随机值
//printf("%d\n", strlen(*arr));//错误,代码是错误的
//printf("%d\n", strlen(arr[1]));//代码也是错误的
//printf("%d\n", strlen(&arr));//随机值，找不到/0
//printf("%d\n", strlen(&arr + 1));//随机值
//printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//char arr[] = "abcdef";
//printf("%d\n", sizeof(arr));//7,sizeof（arr）是计算数组的大小
////sizeof的是计算空间的大小，"abcdef/0"
//printf("%d\n", sizeof(arr + 0));//首元素的地址，4个字节
//printf("%d\n", sizeof(*arr));//1,直接的是首元素的地址
//printf("%d\n", sizeof(arr[1]));//1，
//printf("%d\n", sizeof(&arr))//4
//printf("%d\n", sizeof(&arr + 1));//4
//printf("%d\n", sizeof(&arr[0] + 1));//4
//
//
//printf("%d\n", strlen(arr));//6,不算/0
//printf("%d\n", strlen(arr + 0));//6
//printf("%d\n", strlen(*arr));//错误的程序
//printf("%d\n", strlen(arr[1]));//错误的程序
//printf("%d\n", strlen(&arr));//6，给了起始位置的地址，在起始位置向后找内容。
//printf("%d\n", strlen(&arr + 1));//随机值
//printf("%d\n", strlen(&arr[0] + 1));//随机值
//
//
//
//char* p = "abcdef";//把常量字符串“abcdef”的a的地址放入了p中。
//printf("%d\n", sizeof(p));//4,因为p是地址。
//printf("%d\n", sizeof(p + 1));//4  
//printf("%d\n", sizeof(*p));//1,解引用的第一个字符
//printf("%d\n", sizeof(p[0]));//1,因为arr[0]=*(arr+0),所以p[0]==*(p+0)=='a'
//printf("%d\n", sizeof(&p));//4
//printf("%d\n", sizeof(&p + 1));//4
//printf("%d\n", sizeof(&p[0] + 1));//4,b的地址
//
//printf("%d\n", strlen(p));//6
//printf("%d\n", strlen(p + 1));//5
//printf("%d\n", strlen(*p));//报错，strlen只能放地址，只要放的不是地址就会报错
//printf("%d\n", strlen(p[0]));//报错，放的不是地址
//printf("%d\n", strlen(&p));//随机值
//printf("%d\n", strlen(&p + 1));//随机值
//printf("%d\n", strlen(&p[0] + 1));//5



////二维数组
//int a[3][4] = { 0 };
//printf("%d\n", sizeof(a));//3*4*4=48
//printf("%d\n", sizeof(a[0][0]));//4
//printf("%d\n", sizeof(a[0]));//16----这是第一行的数组名,4*4=16 
//printf("%d\n", sizeof(a[0] + 1));//4,a[0]是a[0][1]的地址，所以是4
////a[0]是第一行的数组名，数组名此时鸟是首元素的地址，
//printf("%d\n", sizeof(*(a[0] + 1)));//4，第一行第二个元素的地址解引用操作。
//printf("%d\n", sizeof(a + 1));//4
//printf("%d\n", sizeof(*(a + 1)));//16
//printf("%d\n", sizeof(&a[0] + 1));//4
//printf("%d\n", sizeof(*(&a[0] + 1)));
//printf("%d\n", sizeof(*a));
//printf("%d\n", sizeof(a[3]));



//总结：
//数组名的意义：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。




//指针的笔试题

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);//数组的地址加一跳过整个数组，
//    printf("%d,%d", *(a + 1), *(ptr - 1));//a是首元素的地址，加一是2，那个退1，是5.
//    return 0;
//}
////程序的结果是什么？

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;//结构体指针，
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//加一，跳过一个结构题0x1000000+20
//	printf("%p\n", (unsigned long)p + 0x1);//强制装换就是+1
//	printf("%p\n", (unsigned int*)p + 0x1);//+4
//	return 0;
//}


//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);//跳出了，下面的然后在回来，输出4
//    int* ptr2 = (int*)((int)a + 1);//
//    printf("%x,%x", ptr1[-1], *ptr2);//4，18进制数字打印
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//这是逗号表达式，是后面的那个书的结果
//    int* p;
//    p = a[0];//a[0]是第一行的数组名，数组名表示首元素的地址，即a[0][0]
//    printf("%d", p[0]);
//    return 0;
//}


int main()
{
    int a[5][5];//创建5行5列的数组
    int(*p)[4];//指针数组，有4个元素。
    p = a;//第一行的数组，a和p的类型不一样
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    return 0;
}
