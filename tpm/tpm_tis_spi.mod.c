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
	{ 0x13d080eb, "driver_unregister" },
	{ 0xeb5b5ba8, "__spi_register_driver" },
	{ 0x50336b50, "spi_bus_unlock" },
	{ 0x9d669763, "memcpy" },
	{ 0xa30636eb, "spi_sync_locked" },
	{ 0x5f754e5a, "memset" },
	{ 0x2495e9db, "spi_bus_lock" },
	{ 0x56a6a375, "tpm_tis_core_init" },
	{ 0x3ffa10ff, "devm_kmalloc" },
	{ 0xd8490308, "tpm_tis_remove" },
	{ 0xb7ccf823, "tpm_chip_unregister" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm_tis_core,tpm";

MODULE_ALIAS("acpi*:SMO0768:*");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spi");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spiC*");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670C*");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spi");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spiC*");
MODULE_ALIAS("spi:tpm_tis_spi");

MODULE_INFO(srcversion, "600E4A72983C590A8770D19");
