#pragma once

#ifdef AUDIO_ENABLE
    #undef  TEMPO_DEFAULT
    #define TEMPO_DEFAULT 170
    #define NOKIA_RINGTONE H__NOTE(_E7), H__NOTE(_D7), H__NOTE(_FS6), H__NOTE(_GS6), H__NOTE(_CS7), H__NOTE(_B6), H__NOTE(_D6), H__NOTE(_E6), H__NOTE(_B6), H__NOTE(_A6), H__NOTE(_CS6), H__NOTE(_E6), H__NOTE(_A6),
    #define STARTUP_SONG SONG(NOKIA_RINGTONE)
    // #define STARTUP_SONG SONG(NO_SOUND)
   //  #define AUDIO_CLICKY
    #define DEFAULT_LAYER_SONGS { SONG(QWERTY_SOUND), \
                                  SONG(COLEMAK_SOUND), \
                                  SONG(DVORAK_SOUND) \
                                }
#endif

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

