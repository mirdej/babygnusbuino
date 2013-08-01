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
cp libusb /usr/local/lib/libusb-0.1.4.dylib
echo "Done"