/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_SystemInformationBlockType12_r9_H_
#define	_SystemInformationBlockType12_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SystemInformationBlockType12_r9__warningMessageSegmentType_r9 {
	SystemInformationBlockType12_r9__warningMessageSegmentType_r9_notLastSegment	= 0,
	SystemInformationBlockType12_r9__warningMessageSegmentType_r9_lastSegment	= 1
} e_SystemInformationBlockType12_r9__warningMessageSegmentType_r9;

/* SystemInformationBlockType12-r9 */
typedef struct SystemInformationBlockType12_r9 {
	BIT_STRING_t	 messageIdentifier_r9;
	BIT_STRING_t	 serialNumber_r9;
	long	 warningMessageSegmentType_r9;
	long	 warningMessageSegmentNumber_r9;
	OCTET_STRING_t	 warningMessageSegment_r9;
	OCTET_STRING_t	*dataCodingScheme_r9	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType12_r9_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_warningMessageSegmentType_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType12_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType12_r9_H_ */
#include <asn_internal.h>
