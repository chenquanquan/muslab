#ifndef  _FREQUENCY_TABLE_H__
#define  _FREQUENCY_TABLE_H__

#define FREQ_PITCH_LLC
#define FREQ_PITCH_LLC_SHARP
#define FREQ_PITCH_LLD_FLAT
#define FREQ_PITCH_LLD
#define FREQ_PITCH_LLD_SHARP
#define FREQ_PITCH_LLE_FLAT
#define FREQ_PITCH_LLE
#define FREQ_PITCH_LLF
#define FREQ_PITCH_LLF_SHARP
#define FREQ_PITCH_LLG_FLAT
#define FREQ_PITCH_LLG
#define FREQ_PITCH_LLG_SHARP
#define FREQ_PITCH_LLA_FLAT
#define FREQ_PITCH_LLA
#define FREQ_PITCH_LLA_SHARP
#define FREQ_PITCH_LLB_FLAT
#define FREQ_PITCH_LLB          (123.5)

#define FREQ_PITCH_LC           (130.8)
#define FREQ_PITCH_LC_SHARP     (138.6)
#define FREQ_PITCH_LD_FLAT      (138.6)
#define FREQ_PITCH_LD           (146.8)
#define FREQ_PITCH_LD_SHARP     (155.5)
#define FREQ_PITCH_LE_FLAT      (155.5)
#define FREQ_PITCH_LE           (164.8)
#define FREQ_PITCH_LF           (174.8)
#define FREQ_PITCH_LF_SHARP     (185)
#define FREQ_PITCH_LG_FLAT      (185)
#define FREQ_PITCH_LG           (196)
#define FREQ_PITCH_LG_SHARP     (207)
#define FREQ_PITCH_LA_FLAT      (207)
#define FREQ_PITCH_LA           (220)
#define FREQ_PITCH_LA_SHARP     (233)
#define FREQ_PITCH_LB_FLAT      (233)
#define FREQ_PITCH_LB           (247)

#define FREQ_PITCH_C            (261.5)
#define FREQ_PITCH_C_SHARP      (288)
#define FREQ_PITCH_D_FLAT       (288)
#define FREQ_PITCH_D            (293.5)
#define FREQ_PITCH_D_SHARP      (311)
#define FREQ_PITCH_E_FLAT       (311)
#define FREQ_PITCH_E            (329.5)
#define FREQ_PITCH_F            (349)
#define FREQ_PITCH_F_SHARP      (370)
#define FREQ_PITCH_G_FLAT       (370)
#define FREQ_PITCH_G            (392)
#define FREQ_PITCH_G_SHARP      (415)
#define FREQ_PITCH_A_FLAT       (415)
#define FREQ_PITCH_A            (440)
#define FREQ_PITCH_A_SHARP      (466)
#define FREQ_PITCH_B_FLAT       (466)
#define FREQ_PITCH_B            (494)

#define FREQ_PITCH_HC           (523)
#define FREQ_PITCH_HC_SHARP     (554)
#define FREQ_PITCH_HD_FLAT      (554)
#define FREQ_PITCH_HD           (587)
#define FREQ_PITCH_HD_SHARP     (622)
#define FREQ_PITCH_HE_FLAT      (622)
#define FREQ_PITCH_HE           (659)
#define FREQ_PITCH_HF           (698)
#define FREQ_PITCH_HF_SHARP     (740)
#define FREQ_PITCH_HG_FLAT      (740)
#define FREQ_PITCH_HG           (784)
#define FREQ_PITCH_HG_SHARP     (831)
#define FREQ_PITCH_HA_FLAT      (831)
#define FREQ_PITCH_HA           (880)
#define FREQ_PITCH_HA_SHARP     (932)
#define FREQ_PITCH_HB_FLAT      (932)
#define FREQ_PITCH_HB           (998)

#define FREQ_PITCH_HHC          (1047)
#define FREQ_PITCH_HHD
#define FREQ_PITCH_HHE
#define FREQ_PITCH_HHF
#define FREQ_PITCH_HHG
#define FREQ_PITCH_HHA
#define FREQ_PITCH_HHB

extern int get_cpitch_freq(char pitch, int level);
extern int get_cpitch_sharp_freq(char pitch, int level);
extern int get_cpitch_flat_freq(char pitch, int level);

#endif /* ----- #ifndef _FREQUENCY_TABLE_H__  ----- */
