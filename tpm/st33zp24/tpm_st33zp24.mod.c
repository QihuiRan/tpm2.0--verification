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
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xfeab0981, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0xda02d67, "jiffies" },
	{ 0xddece99e, "__init_waitqueue_head" },
	{ 0x29d9553d, "freezing_slow_path" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcc34cf69, "tpmm_chip_alloc" },
	{ 0xa8ebe000, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c81da48, "tpm_chip_register" },
	{ 0x8ec826d9, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb7ccf823, "tpm_chip_unregister" },
	{ 0xe57aae50, "tpm_calc_ordinal_duration" },
	{ 0x413c0466, "__wake_up" },
	{ 0x93f6bff1, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x963e0acd, "finish_wait" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x3ffa10ff, "devm_kmalloc" },
	{ 0x4d080587, "devm_request_threaded_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";


MODULE_INFO(srcversion, "4A6C7031BCBEF56685B9390");
