SP=~/sketchbook/hardware/babygnusbuino/patch/linux/
PP=/usr/share/arduino/hardware/tools/
mv $PP"avrdude" $PP"avrdude_bak"
mv $PP"avrdude.conf" $PP"avrdude.conf_bak"
cp $SP"avrdude" $PP
cp $SP"avrdude.conf" $PP
