#include "square_sensor.h" 
#include "printf.h"
configuration square_sensorAppC { 
}
implementation {
	components MainC;
	components LedsC;
	components square_sensorC as App;
	components new TimerMilliC() as Timer0;
	components ActiveMessageC;
	components new AMSenderC(AM_CHANNEL);
	components new AMReceiverC(AM_CHANNEL);
  	components Msp430TimerC as sensorRead;
  	components SerialPrintfC;
	components SerialStartC;

	App.Boot -> MainC;
	App.Leds -> LedsC;
	App.Timer0 -> Timer0;
	App.Packet -> AMSenderC;
	App.AMPacket -> AMSenderC;
	App.AMSend -> AMSenderC;
	App.AMControl -> ActiveMessageC;
	App.Receive -> AMReceiverC;
	App.sensorRead -> sensorRead.CaptureA0;
	App.sensorControl -> sensorRead.ControlA0;
	App.sensorTimer->sensorRead.TimerA ;
}
