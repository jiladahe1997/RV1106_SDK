RKFFMPEG_VERSION = 1.0.0
RKFFMPEG_SITE = $(BR2_EXTERNAL_RV1106_PATH)/package/rkffmpeg/src/ffmpeg
RKFFMPEG_SITE_METHOD = local
RKFFMPEG_LICENSE = MIT
RKFFMPEG_LICENSE_FILES = LICENSE
RKFFMPEG_INSTALL_STAGING = YES
RKFFMPEG_CONF_OPS += --enable-gpl --enable-version3 --enable-libdrm --enable-rkmpp --enable-rkrga


define RKFFMPEG_CONFIGURE_CMDS
	(cd $(RKFFMPEG_SRCDIR) && rm -rf config.cache && \
	$(TARGET_CONFIGURE_OPTS) \
	$(TARGET_CONFIGURE_ARGS) \
	$(RKFFMPEG_CONF_ENV) \
	./configure \
		--enable-cross-compile \
		--cross-prefix=$(TARGET_CROSS) \
		--sysroot=$(STAGING_DIR) \
		--host-cc="$(HOSTCC)" \
		--arch=$(BR2_ARCH) \
		--target-os="linux" \
		--disable-stripping \
		--pkg-config="$(PKG_CONFIG_HOST_BINARY)" \
		$(SHARED_STATIC_LIBS_OPTS) \
		$(RKFFMPEG_CONF_OPTS) \
	)
endef

$(eval $(autotools-package))