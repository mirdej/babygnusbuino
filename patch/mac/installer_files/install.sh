	echo "Looking for Arduino Application"
ARDU="`find "/Applications/" -name "Arduino*.app"`"
echo "Patching: "$ARDU
#Contents/Resources/Java/hardware/tools/avr/bin/
BINPATH=$ARDU/Contents/Resources/Java/hardware/tools/avr/bin/
ETCPATH=$ARDU/Contents/Resources/Java/hardware/tools/avr/etc/
mv $BINPATH"avrdude" $BINPATH"avrdude_bak"
mv $ETCPATH"avrdude.conf" $ETCPATH"avrdude.conf_bak"
cp avrdude $BINPATH
cp avrdude.conf $ETCPATH
mkdir /usr/local/lib/
cp libusb-0.1.4.dylib /usr/local/lib/libusb-0.1.4.dylib
cp libusb-1.0.0.dylib /usr/local/lib/libusb-1.0.0.dylib
echo "Done"