/*
  Streaming Music from Bluetooth
  
  Copyright (C) 2020 Phil Schatzmann
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// ==> Example which shows how to use the built in ESP32 I2S < 3.0.0

// #include "I2S.h"
#include "AudioTools.h"
#include "BluetoothA2DPSink.h"

I2SStream myi2s;
BluetoothA2DPSink a2dp_sink(myi2s);

void setup() {
    Serial.begin(9600);
    Serial.println("Starting program!");
// the code below uploads but it does not resist
/*
    I2S.setSckPin(14); //  blue - old 8 tx
    I2S.setFsPin(15); //  yellow - old 7 rx
    I2S.setDataPin(22); // green - old 14 
*/
/*
    I2S.setSckPin(8); //  blue - old 8 tx
    I2S.setFsPin(7); //  yellow - old 7 rx
    I2S.setDataPin(22); // green - old 14 

    if (!I2S.begin(I2S_PHILIPS_MODE, 44100, 16)) {
      Serial.println("Failed to initialize I2S!");
      while (1); // do nothing
    }
*/
   a2dp_sink.start("MyMusic");
   Serial.println("Started");
}

void loop() {
  // Serial.println("hola");
  // sleep(3);
}
