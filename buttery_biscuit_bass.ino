#include <guitar_string.h>
#include <midi_out.h>

int stringCount = 1;
guitar_string[stringCount] strings;
midi_out mout;

void setup(){
	guitar_string[0] = new guitar_string(A0,&noteOn,&noteOff);
	mout = new midi_out();
}

void loop(){
	for(int i = 0; i < stringCount; i++){
		strings[i].loop();
	}
}

void noteOn(int note){
	mout.on(note);
}

void noteOff(int note){
	mout.off(note);
}