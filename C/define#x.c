/*#预外理运算符,它的功能是把其后的宏参数进行子符串化操作*/
#define STR(x) #x
int main(int argc , char **argv)
{
	printf("%s",STR(this is a string));
	return 0;
}
