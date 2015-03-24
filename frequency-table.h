#ifndef  _FREQUENCY_TABLE_H__INC
#define  _FREQUENCY_TABLE_H__INC

#define FREQ_PITCH_LC           (130.8)
#define FREQ_PITCH_LD           (146.8)
#define FREQ_PITCH_LE           (164.8)
#define FREQ_PITCH_LF           (174.8)
#define FREQ_PITCH_LG           (196)
#define FREQ_PITCH_LA           (220)
#define FREQ_PITCH_LB           (247)

#define FREQ_PITCH_C            (261.5)
#define FREQ_PITCH_D            (293.5)
#define FREQ_PITCH_E            (329.5)
#define FREQ_PITCH_F            (349)
#define FREQ_PITCH_G            (392)
#define FREQ_PITCH_A            (440)
#define FREQ_PITCH_B            (494)

#define FREQ_PITCH_HC           (523)
#define FREQ_PITCH_HD           (587)
#define FREQ_PITCH_HE           (659)
#define FREQ_PITCH_HF           (698)
#define FREQ_PITCH_HG           (784)
#define FREQ_PITCH_HA           (880)
#define FREQ_PITCH_HB           (998)

#define FREQ_PITCH_HHC          (1047)
#define FREQ_PITCH_HHD
#define FREQ_PITCH_HHE
#define FREQ_PITCH_HHF
#define FREQ_PITCH_HHG
#define FREQ_PITCH_HHA
#define FREQ_PITCH_HHB

#define FREQ_PITCH_C_SHARP
#define FREQ_PITCH_C_FLAT

extern int get_cpitch_freq(char pitch);

#endif /* ----- #ifndef _FREQUENCY_TABLE_H__INC  ----- */
