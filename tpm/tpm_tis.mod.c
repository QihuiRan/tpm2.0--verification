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
	{ 0xe51dd9d4, "param_ops_bool" },
	{ 0x374226c8, "param_ops_string" },
	{ 0xb1fa94fa, "platform_driver_unregister" },
	{ 0x38154d12, "platform_device_unregister" },
	{ 0x79349fa8, "__platform_driver_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa8ebe000, "_dev_err" },
	{ 0x56a6a375, "tpm_tis_core_init" },
	{ 0x24d5ac5, "devm_ioremap_resource" },
	{ 0x3ffa10ff, "devm_kmalloc" },
	{ 0x554e7eae, "platform_get_irq" },
	{ 0x391eebc9, "platform_get_resource" },
	{ 0x5f754e5a, "memset" },
	{ 0xd8490308, "tpm_tis_remove" },
	{ 0xb7ccf823, "tpm_chip_unregister" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm_tis_core,tpm";

MODULE_ALIAS("of:N*T*Ctcg,tpm-tis-mmio");
MODULE_ALIAS("of:N*T*Ctcg,tpm-tis-mmioC*");
MODULE_ALIAS("pnp:dPNP0C31*");
MODULE_ALIAS("acpi*:PNP0C31:*");
MODULE_ALIAS("pnp:dATM1200*");
MODULE_ALIAS("acpi*:ATM1200:*");
MODULE_ALIAS("pnp:dIFX0102*");
MODULE_ALIAS("acpi*:IFX0102:*");
MODULE_ALIAS("pnp:dBCM0101*");
MODULE_ALIAS("acpi*:BCM0101:*");
MODULE_ALIAS("pnp:dBCM0102*");
MODULE_ALIAS("acpi*:BCM0102:*");
MODULE_ALIAS("pnp:dNSC1200*");
MODULE_ALIAS("acpi*:NSC1200:*");
MODULE_ALIAS("pnp:dICO0102*");
MODULE_ALIAS("acpi*:ICO0102:*");
MODULE_ALIAS("pnp:d*");
MODULE_ALIAS("acpi*::*");

MODULE_INFO(srcversion, "07A8A6C0EF91E5C95B70035");
