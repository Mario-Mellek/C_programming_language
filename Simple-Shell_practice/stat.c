#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	unsigned int i;
	struct stat buf;

	if (argc < 2)
	{
		printf("No file names entered\n");
		return (1);
	};
	for (i = 1; argv[i]; i++)
	{	
		if (stat(argv[i], &buf) == 0)
		{
			printf("file found > %s\n", argv[i]);
			printf("Owner ID: %d\n", buf.st_uid);
			printf("File size: %ld Bytes\n", buf.st_size);
		}
		else
		{
			printf("File Not Found!\n");
		}
	}
	return (0);
}
