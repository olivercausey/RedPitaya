/**
 * $Id: $
 *
 * @brief Red Pitaya Scpi server utils module interface
 *
 * @Author Red Pitaya
 *
 * (c) Red Pitaya  http://www.redpitaya.com
 *
 * This part of code is written in C programming language.
 * Please visit http://en.wikipedia.org/wiki/C_(programming_language)
 * for more details on the language used herein.
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <stdbool.h>
#include "rp.h"
#include "../../api-mockup/rpbase/src/rp.h"
#include "acquire.h"

#define SET_OK(cont) \
    	SCPI_ResultString(cont, "OK"); \
    	return SCPI_RES_OK;

int getRpDpin(const char* pinStr, rp_dpin_t *rpPin);
int getRpDirection(const char *dirStr, rp_pinDirection_t *direction);
int getRpApin(const char *pinStr, rp_apin_t *rpPin);


int getRpDecimation(int decimationInt, rp_acq_decimation_t *decimation);
int getRpDecimationInt(rp_acq_decimation_t decimation, int *decimationInt);
int getRpSamplingRateString(rp_acq_sampling_rate_t samplingRate, char *samplingRateString);
int getRpSamplingRate(const char *samplingRateString, rp_acq_sampling_rate_t *samplingRate);
int getRpGain(const char *gainStr, rp_pinState_t *state);
int getRpTriggerSource(const char *sourceStr, rp_acq_trig_src_t *source);
int getRpTriggerSourceString(rp_acq_trig_src_t source, char *triggSourceString);

int getRpUnit(const char *unitString, rp_scpi_acq_unit_t *unit);
int getRpFormat(const char *formatString, rp_scpi_acq_format_t *format);

#endif /* UTILS_H_ */
