#include <linux/modules.h>
#include <linux/init.h>

MODULE_LICENSE("GPL")
MODULE_AUTHOR("Siddique")
MODULE_DESCRIPTION("A Hello world LKM")

/*
 * @brief This function is called when the module is loaded into the kernel
 */
static int __int ModuleInit(void) {
	printk(KERN_ALERT "Hello, From Sid!\n");
	return 0;
}

/*
 * @brief This function is called when the module is removed from the kernel
 */
static void __exit ModuleExit(void) {
	printk(KERN_ALERT "Goodbye, From Sid!\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
