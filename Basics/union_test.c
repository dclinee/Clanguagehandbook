/* C language test.c */
#include <stdio.h>
// define union
union Test{
	unsigned char a; // one byte
	unsigned short b; // two bytes
	unsigned int c; // four bytes
};

int main(void)
{
	union Test test;
	printf("%lu\n", sizeof(union Test));
	printf("%lu\n", sizeof(test));
	//共用体占用的内存等于最长的成员占用的内存。
	printf(" &test = %p\n &test.a = %p\n &test.b = %p\n &test.c = %p\n", &test, &test.a, &test.b, &test.c);
	// 共用体所有成员占用同一段内存

	test.c = 0x11223344;
	printf("test.a = %x\n", test.a);
	printf("test.b = %x\n", test.b);
	printf("test.c = %x\n", test.c);
	// 共用体使用了内存覆盖技术，同一时刻只能保存一个成员的值，如果对新的成员赋值，就会把原来成员的值覆盖掉。
	test.a = 0x88;
	printf("test.a = %x\n", test.a);
	printf("test.b = %x\n", test.b);
	printf("test.c = %x\n", test.c);

	return 0;
}
