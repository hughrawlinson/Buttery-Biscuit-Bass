#include <guitar_string.h>
guitar_string::guitar_string(int pin, void noteOn, void noteOff){
	this.pin = pin;
	this.noteOn = noteOn;
	this.noteOff = noteOff;
	this.note = 0;
}

void guitar_string::loop(){
	// check for current note
	// if current note != note
		// send note on or off
	// update note
}