#define _CRT_SECURE_NO_WARNINGS 1
#define EXAMPLE_MACRO_NAME
#include<stdio.h>
#include<string.h>
#include<time.h>

//其形式为：gets(字符数组)——输入字符串的函数
//
//作用是从终端输入一个字符串到字符数组，并且得到一个函数值。
//int main()
//{
//	char str[20];//定义一个数组
//
//	gets(str);//接受一个字符串，有点像scanf
//
//	return 0;
//}

//其形式为：puts(字符数组)——输出字符串的函数
//
//作用是将一个字符串(以‘\0’结束的字符序列)输出到终端。
//int main()
//{
//	char str[20];//定义一个数组
//
//	gets(str);//接受一个字符串，有点像scanf
//
//	puts(str);//输出字符串
//	return 0;
//}

//其形式为：strcat(字符数组1，字符数组2)——字符串连接的函数
//
//作用是把两个字符数组中的字符串连接起来，把字符串2连接到字符串1的后面，结果放在字符数组1中。

//int main()
//{
//	char str1[10] = "kg";
//	char str2[10] = "tg";
//	strcat(str1, str2);
//	printf("%s", str1);
//	//puts(str1);//我们都一样
//
//
//	return 0;
//}

//其形式为：strcpy(字符数组1，字符串2)——字符串复制的函数
//
//作用是将字符串2复制到字符数组1中去。

//int main()
//{
//	char arr1[10] = "";
//	char arr2[10] = "kgtj";
//	strcat(arr1, arr2);
//	printf("%s",arr1);
//	//puts(str1);//我们都一样
//	return 0;
//}

//其形式为：strcmp(字符数组1，字符串2)——字符串比较的函数
//
//因为字符串不能用等号来比较大小，所以就用strcmp函数来比较！！！！！！
//
//比较规则：
//
//（1）如果全部字符相同，则认为两个字符串相等；
//
//（2）若出现不相同的字符，则以第一对不相同的字符比较结果为准。（'a' < 'z'；'A' < 'Z'）。
//
//	比较的结果由函数值带回：
//	
//1.如果字符串1与字符串2相同，则函数值为0。
//int main()
//{
//	char str1[10] = "abc";
//	char str2[10] = "abc";
//	//定义两个一样的
//	int n = strcmp(str1, str2);
//	//定义两个一样的数字
//	printf("%d\n", n);
//	return 0;
//}

//2.如果字符串1 > 字符串2，则函数值返回一个正数。
//int main()
//{
//	char arr1[10] = "arr";
//	char arr2[10] = "aaa";
//	int n = strcmp(arr1, arr2);
//	printf("%d\n", n);
// //puts(str1);//我们都一样
//	return 0;
//}

//3.如果字符串1 < 选择的字符串2，则函数值返回一个负数。
//int main()
//{
//	char arr1[10] = "aaa";
//	char arr2[10] = "arr";
//	int n = strcmp(arr1, arr2);
//	printf("%d\n", n);
//	//puts(str1);//我们都一样
//	return 0;
//}

//其形式为：strlen(字符数组)——测字符串长度的函数
//
//作用是测试字符串长度的函数，函数的值为字符串实际的长度（不包括 '\0' 在内）。

//int main()
//{
//	char arr1[10] = "kgtj";
//	int n = strlen(arr1);
//	printf("%d\n",n);
//	return 0;
//}

//strlen也可以直接测试字符串常量的长度
//int main()
//{
//	int n = strlen("China");
//	printf("%d\n",n);
//	return 0;
//}

//其形式为：strlwr(字符串)——转换为小写的函数
//
//该函数的作用是将字符串中的大写字母转换成小写字母。

//int main()
//{
//	char arr1[10] = "AABbCc";
//	_strlwr(arr1);
//	//gets(arr1);
//
//	printf("%s\n", arr1);
//	return 0;
//}

//其形式为：strupr(字符串)——转换为大写的函数
//
//该函数的作用是将字符串中的小写字母转换成大写字母。
//int main()
//{
//	char arr1[10] = "AABbCc";
//	_strupr(arr1);
//	//gets(arr1);
//
//	printf("%s\n", arr1);
//	return 0;
//}

//其形式为：strstr(字符串1，字符串2)——查找字符串的函数
//
//函数用于判断字符串str2是否是str1的子串。如果是，则该函数返回str2在str1中首次出现的地址；否则，返回NULL。
//
//如果找到该数组，就会从找到的地方开始输出；


//int main() {
//	char a[] = "abcdefg";
//	char b[] = "bc";
//
//	char* ret = strstr(a, b);
//
//	if (ret == NULL) {
//		printf("Can not find!\n");
//	}
//	else {
//		printf("%s\n", ret);  //输出 bcdefg
//	}
//
//	return 0;
//}


