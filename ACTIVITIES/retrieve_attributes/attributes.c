#include <unistd.h>
#include <stdio.h>

#define __NR_testcall 401

int main()
{
	int ret;
	ret = syscall(__NR_testcall);
	if(ret < 0)
		perror("testcall");
	return 0;
}
