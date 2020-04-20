# TPM2.0验证步骤

## tpm驱动动态加载以及tpm-overylay加载

### ko文件个dtbo文件由来

tpm目录下的驱动代码是下载的$ uname -r 对应版本，tpm_raspberry.dts也是参照该版本做出修改

使用https://github.com/Seeed-Studio/seeed-linux-dtoverlays仓库进行编译

### tpm驱动动态加载

```
	$ cd   tpm
	$ sudo mkdir   /lib/modules/`uname -r`/kernel/crypto/tpm
	$ sudo cp *.ko  /lib/modules/`uname -r`/kernel/crypto/tpm
	$ cd /lib/modules/`uname -r`/kernel/crypto/tpm && sudo depmod -a
	$ cd - && sudo modprobe tpm_tis_spi
```

### tpm-overylay加载

```
   $ cd ../rpi
   $ dtoverlay tpm_raspberry_base.dtbo
```

## 测试tpm

### 下载有关仓库

tpm2-tss地址
https://github.com/tpm2-software/tpm2-tss

TPM2.0-TSS
https://github.com/01org/TPM2.0-TSS.git

tpm2.0-tools
https://github.com/01org/tpm2.0-tools.git

需要先安装tpm2-tss,后面两个库的安装有依赖。详细安装手册查看对应仓库中的**INSTALL.md**文件                     

### 相关命令测试

$ cd tpm2.0-tools

#### Create an RSA key and load it

```
$ tpm2_create -C primary.ctx -Grsa2048 -u key.pub -r key.priv 
$ tpm2_load -C primary.ctx -u key.pub -r key.priv -c key.ctx
```

#### Encrypt using RSA

```
$ echo "my message" > msg.dat
$ tpm2_rsaencrypt -c key.ctx -o msg.enc msg.dat
```

#### Decrypt using RSA

```
$tpm2_rsadecrypt -c key.ctx -o msg.ptext msg.enc
$cat msg.ptext
my message
```

