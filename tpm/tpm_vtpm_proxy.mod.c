#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfeab0981, "module_layout" },
	{ 0x8ab03b0c, "noop_llseek" },
	{ 0xbf93f4bc, "no_llseek" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4ec15145, "misc_deregister" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x7c32d0f0, "printk" },
	{ 0xe264420b, "misc_register" },
	{ 0xe0dd67f9, "kmalloc_caches" },
	{ 0x7e9ecd5, "fd_install" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x191c1073, "anon_inode_getfile" },
	{ 0x2801483f, "fput" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0xabf28377, "tpm_chip_alloc" },
	{ 0x201a4b32, "__mutex_init" },
	{ 0xddece99e, "__init_waitqueue_head" },
	{ 0xc509825d, "kmem_cache_alloc_trace" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x963e0acd, "finish_wait" },
	{ 0x93f6bff1, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb7ccf823, "tpm_chip_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x8f25a7d5, "put_device" },
	{ 0x92b57248, "flush_work" },
	{ 0x8c81da48, "tpm_chip_register" },
	{ 0xa8ebe000, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x453886c0, "mem_map" },
	{ 0xd5b86fbf, "__free_pages" },
	{ 0xc6eb4dde, "tpm_transmit_cmd" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1719df34, "__alloc_pages_nodemask" },
	{ 0x5f754e5a, "memset" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x413c0466, "__wake_up" },
	{ 0x5fc262cb, "mutex_unlock" },
	{ 0x195a71c2, "mutex_lock" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";


MODULE_INFO(srcversion, "270A0534F6D89B78B66D9CC");
