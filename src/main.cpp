/******************************************************
 * Project:
 * Description:

 *******************************************************/
/*******************************************************
 * Version/Notes:

********************************************************/

/******************************************************
 * Hardware/Libraries used:

*******************************************************/

/******************************************************
 **** I/O Ports used
 
*******************************************************/

/************************  end of notes ****************/

/******************************************************
 **** Includes
 *******************************************************/
#include <Arduino.h>
// #include <Preferences.h> //NVM

/******************************************************
 **** Pin Definitions
 *******************************************************/
// assign i2c pin numbers
// #define I2c_SDA 23
// #define I2c_SCL 22

/******************************************************
 **** Global Vars
 *******************************************************/
// const byte ON = 1;
// const byte OFF = 0;

/******************************************************
 **** Timers
 ******************************************************/

/******************************************************
 **** Init hardware
 ******************************************************/
/******************* eeprom ******************/
// Preferences Settings; // NVM

/*****************************************************
 **** Sub/Function Declarations
 ******************************************************/

/*****************************************************
 **** SetUP
 ******************************************************/
void setup()
{

	// serial ports
	//   Serial1.begin(9600); // tx/rx pins
	//   Serial.begin(57600); // usb
	//   Serial.println("Serial 0 Start");
	//   Serial1.println("Serial 1 Start");

	/***************************** pin properties  ******************/

	/********************   init i2c  *****************/
	// Wire.begin(I2c_SDA, I2c_SCL);
	//  bool status; // connect status
	// Serial.println("I2C INIT OK");

	/*****************************   NVM   ***************************/
	// test for first run time
/* 	Settings.begin("storage", RO_MODE); // nvm storage space, set to read
	bool doesExist = Settings.isKey("NVSInit");
	if (doesExist == false)
	{

		Serial1.println("-----------------NVM first time----------------");
		// first time run code to create keys & assign their values
		Settings.end();						// close the namespace in RO mode.
		Settings.begin("storage", RW_MODE); //  create and open it in RW mode.

		// load NVM with default values
		Settings.putInt("Value Name 1", 2000);
		Settings.putInt("Value Name 2", 1500);

		Settings.putInt("NVSInit", true);
		Settings.end();						// close the namespace
		Settings.begin("storage", RO_MODE); // nvm storage space, set to read
	}

	// load NVM into vars
	Value Name 1 = Settings.getInt("Value Name 1");
	Value Name 2 = Settings.getInt("Value Name 2");
	Settings.end(); // close the namespace */
}

/*****************************************************
 **** Run Loop
 ******************************************************/
void loop()
{
}

/******************************************************
 **** Subs/Function
 ******************************************************/