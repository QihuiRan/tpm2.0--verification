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
	{ 0xe57aae50, "tpm_calc_ordinal_duration" },
	{ 0x9d669763, "memcpy" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xda02d67, "jiffies" },
	{ 0x29d9553d, "freezing_slow_path" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x963e0acd, "finish_wait" },
	{ 0x93f6bff1, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x413c0466, "__wake_up" },
	{ 0xe0dd67f9, "kmalloc_caches" },
	{ 0x8c81da48, "tpm_chip_register" },
	{ 0x3a0a7224, "tpm_get_timeouts" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xddece99e, "__init_waitqueue_head" },
	{ 0xcc34cf69, "tpmm_chip_alloc" },
	{ 0xc509825d, "kmem_cache_alloc_trace" },
	{ 0x35b7c71d, "device_unregister" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb7ccf823, "tpm_chip_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";


MODULE_INFO(srcversion, "593A7DD19D3C83BC7186A36");
