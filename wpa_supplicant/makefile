
all: wpa_supplicant/.config
	$(MAKE) -C wpa_supplicant

wpa_supplicant/.config:
	echo "CONFIG_DRIVER_WEXT=y" > wpa_supplicant/.config
	echo "CONFIG_IEEE8021X_EAPOL=y" >> wpa_supplicant/.config
	echo "CONFIG_EAP_MD5=y" >> wpa_supplicant/.config
	echo "CONFIG_EAP_MSCHAPV2=y" >> wpa_supplicant/.config
	echo "CONFIG_EAP_GTC=y" >> wpa_supplicant/.config
	echo "CONFIG_EAP_OTP=y" >> wpa_supplicant/.config
	echo "CONFIG_EAP_LEAP=y" >> wpa_supplicant/.config
	echo "CONFIG_PKCS12=y" >> wpa_supplicant/.config
	echo "CONFIG_BACKEND=file" >> wpa_supplicant/.config
	echo "CONFIG_PEERKEY=y" >> wpa_supplicant/.config

romfs:
	$(ROMFSINST) wpa_supplicant/wpa_supplicant /bin/wpa_supplicant

clean:
	$(MAKE) -C wpa_supplicant clean
	rm wpa_supplicant/.config
