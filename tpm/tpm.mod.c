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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe0dd67f9, "kmalloc_caches" },
	{ 0xf68b2513, "cdev_init" },
	{ 0xe0a1361b, "up_read" },
	{ 0x453886c0, "mem_map" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xbf93f4bc, "no_llseek" },
	{ 0x5e2651d2, "seq_printf" },
	{ 0x986d269c, "seq_write" },
	{ 0xe2fae716, "kmemdup" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x877a7af9, "__compat_only_sysfs_link_entry_to_kobj" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x28cc25db, "arm_copy_from_user" },
	{ 0x5fc262cb, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0x1719df34, "__alloc_pages_nodemask" },
	{ 0xda02d67, "jiffies" },
	{ 0xf4fa543b, "arm_copy_to_user" },
	{ 0x5dc627a6, "down_read" },
	{ 0xec76b444, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf8ad5fb3, "idr_destroy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x201a4b32, "__mutex_init" },
	{ 0x7c32d0f0, "printk" },
	{ 0x4f30b379, "hash_digest_size" },
	{ 0xa45cb8e7, "of_find_property" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3a8481ee, "seq_putc" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x195a71c2, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcf038222, "idr_alloc" },
	{ 0x60379d16, "sysfs_remove_link" },
	{ 0xe7372bf2, "up_write" },
	{ 0xa8ebe000, "_dev_err" },
	{ 0x525a83d2, "down_write" },
	{ 0x280cb1c5, "idr_remove" },
	{ 0x5e81abc8, "devm_add_action" },
	{ 0x8ec826d9, "_dev_info" },
	{ 0xd5b86fbf, "__free_pages" },
	{ 0xd29cb839, "idr_get_next" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f25a7d5, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe48b9386, "cdev_device_add" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x52015edb, "hwrng_register" },
	{ 0x3aace67e, "of_get_property" },
	{ 0xc509825d, "kmem_cache_alloc_trace" },
	{ 0xab4eed17, "get_device" },
	{ 0x1e047854, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xed5d5250, "device_initialize" },
	{ 0x3279be38, "idr_replace" },
	{ 0x2bde6bf9, "class_destroy" },
	{ 0x9f9b3c7, "cdev_device_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xb81960ca, "snprintf" },
	{ 0x330fe7d2, "of_property_match_string" },
	{ 0xfbc3533a, "dev_set_name" },
	{ 0x3294ec4b, "hwrng_unregister" },
	{ 0x3ffa10ff, "devm_kmalloc" },
	{ 0x916f3ff4, "param_ops_uint" },
	{ 0xb27e601, "__class_create" },
	{ 0x4063803a, "__init_rwsem" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "53C636C5DBCC5F488442981");
