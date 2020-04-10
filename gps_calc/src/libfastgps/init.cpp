#include "stdafx.h"
#include "fastgps.h"
#include "types.h"

void tracking_init()
{
	unsigned ch_idx;
	for (ch_idx = 0; ch_idx < MAX_CHANNELS; ch_idx++)//MAX_CHANNELS = 12
	{
		struct channel *ch = &c[ch_idx];
		ch->track.nav_bit_start = 0;
		//ch->track.nav_sum = 0;
		//ch->track.need_qel_accums = 1;
		ch->chan_bit_flag = 0;

		//ch->track.code_error = ch->track.old_code_error = 0;
		//ch->track.carr_error = ch->track.old_carr_error = 0;
		//ch->track.code_nco = ch->track.old_code_nco = 0;
		//ch->track.carr_nco = ch->track.old_carr_nco = 0;
		//ch->track.ip_last = ch->track.qp_last = 0;
		//ch->track.carr_mode = 0;

		// set default tracking gains, these can be changed by config file command
		//ch->track.Kco = KCO_DEFAULT;
		//ch->track.Kco2 = KCO2_DEFAULT;
		//ch->track.Kca2_FLL1 = KCA2_FLL1_DEFAULT;
		//ch->track.Kca2_FLL2 = KCA2_FLL2_DEFAULT;
		//ch->track.Kca2_PLL = KCA2_PLL_DEFAULT;
		//ch->track.Kca3_PLL = KCA3_PLL_DEFAULT;

		// default loop switching times
		//ch->track.fll_switch_time = TL_FLL_SWITCH_TIME;
		//ch->track.pll_switch_time = TL_PLL_TIME;
		//ch->track.pullin_time = TL_PULLIN_TIME;

	}

}

void init_correlator_channel(uint8_t idx)
{
	struct channel *x = &c[idx];
	//x->car_phase = 0;
	x->code_prompt = 0;
	//x->code_inc = 0;
	//x->sample_idx = 0;
	//x->state = CH_STATE_ACQUIRE;
	x->state_ms = 0;
	//x->non_coh_disc = 0;
	//x->non_coh_disc_integ = 0;
	//x->ie_accum = x->qe_accum = x->ip_accum = x->qp_accum = x->il_accum = x->ql_accum = 0;
	//x->num_ms = 0;
	//x->tracking_lock = 0;
	x->clock = 0;
	//x->dll_ctr = 0;
	//x->integrated_doppler = 0;
	//x->prev_integration_time = 0;
	//x->acq.best_doppler = 0;
	//x->acq.max_energy = 0;
	//x->acq.block_ms = x->acq.block_ctr = 0;
}