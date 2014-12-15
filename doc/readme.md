To compile this from Source, do following steps:

1) Clone the neo2--sasu branch or the TAG you want.

2) Create a new Folder "src" on same level as the Folder "firmware" on you local pc

3) Copy whole content of "firmware" to folder "src"

4) change into Folder "src" and run "make" (if you'd run "make" before and want to recompile, first run "make clean")

	If everything worked, the '.hex' and '.eep' files will be in the src directory (where you currently are).

5) Download and start the Teensy-Firmware-Loader for your OS: http://www.pjrc.com/teensy/loader.html

6) Press the Image on  http://www.pjrc.com/teensy/loader.html for your OS and read HowTo flash Firmware