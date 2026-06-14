#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init hello_init(void)
{
    printk(KERN_INFO "HELLO: Module loaded successfully!\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "HELLO: Module unloaded!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("chatgpt");
MODULE_DESCRIPTION("Simple Hello Kernel Module");
