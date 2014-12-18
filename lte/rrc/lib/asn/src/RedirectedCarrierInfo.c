/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "RedirectedCarrierInfo.h"

static asn_per_constraints_t asn_PER_type_RedirectedCarrierInfo_constr_1 = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RedirectedCarrierInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.eutra),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"eutra"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.geran),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqsGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"geran"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.utra_FDD),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utra-FDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.utra_TDD),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utra-TDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.cdma2000_HRPD),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cdma2000-HRPD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.cdma2000_1xRTT),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqCDMA2000,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cdma2000-1xRTT"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RedirectedCarrierInfo, choice.utra_TDD_r10),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CarrierFreqListUTRA_TDD_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utra-TDD-r10"
		},
};
static asn_TYPE_tag2member_t asn_MAP_RedirectedCarrierInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra at 891 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* geran at 892 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* utra-FDD at 893 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* utra-TDD at 894 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* cdma2000-HRPD at 895 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* cdma2000-1xRTT at 896 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* utra-TDD-r10 at 899 */
};
static asn_CHOICE_specifics_t asn_SPC_RedirectedCarrierInfo_specs_1 = {
	sizeof(struct RedirectedCarrierInfo),
	offsetof(struct RedirectedCarrierInfo, _asn_ctx),
	offsetof(struct RedirectedCarrierInfo, present),
	sizeof(((struct RedirectedCarrierInfo *)0)->present),
	asn_MAP_RedirectedCarrierInfo_tag2el_1,
	7,	/* Count of tags in the map */
	0,
	6	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RedirectedCarrierInfo = {
	"RedirectedCarrierInfo",
	"RedirectedCarrierInfo",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_RedirectedCarrierInfo_constr_1,
	asn_MBR_RedirectedCarrierInfo_1,
	7,	/* Elements count */
	&asn_SPC_RedirectedCarrierInfo_specs_1	/* Additional specs */
};

