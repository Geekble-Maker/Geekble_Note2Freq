/*
    Geekble_Note2Freq.h - Library for Note to Frequency Table.
    Created by SooDragon @ Geekble Circuit Maker, Aug 8, 2023.
*/

#include <Geekble_Note2Freq.h>
#include "Arduino.h"


uint16_t bpm_QuarterNote = 120;

Geekble_Note2Freq::Geekble_Note2Freq()
{
  ;
}

unsigned long Geekble_Note2Freq::NoteLength(float _duration)
{
  return ((60000.0 * _duration) / bpm_QuarterNote);
}

void Geekble_Note2Freq::Set_BPM_QuarterNote(uint16_t _BPM)
{
  bpm_QuarterNote = _BPM;
}