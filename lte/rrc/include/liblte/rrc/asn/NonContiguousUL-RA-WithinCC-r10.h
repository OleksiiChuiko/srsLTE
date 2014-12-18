/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_NonContiguousUL_RA_WithinCC_r10_H_
#define	_NonContiguousUL_RA_WithinCC_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NonContiguousUL_RA_WithinCC_r10__nonContiguousUL_RA_WithinCC_Info_r10 {
	NonContiguousUL_RA_WithinCC_r10__nonContiguousUL_RA_WithinCC_Info_r10_supported	= 0
} e_NonContiguousUL_RA_WithinCC_r10__nonContiguousUL_RA_WithinCC_Info_r10;

/* NonContiguousUL-RA-WithinCC-r10 */
typedef struct NonContiguousUL_RA_WithinCC_r10 {
	long	*nonContiguousUL_RA_WithinCC_Info_r10	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NonContiguousUL_RA_WithinCC_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_nonContiguousUL_RA_WithinCC_Info_r10_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NonContiguousUL_RA_WithinCC_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _NonContiguousUL_RA_WithinCC_r10_H_ */
#include <asn_internal.h>
