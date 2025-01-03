#include <linux/module.h>
#include <linux/init.h>

static int __init my_init(void)
{
	printk("hello - Hello, Kernel!\n");
	return 0;
}

static void __exit my_exit(void)
{
	printk("hello - Goodby, Kernel!\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("jewfu");
MODULE_DESCRIPTION("a simple hello better");
