#include <linux/syscalls.h>
#include <linux/kernel.h>
#include <linux/uaccess.h>

SYSCALL_DEFINE2(secondtestcall,char*,str1,char*,str2)
{
	char str[100];
	int i,len=0;
	
	copy_from_user(str, str1, 100);
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	copy_to_user(str2, str, len);
	printk("%s/n",str);
	return 0;
}
