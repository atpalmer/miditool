#ifndef TRACK_H
#define TRACK_H

#include <stdint.h>
#include "typehelp.h"

uint32_t track_init(uint8_t *out);
uint32_t track_time_signature(uint8_t *track, uint32_t delta, uint8_t num, uint8_t denomexp);
uint32_t track_tempo(uint8_t *track, uint32_t delta, uint32_t quarter_micros);
uint32_t track_key(uint8_t *track, uint32_t delta, twobytes key);
uint32_t track_program_no(uint8_t *track, uint32_t delta, uint8_t channel, uint8_t program_no);
uint32_t track_note_on(uint8_t *track, uint32_t delta, char channel, char pitch, char velocity);
uint32_t track_end(uint8_t *track, uint32_t delta);

#endif
