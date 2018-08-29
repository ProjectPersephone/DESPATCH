Hardware / Software design of ARTSAT2:DESPATCH
========
This repository is for hardware / software design of ARTSAT2:DESPATCH.  

o spacecraft/body : contains DESPATCH's body design and CAD data.  
o spacecraft/main : contains main OBC's CAD data and source codes.  
o spacecraft/mission : contains mission OBC's CAD data and source codes.  
o ground_station/decoder :  contains telemetry decoding software.  
o ground_station/tracker :  contains tracking software.  
o ground_station/server : contains API server software.  
o ground_station/utility : contains some utility software such as a viewer or an editor, etc...  
o document : contains some specifications of morse and baudot code format, etc...  

This repo was forked to port the code to the KickSat Sprite where possible.
=======
Build instructions (quoted from email from Junshi HORIGUCHI - zap00365@nifty.com)

You can compile MorikawaSDK and DespatchApp with Arduino 1.0.5
We have not tested compiling with newer version Arduino.

1. Download MorikawaSDK from https://github.com/ARTSAT/MorikawaSDK
2. Extract zip file and find Arduino folder.
3. Move or copy "Arduino/hardware/mega-pro-3.3V" and "Arduino/libraries/MorikawaSDK” into your
    <UserFolder>/Arduino directory like standard Arduino libraries.
4. Execute Arduino application then select sketch example menu, open MorikawaSDK’s example, “Empty” or “CrossFadeLED”.
5. Compile it and write it into your Arduino.
6. DespatchApp is an Arduino sketch file, so, Download it from https://github.com/ARTSAT/DESPATCH/tree/master/spacecraft/mission/software/Arduino/DespatchApp
Then, copy it into <UserFolder>/Arduino directory.

MorikawaSDK was designed for Arduino Mega Pro : https://www.switch-science.com/catalog/947/
