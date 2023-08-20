#include <Geekble_Note2Freq.h>

Geekble_Note2Freq Sing;

#define tonePin 7
void setup() 
{
  pinMode(7, OUTPUT);
  Sing.Set_BPM_QuarterNote(120);
}

void loop() 
{
  tone(tonePin, n_E5);  delay(Sing.NoteLength(_dottedquarter));
  tone(tonePin, n_D5);  delay(Sing.NoteLength(_eighth));
  tone(tonePin, n_C5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_E5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_E5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_E5);  delay(Sing.NoteLength(_half));

  tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_D5);  delay(Sing.NoteLength(_half));
  tone(tonePin, n_E5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_G5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_G5);  delay(Sing.NoteLength(_half));

  tone(tonePin, n_E5);  delay(Sing.NoteLength(_dottedquarter));
  tone(tonePin, n_D5);  delay(Sing.NoteLength(_eighth));
  tone(tonePin, n_C5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_E5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_E5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_E5);  delay(Sing.NoteLength(_half));

  tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_D5);  delay(Sing.NoteLength(_quarter));
  tone(tonePin, n_E5);  delay(Sing.NoteLength(_dottedquarter));
  tone(tonePin, n_D5);  delay(Sing.NoteLength(_eighth));

  tone(tonePin, n_C5);  delay(Sing.NoteLength(_half));

  noTone(tonePin);      delay(5000);
}
