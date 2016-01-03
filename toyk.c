/* 
 * Author : Barun Halder
 * Date : January, 2016
 * A simple file system from scratch.
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/fs.h>
#include "toyk.h"

struct file_system_type toyfs_type = 
{
	.owner 	=	THIS_MODULE,
	.name 	= 	"ToyFS",
	.mount	=	toyfs_mount,
	.kill_sb=	toyfs_destroy_superblock,
};

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Barun Halder(CMU)");
MODULE_DESCRIPTION("Toy File-System for learning purposes");

static int __init toyfs_init(void) {
	printk( KERN_INFO "toyfs kernel module initialized\n");
	int result = register_filesystem( &toyfs_type);
	if( likely( result == 0)) {
		printk(KERN_INFO " ToyFS registered\n");
	} else {
		printk(KERN_ERR "ToyFS failed to register.\n");
	}	
	printk( KERN_INFO "toyfs kernel module initialized\n");
	return result;
}

static void __exit toyfs_exit(void) {
	printk(KERN_INFO "toyfs kernel module exiting\n");
	
	int result = unregister_filesystem( &toyfs_type );
	if( likely( result == 0 ) ) {
		printk(KERN_INFO "ToyFS unregistered.\n");
	} else {
		printk(KERN_ERR "ToyFS failed to unregister\n");
	}
}

module_init( toyfs_init );
module_exit( toyfs_exit );
