///ָ��


//ָ������⣬�����ڳ����׶εġ�ָ�롷�½��Ѿ��Ӵ����ˣ�����֪����ָ��ĸ��
//1. ָ����Ǹ�������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ䡣
//2. ָ��Ĵ�С�ǹ̶���4 / 8���ֽڣ�32λƽ̨ / 64λƽ̨����
//3. ָ���������ͣ�ָ������;�����ָ��� + -�����Ĳ�����ָ������ò�����ʱ���Ȩ�ޡ�
//4. ָ������㡣

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

//1.�ַ�ָ��
//��ָ�������������֪����һ��ָ������Ϊ�ַ�ָ�� char*;

//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
//    *pc = 'w';
//    return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//"abcdef"��һ�������ַ���
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//}

//int main()
//{
//    const char* pstr = "hello bit.";//�����ǰ�һ���ַ����ŵ�pstrָ�����������
//    printf("%s\n", pstr);
//    return 0;
//}
//�ر�������ͬѧ��Ϊ�ǰ��ַ��� hello bit �ŵ��ַ�ָ�� pstr ���ˣ����� / �����ǰ��ַ��� hello
//bit.���ַ��ĵ�ַ�ŵ���pstr�С�

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
//����str3��str4ָ�����һ��ͬһ�������ַ�����C / C++��ѳ����ַ����洢��������һ���ڴ����򣬵�
//����ָ�롣ָ��ͬһ���ַ�����ʱ������ʵ�ʻ�ָ��ͬһ���ڴ档��������ͬ�ĳ����ַ���ȥ��ʼ��
//��ͬ�������ʱ��ͻῪ�ٳ���ͬ���ڴ�顣����str1��str2��ͬ��str3��str4��ͬ��

//2 ָ������
//ָ��������ʵ������,�������ָ���
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	int* p[10];//�������ָ�������
//	int* p1[10];//������ַ�ָ�������
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
//	int* parr[] = { arr1,arr2,arr3 };//����arr1��Aarr2,arr3,�����������Ԫ�صĵ�ַ
//	for (int i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5;j++)
//		{
//			printf("%d", *(parr[i] + j));//�ҵ�����ĵ�ַ�������ò������ǵ�ַ�Ķ���
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ��
//����ָ����ָ�룿�������飿
//���ǣ�ָ�롣

//int main()
//{
//	int* p = NULL;//p������ָ�룬ָ�����͵�ָ�롣���Դ�����͵ĵ�ַ
//	char* pc = NULL;
//	//����ָ�룬ָ�������ָ�롣���Դ������ �ĵ�ַ
//	int arr[10] = { 0 };
//	//arr-��Ԫ�صĵ�ַ������������Ԫ�صĵ�ַ��
//	//&arr[1]-��Ԫ�صĵ�ַ
//	//&arr-����ĵ�ַ
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,67,7,8,9 };
//	int (*p)[10] = &arr;//�����ָ��Ҫ������
//	//�����p��������ָ�롣
//
//}

//int* p1[10];
//int(*p2)[10];
////p1, p2�ֱ���ʲô��
//int(*p)[10];
////���ͣ�p�Ⱥ�*��ϣ�˵��p��һ��ָ�������Ȼ��ָ��ָ�����һ����СΪ10�����͵����顣����p��һ��
//ָ�룬ָ��һ�����飬������ָ�롣
////����Ҫע�⣺[]�����ȼ�Ҫ����*�ŵģ����Ա�����ϣ�������֤p�Ⱥ�*��ϡ�


//3.2 & ������VS������

//arr ��& arr �ֱ���ɶ��
//����֪��arr������������������ʾ������Ԫ�صĵ�ַ��



//3.3 ����ָ���ʹ�ã�����ָ��Ҫ�õ���ά�������ϲź��ã�
//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//    int(*p)[10] = &arr;//������arr�ĵ�ַ��ֵ������ָ�����p
//    //��������һ���������д����
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\n", (*p)[i]);//p����һ������ĵ�ַ�������ò����Ϳ��Եõ����������
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
//    //������arr����ʾ��Ԫ�صĵ�ַ
//    //���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//    //�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//    //��������ָ��������
//    print_arr2(arr, 3, 5);
//    return 0;
//}


//4. ���������ָ�����

//4.1 һά���鴫��

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


//4.2 ��ά���鴫��
//void test(int arr[3][5])//ok��
//{}
//void test(int arr[][])//ok��
//{}
//void test(int arr[][5])//ok��
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//ok��
//{}
//void test(int* arr[5])//ok��
//{}
//void test(int(*arr)[5])//ok��
//{}
//void test(int** arr)//ok��
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//4.3 һ��ָ�봫��
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
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}
 



//5 ����ָ�롪��ָ������ָ��,�Ǵ�ź�����ַ��ָ��

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
//	//printf("%p\n", &Add);//ȡ��ַ�������ͺ��������Ǻ����ĵ�ַ
//	//printf("%p\n", Add);
//
//	int(*pa)(int, int) = Add;
//
//	return 0;
//}



//6. ����ָ������

//������һ�������ͬ�������ݵĴ洢�ռ䣬�������Ѿ�ѧϰ��ָ�����飬
//int* arr[10];
////�����ÿ��Ԫ����int*

//��Ҫ�Ѻ����ĵ�ַ�浽һ�������У����������ͽк���ָ�����飬�Ǻ���ָ���������ζ����أ�
//int (*parr1[10])();
//int* parr2[10]();
//int (*)() parr3[10];
//
//���ǣ�parr1
//parr1 �Ⱥ�[] ��ϣ�˵�� parr1�����飬�����������ʲô�أ�
//�� int (*)() ���͵ĺ���ָ�롣

//����ָ���������;��ת�Ʊ�


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
//        printf("��ѡ��");
//        scanf_s("%d", &input);
//        switch (input)
//        {
//
//
//
// case 1:
//     printf("�����������");
//     scanf_s("%d %d", &x, &y);
//     ret = add(x, y);
//     printf("ret = %d\n", ret);
//     break;
// case 2:
//     printf("�����������");
//     scanf_s("%d %d", &x, &y);
//     ret = sub(x, y);
//     printf("ret = %d\n", ret);
//     break;
// case 3:
//     printf("�����������");
//     scanf_s("%d %d", &x, &y);
//     ret = mul(x, y);
//     printf("ret = %d\n", ret);
//     break;
// case 4:
//     printf("�����������");
//     scanf_s("%d %d", &x, &y);
//     ret = div(x, y);
//     printf("ret = %d\n", ret);
//     break;
// case 0:
//     printf("�˳�����\n");
//     break;
// default:
//     printf("ѡ�����\n");
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
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int (*pfArr[4])(int,int) = &pfArr;//pfArr��һ��ָ�롪��������ָ������
//	int(*(*ppArr)[4])(int, int) = &pfArr;//ppArr��ָ���������ָ�롣
//	//ppfArr��һ������ָ�룬ָ��ָ���������ĸ�Ԫ�أ�ָ��������ÿ��Ԫ��������һ������ָ�룬 int��*����int�� int��


//}

//8. �ص�����

//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��
//�����������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú���
//��ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���������
//����Ӧ��



//������ʾһ��qsort������ʹ�ã�
//#include <stdio.h>
////qosrt������ʹ���ߵ�ʵ��һ���ȽϺ���
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

//ʹ�ûص�������ģ��ʵ��qsort������ð�ݵķ�ʽ����
//ע�⣺�����һ��ʹ�� void* ��ָ�룬���� void* �����á�

//qsort��һ���⺯����ʵ���˿�������ĺ���



#include <stdio.h>
#include<stdlib.h>

//int cmp_int(const void* e1, const void* e2)//void*���͵�ָ����Խ����������͵ĵ�ַ��Ϊ�˿�������������͵����ݣ�����void*��ָ�벻�ܽ��н����ò�����
//{
//	//�Ƚ��������ͺ���
//	return *(int*)e1 - *(int*)e2;//ǿ��ת������
//
//}
//
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,1,0,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
// ��һ���������������������Ԫ�صĵ�ַ
// �ڶ���������������Ԫ�صĸ���
// ����������������������ÿ��Ԫ�صĴ�С����λ���ֽ�
// ���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�صĺ������õĵ�ַ�������������Ҫʹ�����Լ�ʵ��
//            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ��
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



///��ϰ��

//int a[] = { 1,2,3,4 };
//printf("%d\n", sizeof(a));
////�����������С����λ�����ֽڣ�4*4=16
//printf("%d\n", sizeof(a + 0));//4������0���Ǳ�ʾ��Ԫ�صĵ�ַ
////����sizeof����������������ʾ�����������飬----&����������Ҳ��ʾ��������
////��������������ʾ�Ķ�����Ԫ�صĵ�ַ
//printf("%d\n", sizeof(*a));//4
////a����Ԫ�صĵ�ַ��*a������Ԫ�أ�
//printf("%d\n", sizeof(a + 1));//4
////a+1�ǵڶ���Ԫ�صĵ�ַ
//printf("%d\n", sizeof(a[1]));//4
////�ڶ���Ԫ�صĴ�С
//printf("%d\n", sizeof(&a));//4
////&a��ȡ����������ĵ�ַ����ַ�Ĵ�С����4������8���ֽڣ����Լ��ĵ�����ɶ���ġ�
//printf("%d\n", sizeof(*&a));//16,ȡ��ַ�ڽ����ã����ʵ����������顣
//printf("%d\n", sizeof(&a + 1));//4
////ֻҪ��ȡ��ַ������4����8
//printf("%d\n", sizeof(&a[0]));//4
//printf("%d\n", sizeof(&a[0] + 1));//4.ֻҪ��ȡ��ַ��û�н����ò�������4����8



//char arr[] = { 'a','b','c','d','e','f' };
//printf("%d\n", sizeof(arr));//6
////sizeof���������Ĵ�С��
//printf("%d\n", sizeof(arr + 0));//4
////��Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ
//printf("%d\n", sizeof(*arr));//1
////arr����Ԫ�صĵ�ַ���������ǵ�һ��Ԫ�صĴ�С��һ���ַ�����Сһ���ֽ�
//printf("%d\n", sizeof(arr[1]));//1
//printf("%d\n", sizeof(&arr));//4,ȡ��ַ�������þ���4����8.
//printf("%d\n", sizeof(&arr + 1));//4
//printf("%d\n", sizeof(&arr[0] + 1));//4
//printf("%d\n", strlen(arr));//���ֵ
//
////,strlen�����ַ����ĳ��ȵģ��ҵ�/0��Ҫ,�������û���ҵ�/0
//printf("%d\n", strlen(arr + 0));//���ֵ
//printf("%d\n", strlen(*arr));//����,�����Ǵ����
//printf("%d\n", strlen(arr[1]));//����Ҳ�Ǵ����
//printf("%d\n", strlen(&arr));//���ֵ���Ҳ���/0
//printf("%d\n", strlen(&arr + 1));//���ֵ
//printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//char arr[] = "abcdef";
//printf("%d\n", sizeof(arr));//7,sizeof��arr���Ǽ�������Ĵ�С
////sizeof���Ǽ���ռ�Ĵ�С��"abcdef/0"
//printf("%d\n", sizeof(arr + 0));//��Ԫ�صĵ�ַ��4���ֽ�
//printf("%d\n", sizeof(*arr));//1,ֱ�ӵ�����Ԫ�صĵ�ַ
//printf("%d\n", sizeof(arr[1]));//1��
//printf("%d\n", sizeof(&arr))//4
//printf("%d\n", sizeof(&arr + 1));//4
//printf("%d\n", sizeof(&arr[0] + 1));//4
//
//
//printf("%d\n", strlen(arr));//6,����/0
//printf("%d\n", strlen(arr + 0));//6
//printf("%d\n", strlen(*arr));//����ĳ���
//printf("%d\n", strlen(arr[1]));//����ĳ���
//printf("%d\n", strlen(&arr));//6��������ʼλ�õĵ�ַ������ʼλ����������ݡ�
//printf("%d\n", strlen(&arr + 1));//���ֵ
//printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//
//
//char* p = "abcdef";//�ѳ����ַ�����abcdef����a�ĵ�ַ������p�С�
//printf("%d\n", sizeof(p));//4,��Ϊp�ǵ�ַ��
//printf("%d\n", sizeof(p + 1));//4  
//printf("%d\n", sizeof(*p));//1,�����õĵ�һ���ַ�
//printf("%d\n", sizeof(p[0]));//1,��Ϊarr[0]=*(arr+0),����p[0]==*(p+0)=='a'
//printf("%d\n", sizeof(&p));//4
//printf("%d\n", sizeof(&p + 1));//4
//printf("%d\n", sizeof(&p[0] + 1));//4,b�ĵ�ַ
//
//printf("%d\n", strlen(p));//6
//printf("%d\n", strlen(p + 1));//5
//printf("%d\n", strlen(*p));//����strlenֻ�ܷŵ�ַ��ֻҪ�ŵĲ��ǵ�ַ�ͻᱨ��
//printf("%d\n", strlen(p[0]));//�����ŵĲ��ǵ�ַ
//printf("%d\n", strlen(&p));//���ֵ
//printf("%d\n", strlen(&p + 1));//���ֵ
//printf("%d\n", strlen(&p[0] + 1));//5



////��ά����
//int a[3][4] = { 0 };
//printf("%d\n", sizeof(a));//3*4*4=48
//printf("%d\n", sizeof(a[0][0]));//4
//printf("%d\n", sizeof(a[0]));//16----���ǵ�һ�е�������,4*4=16 
//printf("%d\n", sizeof(a[0] + 1));//4,a[0]��a[0][1]�ĵ�ַ��������4
////a[0]�ǵ�һ�е�����������������ʱ������Ԫ�صĵ�ַ��
//printf("%d\n", sizeof(*(a[0] + 1)));//4����һ�еڶ���Ԫ�صĵ�ַ�����ò�����
//printf("%d\n", sizeof(a + 1));//4
//printf("%d\n", sizeof(*(a + 1)));//16
//printf("%d\n", sizeof(&a[0] + 1));//4
//printf("%d\n", sizeof(*(&a[0] + 1)));
//printf("%d\n", sizeof(*a));
//printf("%d\n", sizeof(a[3]));



//�ܽ᣺
//�����������壺
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
//2. & ���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��




//ָ��ı�����

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);//����ĵ�ַ��һ�����������飬
//    printf("%d,%d", *(a + 1), *(ptr - 1));//a����Ԫ�صĵ�ַ����һ��2���Ǹ���1����5.
//    return 0;
//}
////����Ľ����ʲô��

//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;//�ṹ��ָ�룬
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//��һ������һ���ṹ��0x1000000+20
//	printf("%p\n", (unsigned long)p + 0x1);//ǿ��װ������+1
//	printf("%p\n", (unsigned int*)p + 0x1);//+4
//	return 0;
//}


//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);//�����ˣ������Ȼ���ڻ��������4
//    int* ptr2 = (int*)((int)a + 1);//
//    printf("%x,%x", ptr1[-1], *ptr2);//4��18�������ִ�ӡ
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���Ƕ��ű��ʽ���Ǻ�����Ǹ���Ľ��
//    int* p;
//    p = a[0];//a[0]�ǵ�һ�е�����������������ʾ��Ԫ�صĵ�ַ����a[0][0]
//    printf("%d", p[0]);
//    return 0;
//}


int main()
{
    int a[5][5];//����5��5�е�����
    int(*p)[4];//ָ�����飬��4��Ԫ�ء�
    p = a;//��һ�е����飬a��p�����Ͳ�һ��
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
    return 0;
}
