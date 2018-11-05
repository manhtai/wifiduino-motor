all:
	. .env && pio run --target upload
debug:
	pio device monitor
