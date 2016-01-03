#include "/lib/modules/3.19.0-25-generic/build/include/linux/fs.h"
#define TOYFS_MAGIC_NUMBER 320912

static void toyfs_put_super( struct super_block * s ) {
	printk(KERN_INFO "ToyFS PUT destroyed");
	return;
}

static struct super_operations const toyfs_super_ops = {
	.put_super = toyfs_put_super,
};

static int toyfs_fill_sb( struct super_block *s, void * data, int silent ) {
	struct inode * root = NULL;
	s->s_magic = TOYFS_MAGIC_NUMBER;
	s->s_op = &toyfs_super_ops;

	root = new_inode( s );
	if( !root ) {
		printk(KERN_ERR "Inode allocation failed\n");
		return -ENOMEM;
	}

	root->i_ino = 0;
	root->i_sb = s;
	root->i_atime = root->i_mtime = root->i_ctime = CURRENT_TIME;

	inode_init_owner( root, NULL, S_IFDIR );

	if( !s->s_root ) {
		printk(KERN_ERR "root creation failed\n");
		return -ENOMEM;
	} 
	return 0;
}

static void toyfs_destroy_superblock( struct super_block *s) {
        printk(KERN_INFO " ToyFS superblock destroyed.\n");
        return;
}

static struct dentry * toyfs_mount( struct file_system_type *fs_type, int flags, const char * dev_name, void * data ) {
        struct dentry * const entry = mount_bdev( fs_type, flags, dev_name, data, toyfs_fill_sb );
        printk(KERN_WARNING "ToyFS MOUNTING");
        return NULL;
}
