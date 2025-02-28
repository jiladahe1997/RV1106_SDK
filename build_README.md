# 编译
sudo apt-get install device-tree-compiler flex python3 bison libssl-dev python-is-python3 texinfo pkg-config gperf cmake libncurses-dev
 
 ./build.sh lunch 
 选择7 

 ./build.sh

# 烧录

### 将镜像下载到windows 

1. 配置共享文件夹
2. sudo mount -t vboxsf virtualbox_share(共享文件夹的名字) /mnt
3. cp -r output/image /mnt
4. windows上用rktool烧录




# buildroot常用操作：
保存配置
make savedefconfig BR2_DEFCONFIG=testconfig

进行busybox配置
make busybox-menuconfig

保存busybox配置
make busybox-update-config BR2_PACKAGE_BUSYBOX_CONFIG=busybox_testconfig

重新编译单个包
make ${pkgname}-dirclean

全部重新编译（不下载
make clean

全部重新编译(重新下载)
make distclean
make clean all




# 暂存，系统常用操作
insmod /oem/usr/ko/cfg80211.ko
insmod /oem/usr/ko/libarc4.ko
insmod /oem/usr/ko/mac80211.ko
insmod 8188fu.ko
ifconfig wlan0 up
ifconfig wlan0 192.168.0.1
udhcpd udhcpc.conf
hostapd hostapd.conf