#include "main.c"
/**
  * print_osabi - prints osabi
  * @ptr: magic.

  * Return: no return.
  */
void print_osabi(char *ptr)
{
        char osabi = ptr[7];

        printf("  OS/ABI:                            ");
        if (osabi == 0)
                printf("UNIX - System V\n");
        else if (osabi == 2)
                printf("UNIX - NetBSD\n");
        else if (osabi == 6)
                printf("UNIX - Solaris\n");
        else
                printf("<unknown: %x>\n", osabi);

        printf("  ABI Version:                       %d\n", ptr[8]);
}
