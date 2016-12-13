#include <stdio.h>
#include <string.h>

int main(int argc, char* argv)
{
	if (argc < 2)
	{
		printf("arguments count is not right.\n");
		return 0;
	}
	printf("before fopen.\n");
	FILE* file = fopen("file.log", "wa");
	printf("after fopen.\n");
	size_t length = strlen(argv[1]);
	printf("length:%ld\n", length);
	//fwrite(argv[1], sizeof(char), length, file);
	//fwrite("\n", sizeof(char), 1, file);
	fclose(file);
	return 0;
}
