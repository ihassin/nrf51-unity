# NRF51 Blinky using Unity

This is an example of how to employ unit testing using [Unity](http://www.throwtheswitch.org/unity/).

The example runs a simple unit test and will light up green if passed, or red if failed.

# Build

```
git clone git@github.com:ihassin/nrf51-blinky-unit.git
cd nrf51-blinky-unity
mkdir build
cd build
cmake ..
make
```

# Flash

```
cd .. # Going back to the root of the project
./flash
```

```flash.sh``` will use ```upload.jlink``` as the parameter file. It will reset the device, load S110 softdevice to it then load ```build/nrf51822_xxac.hex```.

You should see blinky work immediately on the device.

# License

MIT, apart from anything belonging to Nordic.
