RKMPP_VERSION = jellyfin-mpp
RKMPP_SITE = https://github.com/nyanmisaka/mpp.git
#git分支
#buildroot-2023.02.6/support/download/git
#_git checkout -f -q "'${_VERSION}'"
#只下载最近一个提交
RKRGA_DL_OPTS = --depth=1
RKMPP_SITE_METHOD = git
RKMPP_LICENSE = MIT
RKMPP_LICENSE_FILES = LICENSE
RKMPP_INSTALL_STAGING = YES

$(eval $(cmake-package))