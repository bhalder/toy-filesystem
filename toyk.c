/* 
 * Author : Barun Halder
 * Date : January, 2016
 * A simple file system from scratch.
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Barun Halder(CMU)");
MODULE_DESCRIPTION("Toy File-System for learning purposes");

static int __init toyfs_init(void) {
	printk( KERN_INFO "toyfs kernel module initialized\n");
	return 0;
}

static void __exit toyfs_exit(void) {
	printk(KERN_INFO "toyfs kernel module exiting\n");
}

module_init( toyfs_init );
module_exit( toyfs_exit );
