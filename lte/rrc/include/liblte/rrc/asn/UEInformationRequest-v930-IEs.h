/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_UEInformationRequest_v930_IEs_H_
#define	_UEInformationRequest_v930_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UEInformationRequest_v1020_IEs;

/* UEInformationRequest-v930-IEs */
typedef struct UEInformationRequest_v930_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct UEInformationRequest_v1020_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationRequest_v930_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationRequest_v930_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UEInformationRequest-v1020-IEs.h"

#endif	/* _UEInformationRequest_v930_IEs_H_ */
#include <asn_internal.h>
