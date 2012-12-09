
all: hostapd/.config
	$(MAKE) -C hostapd

hostapd/.config:
	cp hostapd/defconfig hostapd/.config

romfs:
	$(ROMFSINST) hostapd/hostapd /bin/hostapd

clean:
	$(MAKE) -C hostapd clean
	rm hostapd/.config
