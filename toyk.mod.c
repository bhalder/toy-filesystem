#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1e94b2a0, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8dd76c, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x336c389f, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x53d021dd, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xeec747ae, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x6f0ea6ee, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "071359EFECC6A8D954B7EB7");
