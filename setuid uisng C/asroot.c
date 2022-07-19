// this code allow the root to create a setuid scripts to run on linux
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{

	setuid(geteuid());		// to get uid of the owner of the script in our case it is the root
	system("ls -al /root"); // now u can run a commands you don't have the permission to run
	// "ls -al /root" is an example
	return 0;
}
