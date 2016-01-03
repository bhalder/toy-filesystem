#include "/lib/modules/3.19.0-25-generic/build/include/linux/fs.h"

static void toyfs_destroy_superblock( struct super_block *s) {
	printk(KERN_INFO " ToyFS superblock destroyed.\n");
	return;
}

static struct dentry * toyfs_mount( struct file_system_type *fs_type, int flags, const char * dev_name, void * data ) {
	printk(KERN_WARNING "ToyFS MOUNTING");
	return NULL;
}
