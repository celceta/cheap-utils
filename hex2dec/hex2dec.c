#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned long long result;
	char 	buf[1024];
	char	*p;

	switch(argc){
		case 1:
			fgets(buf, sizeof buf, stdin);
			p = buf;
			break;
		case 2:
			p = argv[1];
			break;
		default:
			fprintf(stderr, "illigal argument(s).\n");
			return __LINE__;
	}

	sscanf(p, "%Lx", &result);

	printf("%Ld\n", result);

	return 0;
}

