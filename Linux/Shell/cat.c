#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static void do_cat(const char *path);
static void die(const char *s);

int main(int argc, char *argv[])
{
	int i, n;
	char ch[100];

	if(argc < 2)
	{	
		n = read(STDIN_FILENO, ch, sizeof ch);
		write(STDOUT_FILENO, ch, n);	

		exit(1);
	}

	for(i=1;i<argc;i++)
	{
		do_cat(argv[i]);
	}
	
	exit(0);	
}

#define BUFFER_SIZE 2048

static void do_cat(const char *path)
{
	int fd;
	unsigned char buf[BUFFER_SIZE] = {0};
	int n;
	int num=0, i;

	fd = open(path, O_RDONLY);

	if(fd < 0)
		die(path);

	for(;;)
	{
		n = read(fd, buf, sizeof buf);

		for(i=0;i<BUFFER_SIZE;i++)
		{
			if(buf[i] == '\n')
				num++;
		}

		if(n<0)
			die(path);

		if(n==0)
			break;
		
		if(write(STDOUT_FILENO, buf, n) < 0)
			die(path);
	}

	printf("%d 줄로 이루어져있습니다.\n", num);

	if(close(fd) < 0)
		die(path);
}

static void die(const char *s)
{
	perror(s);
	exit(1);
}
