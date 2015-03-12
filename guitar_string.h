class guitar_string{
public:
	guitar_string(int pin,void noteOn, void, noteOff);
	void loop();
private:
	int pin;
	void noteOn;
	void noteOff;
	int note;
}