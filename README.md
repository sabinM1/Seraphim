# Seraphim

## Simple Arduino welcome message using a MicroSD card adapter, a speaker with an amp, a PIR sensor and an LED.

### Hardware

Pins:
 - MicroSD adapter: SPI - 11, 12, and 13 (on most Arduino boards) or 50, 51, and 52 (Arduino Mega), CS pin: 4;
 - speaker (with an amplifier if the Arduino can't manage it): 9;
 - LED: 3;
 - PIR sensor: 2;
 
 ### Software
 
 Download the [SimpleSDAudio library](http://hackerspace-ffm.de/wiki/index.php?title=Datei:SimpleSDAudio_V1.03.zip).
 
 Put a wav file (**8bit, 32kHz**) on the SD card, change the name and maybe the cooldown in the code (lines 11 and 24).
 
 ### MIT License
 
 See *LICENSE* file.
