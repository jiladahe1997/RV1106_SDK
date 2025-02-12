RKRGA_VERSION = jellyfin-rga
RKRGA_SITE = https://github.com/nyanmisaka/rk-mirrors.git
#git分支
#buildroot-2023.02.6/support/download/git
#_git checkout -f -q "'${_VERSION}'"

#只下载最近一个提交
RKRGA_DL_OPTS = --depth=1
RKRGA_SITE_METHOD = git
RKRGA_LICENSE = MIT
RKRGA_LICENSE_FILES = LICENSE
RKRGA_INSTALL_STAGING = YES

$(eval $(meson-package))

