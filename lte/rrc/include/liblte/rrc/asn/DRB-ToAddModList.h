/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_DRB_ToAddModList_H_
#define	_DRB_ToAddModList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DRB_ToAddMod;

/* DRB-ToAddModList */
typedef struct DRB_ToAddModList {
	A_SEQUENCE_OF(struct DRB_ToAddMod) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DRB_ToAddModList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DRB_ToAddModList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DRB-ToAddMod.h"

#endif	/* _DRB_ToAddModList_H_ */
#include <asn_internal.h>
