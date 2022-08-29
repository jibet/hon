#include <unistd.h>

int main()
{
	char* a;
	a = "55";
	write(1, &a ,1);
}
