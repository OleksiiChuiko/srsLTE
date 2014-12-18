/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_N1PUCCH_AN_PersistentList_H_
#define	_N1PUCCH_AN_PersistentList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* N1PUCCH-AN-PersistentList */
typedef struct N1PUCCH_AN_PersistentList {
	A_SEQUENCE_OF(long) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} N1PUCCH_AN_PersistentList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_N1PUCCH_AN_PersistentList;

#ifdef __cplusplus
}
#endif

#endif	/* _N1PUCCH_AN_PersistentList_H_ */
#include <asn_internal.h>
