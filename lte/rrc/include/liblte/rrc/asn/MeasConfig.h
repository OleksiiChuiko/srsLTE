/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MeasConfig_H_
#define	_MeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-Range.h"
#include <NULL.h>
#include "MobilityStateParameters.h"
#include "SpeedStateScaleFactors.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasConfig__speedStatePars_PR {
	MeasConfig__speedStatePars_PR_NOTHING,	/* No components present */
	MeasConfig__speedStatePars_PR_release,
	MeasConfig__speedStatePars_PR_setup
} MeasConfig__speedStatePars_PR;

/* Forward declarations */
struct MeasObjectToRemoveList;
struct MeasObjectToAddModList;
struct ReportConfigToRemoveList;
struct ReportConfigToAddModList;
struct MeasIdToRemoveList;
struct MeasIdToAddModList;
struct QuantityConfig;
struct MeasGapConfig;
struct PreRegistrationInfoHRPD;

/* MeasConfig */
typedef struct MeasConfig {
	struct MeasObjectToRemoveList	*measObjectToRemoveList	/* OPTIONAL */;
	struct MeasObjectToAddModList	*measObjectToAddModList	/* OPTIONAL */;
	struct ReportConfigToRemoveList	*reportConfigToRemoveList	/* OPTIONAL */;
	struct ReportConfigToAddModList	*reportConfigToAddModList	/* OPTIONAL */;
	struct MeasIdToRemoveList	*measIdToRemoveList	/* OPTIONAL */;
	struct MeasIdToAddModList	*measIdToAddModList	/* OPTIONAL */;
	struct QuantityConfig	*quantityConfig	/* OPTIONAL */;
	struct MeasGapConfig	*measGapConfig	/* OPTIONAL */;
	RSRP_Range_t	*s_Measure	/* OPTIONAL */;
	struct PreRegistrationInfoHRPD	*preRegistrationInfoHRPD	/* OPTIONAL */;
	struct MeasConfig__speedStatePars {
		MeasConfig__speedStatePars_PR present;
		union MeasConfig__speedStatePars_u {
			NULL_t	 release;
			struct MeasConfig__speedStatePars__setup {
				MobilityStateParameters_t	 mobilityStateParameters;
				SpeedStateScaleFactors_t	 timeToTrigger_SF;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *speedStatePars;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasConfig;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasObjectToRemoveList.h"
#include "MeasObjectToAddModList.h"
#include "ReportConfigToRemoveList.h"
#include "ReportConfigToAddModList.h"
#include "MeasIdToRemoveList.h"
#include "MeasIdToAddModList.h"
#include "QuantityConfig.h"
#include "MeasGapConfig.h"
#include "PreRegistrationInfoHRPD.h"

#endif	/* _MeasConfig_H_ */
#include <asn_internal.h>
