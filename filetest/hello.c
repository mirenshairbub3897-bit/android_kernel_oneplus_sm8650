#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Developer");
MODULE_DESCRIPTION("OnePlus 13R Custom ESP Module");
MODULE_VERSION("1.0");

static int __init hello_init(void) {
    pr_info("ESP Module: Loaded successfully into OnePlus 13R!\n");
    return 0;
}

static void __exit hello_exit(void) {
    pr_info("ESP Module: Unloaded!\n");
}

module_init(hello_init);
module_exit(hello_exit);
