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
	{ 0x8ec826d9, "_dev_info" },
	{ 0xcc34cf69, "tpmm_chip_alloc" },
	{ 0xb7ccf823, "tpm_chip_unregister" },
	{ 0xa8ebe000, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0xda02d67, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xae1c836d, "__i2c_transfer" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";

MODULE_ALIAS("of:N*T*Cinfineon,tpm_i2c_infineon");
MODULE_ALIAS("of:N*T*Cinfineon,tpm_i2c_infineonC*");
MODULE_ALIAS("of:N*T*Cinfineon,slb9635tt");
MODULE_ALIAS("of:N*T*Cinfineon,slb9635ttC*");
MODULE_ALIAS("of:N*T*Cinfineon,slb9645tt");
MODULE_ALIAS("of:N*T*Cinfineon,slb9645ttC*");
MODULE_ALIAS("i2c:tpm_i2c_infineon");
MODULE_ALIAS("i2c:slb9635tt");
MODULE_ALIAS("i2c:slb9645tt");

MODULE_INFO(srcversion, "7FDC07A2863942D6AB572C1");
