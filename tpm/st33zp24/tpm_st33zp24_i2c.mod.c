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
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8ed06951, "i2c_del_driver" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x7c32d0f0, "printk" },
	{ 0xf681970f, "st33zp24_probe" },
	{ 0xa8ebe000, "_dev_err" },
	{ 0x7319c884, "devm_gpio_request_one" },
	{ 0x1898ad4a, "i2c_register_driver" },
	{ 0x8ec826d9, "_dev_info" },
	{ 0x9329fb7b, "of_get_named_gpio_flags" },
	{ 0x6fe2e11d, "i2c_transfer_buffer_flags" },
	{ 0x9d669763, "memcpy" },
	{ 0x3ffa10ff, "devm_kmalloc" },
	{ 0xb1391edc, "st33zp24_remove" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm_st33zp24";

MODULE_ALIAS("acpi*:SMO3324:*");
MODULE_ALIAS("of:N*T*Cst,st33zp24-i2c");
MODULE_ALIAS("of:N*T*Cst,st33zp24-i2cC*");
MODULE_ALIAS("i2c:st33zp24-i2c");

MODULE_INFO(srcversion, "D5D5523E37A23FDF153E8B5");
