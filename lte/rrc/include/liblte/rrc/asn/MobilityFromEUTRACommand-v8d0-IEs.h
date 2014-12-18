/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_MobilityFromEUTRACommand_v8d0_IEs_H_
#define	_MobilityFromEUTRACommand_v8d0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandIndicatorGERAN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MobilityFromEUTRACommand-v8d0-IEs */
typedef struct MobilityFromEUTRACommand_v8d0_IEs {
	BandIndicatorGERAN_t	*bandIndicator	/* OPTIONAL */;
	struct MobilityFromEUTRACommand_v8d0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityFromEUTRACommand_v8d0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityFromEUTRACommand_v8d0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityFromEUTRACommand_v8d0_IEs_H_ */
#include <asn_internal.h>
