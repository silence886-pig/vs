//数据类型 标识符 键盘录入
//数据类型 变量名=数据值；
//   int     a    = 10;

//数据类型
//二进制一个0或1就是1bit，8bit＝一个字节
//决定存储什么类型的数据
//存储空间的大小


//整数
//short int(整数默认类型) long   long long存储大小依次增大
//short 短整型 2个字节  (-32768到32767)
//#include<stdio.h>
//int main()
//{
//	short a = 10;
//	printf("%d\n", a);
	//	return 0;
	//}
	//若赋值超过区间则会出错


	//int 整数 4个字节 （-2147483648到2147483647）
	//int b = 20;
	//printf("%d\n", b);


	//long 长整型，4个字节,注意百分号后加的为ld,且所赋值后得加L
	/*long c = 23242342L;
	printf("%ld\n", c);*/
	

	//long long(c99)超长整型，8个字节，19位数，%后加lld，且所赋值后得加LL
	//long long d = 24325345325LL;
	//printf("%lld", d);


	//用sizeof测量数据类型含多少字节
	//用sizeof(变量名或数据类型)
	//且使用sizeof时一定百分号后是zu
	/*printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(a));
	
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(b));*/
//就那短整型和长整型，超长整型加一个int,如 short int这就是完整版
//有符号和无符号整数的定义情况
//signed 有符号整数 正数，负数
//unsigned 无符号整数，及正数
//#include<stdio.h>;
//int main()
//{
//	signed int a = -100;
//	printf("%d\n", a);
//若要定义无负号的整数，比如序号，则用 unsigned,且百分号后要改为u
	//unsigned int f = 666;
	//printf("%u\n",f);
//如果赋值一个负数则会出错
//且使用会改变范围
//short:-32768到32767
//unsigned short:0到65535
//unsigned会把负的区间加到正的区间内
//小数有float 和double，字节分别为4，8，且小数取值范围大于整数，还有一个long double
	

//float 类型：单精度小数（小数点后6位）站4个字节（38位）
	//且float赋值后要加F
	//float e = 3.14F;
	//printf("%f\n", e);
	//若要修改保留几位小数，则在%和f之间加.几，几就是几位

//double 双精度小数（精确度在小数点后15位）占8字节（308位）
	//double g = 6.66;
	//printf("%.2lf\n", g);
	//小数尽量用double

//long double 高精度小数（精确到小数点后18-19位）占8字节,且赋值后用L
	//long double h = 3.14159265358L;
	//printf("%lf\n", h);

	//同理可用sizeof 来看多少字节
	//printf("%zu\n", sizeof(double));
	//printf("%zu\n", sizeof(g));

	//小数类型不可和unsigned组合使用


	//字符的数据类型为char  取值范围为ASCII码表中的字母，数字，英文符号 内存为1
	//百分号之后是c,且是单引号
	//char i = 'o';
	//printf("%c\n", i);

	//printf("%zu\n", sizeof(char));
	//printf("%zu\n", sizeof(i));

	//总结
	//整数 short int long long long 以及signed 和unsigned结合
	//小数 float double long double
	//字符 char
	//用sizeof来测量数据类型在内存中占用字节数
	// 后缀：long(L),longlong(LL),float(F)
	// unsigned可以和整数类型组合成无符号整数，占位符要用%u
//	return 0;
//}