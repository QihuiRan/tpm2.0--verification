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
	{ 0x8ed06951, "i2c_del_driver" },
	{ 0x1898ad4a, "i2c_register_driver" },
	{ 0x8c81da48, "tpm_chip_register" },
	{ 0x4d080587, "devm_request_threaded_irq" },
	{ 0xddece99e, "__init_waitqueue_head" },
	{ 0x958f71ca, "of_match_device" },
	{ 0x3ffa10ff, "devm_kmalloc" },
	{ 0xcc34cf69, "tpmm_chip_alloc" },
	{ 0x8ec826d9, "_dev_info" },
	{ 0xe57aae50, "tpm_calc_ordinal_duration" },
	{ 0xd88c3813, "tpm2_calc_ordinal_duration" },
	{ 0x56747b57, "i2c_smbus_write_i2c_block_data" },
	{ 0x963e0acd, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x93f6bff1, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xa8ebe000, "_dev_err" },
	{ 0xda02d67, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7667e87c, "i2c_smbus_read_i2c_block_data" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x413c0466, "__wake_up" },
	{ 0xb7ccf823, "tpm_chip_unregister" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";

MODULE_ALIAS("of:N*T*Cnuvoton,npct501");
MODULE_ALIAS("of:N*T*Cnuvoton,npct501C*");
MODULE_ALIAS("of:N*T*Cwinbond,wpct301");
MODULE_ALIAS("of:N*T*Cwinbond,wpct301C*");
MODULE_ALIAS("of:N*T*Cnuvoton,npct601");
MODULE_ALIAS("of:N*T*Cnuvoton,npct601C*");
MODULE_ALIAS("i2c:tpm_i2c_nuvoton");
MODULE_ALIAS("i2c:tpm2_i2c_nuvoton");

MODULE_INFO(srcversion, "4A278B87FB3BBA4641325B0");
