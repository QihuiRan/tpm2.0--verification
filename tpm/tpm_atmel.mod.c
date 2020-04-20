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
	{ 0xb7ccf823, "tpm_chip_unregister" },
	{ 0x716b58cb, "ioport_resource" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb1fa94fa, "platform_driver_unregister" },
	{ 0x4384eb42, "__release_region" },
	{ 0x38154d12, "platform_device_unregister" },
	{ 0x8c81da48, "tpm_chip_register" },
	{ 0xcc34cf69, "tpmm_chip_alloc" },
	{ 0x3ffa10ff, "devm_kmalloc" },
	{ 0x7a159d70, "platform_device_register_full" },
	{ 0x5f754e5a, "memset" },
	{ 0xae9849dd, "__request_region" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x79349fa8, "__platform_driver_register" },
	{ 0xa8ebe000, "_dev_err" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";


MODULE_INFO(srcversion, "EC6A9C3068C9BA97E27557B");
