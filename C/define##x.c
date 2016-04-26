#define MF(n) myfun_##n()
void myfun_1()
{
	printf("%s\n","this is myfun_1");
}
int main()
{
	MF(1);	
}
