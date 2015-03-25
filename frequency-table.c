/*
 *       Filename:  frequency-table.c
 *
 *    Description:  The frequency and pitch correspondence.
 *
 *
 *         Author:  chenchacha, 
 *        Created:  03/24/2015 09:28:19 PM
 */

#include "frequency-table.h"

int get_cpitch_freq(char pitch, int level)
{
    switch (pitch) {
        case 'A':
            if (level == 0)
                return FREQ_PITCH_A;
            else if (level == -1)
                return FREQ_PITCH_LA;
            else if (level == 1)
                return FREQ_PITCH_HA;

        case 'B':
            if (level == 0)
                return FREQ_PITCH_B;
            else if (level == -1)
                return FREQ_PITCH_LB;
            else if (level == 1)
                return FREQ_PITCH_HB;

        case 'C':
            if (level == 0)
                return FREQ_PITCH_C;
            else if (level == -1)
                return FREQ_PITCH_LC;
            else if (level == 1)
                return FREQ_PITCH_HC;

        case 'D':
            if (level == 0)
                return FREQ_PITCH_D;
            else if (level == -1)
                return FREQ_PITCH_LD;
            else if (level == 1)
                return FREQ_PITCH_HD;
            
        case 'E':
            if (level == 0)
                return FREQ_PITCH_E;
            else if (level == -1)
                return FREQ_PITCH_LE;
            else if (level == 1)
                return FREQ_PITCH_HE;

        case 'F':
            if (level == 0)
                return FREQ_PITCH_F;
            else if (level == -1)
                return FREQ_PITCH_LF;
            else if (level == 1)
                return FREQ_PITCH_HF;

        case 'G':
            if (level == 0)
                return FREQ_PITCH_G;
            else if (level == -1)
                return FREQ_PITCH_LG;
            else if (level == 1)
                return FREQ_PITCH_HG;

        default:
            return FREQ_PITCH_C;
    }
}

int get_cpitch_sharp_freq(char pitch, int level)
{
    switch (pitch) {
        case 'A':
            if (level == 0)
                return FREQ_PITCH_A_SHARP;
            else if (level == -1)
                return FREQ_PITCH_LA_SHARP;
            else if (level == 1)
                return FREQ_PITCH_HA_SHARP;

        case 'B':
            if (level == 0)
                return FREQ_PITCH_HC;
            else if (level == -1)
                return FREQ_PITCH_C;
            else if (level == 1)
                return FREQ_PITCH_HHC;

        case 'C':
            if (level == 0)
                return FREQ_PITCH_C_SHARP;
            else if (level == -1)
                return FREQ_PITCH_LC_SHARP;
            else if (level == 1)
                return FREQ_PITCH_HC_SHARP;

        case 'D':
            if (level == 0)
                return FREQ_PITCH_D_SHARP;
            else if (level == -1)
                return FREQ_PITCH_LD_SHARP;
            else if (level == 1)
                return FREQ_PITCH_HD_SHARP;
            
        case 'E':
            if (level == 0)
                return FREQ_PITCH_F;
            else if (level == -1)
                return FREQ_PITCH_LF;
            else if (level == 1)
                return FREQ_PITCH_HF;

        case 'F':
            if (level == 0)
                return FREQ_PITCH_F_SHARP;
            else if (level == -1)
                return FREQ_PITCH_LF_SHARP;
            else if (level == 1)
                return FREQ_PITCH_HF_SHARP;

        case 'G':
            if (level == 0)
                return FREQ_PITCH_G_SHARP;
            else if (level == -1)
                return FREQ_PITCH_LG_SHARP;
            else if (level == 1)
                return FREQ_PITCH_HG_SHARP;

        default:
            return FREQ_PITCH_C;
    }
}

int get_cpitch_flat_freq(char pitch, int level)
{
    switch (pitch) {
        case 'A':
            if (level == 0)
                return FREQ_PITCH_A_FLAT;
            else if (level == -1)
                return FREQ_PITCH_LA_FLAT;
            else if (level == 1)
                return FREQ_PITCH_HA_FLAT;

        case 'B':
            if (level == 0)
                return FREQ_PITCH_B_FLAT;
            else if (level == -1)
                return FREQ_PITCH_LB_FLAT;
            else if (level == 1)
                return FREQ_PITCH_HB_FLAT;

        case 'C':
            if (level == 0)
                return FREQ_PITCH_B;
            else if (level == -1)
                return FREQ_PITCH_LLB;
            else if (level == 1)
                return FREQ_PITCH_HB;

        case 'D':
            if (level == 0)
                return FREQ_PITCH_D_FLAT;
            else if (level == -1)
                return FREQ_PITCH_LD_FLAT;
            else if (level == 1)
                return FREQ_PITCH_HD_FLAT;
            
        case 'E':
            if (level == 0)
                return FREQ_PITCH_E_FLAT;
            else if (level == -1)
                return FREQ_PITCH_LE_FLAT;
            else if (level == 1)
                return FREQ_PITCH_HE_FLAT;

        case 'F':
            if (level == 0)
                return FREQ_PITCH_E;
            else if (level == -1)
                return FREQ_PITCH_LE;
            else if (level == 1)
                return FREQ_PITCH_HE;

        case 'G':
            if (level == 0)
                return FREQ_PITCH_G_FLAT;
            else if (level == -1)
                return FREQ_PITCH_LG_FLAT;
            else if (level == 1)
                return FREQ_PITCH_HG_FLAT;

        default:
            return FREQ_PITCH_C;
    }
}
