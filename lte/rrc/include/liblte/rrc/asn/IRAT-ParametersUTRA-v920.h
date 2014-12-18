/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_IRAT_ParametersUTRA_v920_H_
#define	_IRAT_ParametersUTRA_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersUTRA_v920__e_RedirectionUTRA_r9 {
	IRAT_ParametersUTRA_v920__e_RedirectionUTRA_r9_supported	= 0
} e_IRAT_ParametersUTRA_v920__e_RedirectionUTRA_r9;

/* IRAT-ParametersUTRA-v920 */
typedef struct IRAT_ParametersUTRA_v920 {
	long	 e_RedirectionUTRA_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersUTRA_v920_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_e_RedirectionUTRA_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersUTRA_v920;

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersUTRA_v920_H_ */
#include <asn_internal.h>
