# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the kernel tpm device drivers.
#
obj-m += tpm.o
tpm-m := tpm-interface.o tpm-dev.o tpm-sysfs.o tpm-chip.o tpm2-cmd.o \
	 tpm-dev-common.o tpmrm-dev.o eventlog/common.o eventlog/tpm1.o \
	 eventlog/tpm2.o tpm2-space.o
tpm-n += tpm_ppi.o eventlog/acpi.o
tpm-n += eventlog/efi.o
tpm-m += eventlog/of.o
obj-m += tpm_tis_core.o
obj-m += tpm_tis.o
obj-m += tpm_tis_spi.o
obj-m += tpm_i2c_atmel.o
obj-m += tpm_i2c_infineon.o
obj-m += tpm_i2c_nuvoton.o
obj-m += tpm_nsc.o
obj-m += tpm_atmel.o
obj-m += tpm_infineon.o
obj-n += tpm_ibmvtpm.o
obj-m += st33zp24/
obj-m += xen-tpmfront.o
obj-n += tpm_crb.o
obj-m += tpm_vtpm_proxy.o
