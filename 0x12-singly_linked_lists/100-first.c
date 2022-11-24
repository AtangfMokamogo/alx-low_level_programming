#include<stdio.h>

/**
 * start_before_main - Apply the constructor
 * attribute to myStartupFun() so that it
 * is executed before main()
 */
void start_before_main(void) __attribute__ ((constructor));

/**
 * start_before_main - implementation of myStartupFun
 */
void start_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
