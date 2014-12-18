/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "MBSFN-SubframeConfig.h"

static int
radioframeAllocationPeriod_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
radioframeAllocationPeriod_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
radioframeAllocationPeriod_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	radioframeAllocationPeriod_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
radioframeAllocationPeriod_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	radioframeAllocationPeriod_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
radioframeAllocationPeriod_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	radioframeAllocationPeriod_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
radioframeAllocationPeriod_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	radioframeAllocationPeriod_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
radioframeAllocationPeriod_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	radioframeAllocationPeriod_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
radioframeAllocationPeriod_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	radioframeAllocationPeriod_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
radioframeAllocationPeriod_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	radioframeAllocationPeriod_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
radioframeAllocationPeriod_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	radioframeAllocationPeriod_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_oneFrame_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_fourFrames_constraint_10(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 24)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_radioframeAllocationOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_radioframeAllocationPeriod_constr_2 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_oneFrame_constr_11 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  6,  6 }	/* (SIZE(6..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_fourFrames_constr_12 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  24,  24 }	/* (SIZE(24..24)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_subframeAllocation_constr_10 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_radioframeAllocationOffset_constr_9 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_radioframeAllocationPeriod_value2enum_2[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n4" },
	{ 3,	2,	"n8" },
	{ 4,	3,	"n16" },
	{ 5,	3,	"n32" }
};
static unsigned int asn_MAP_radioframeAllocationPeriod_enum2value_2[] = {
	0,	/* n1(0) */
	4,	/* n16(4) */
	1,	/* n2(1) */
	5,	/* n32(5) */
	2,	/* n4(2) */
	3	/* n8(3) */
};
static asn_INTEGER_specifics_t asn_SPC_radioframeAllocationPeriod_specs_2 = {
	asn_MAP_radioframeAllocationPeriod_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_radioframeAllocationPeriod_enum2value_2,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_radioframeAllocationPeriod_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_radioframeAllocationPeriod_2 = {
	"radioframeAllocationPeriod",
	"radioframeAllocationPeriod",
	radioframeAllocationPeriod_2_free,
	radioframeAllocationPeriod_2_print,
	radioframeAllocationPeriod_2_constraint,
	radioframeAllocationPeriod_2_decode_ber,
	radioframeAllocationPeriod_2_encode_der,
	radioframeAllocationPeriod_2_decode_xer,
	radioframeAllocationPeriod_2_encode_xer,
	radioframeAllocationPeriod_2_decode_uper,
	radioframeAllocationPeriod_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_radioframeAllocationPeriod_tags_2,
	sizeof(asn_DEF_radioframeAllocationPeriod_tags_2)
		/sizeof(asn_DEF_radioframeAllocationPeriod_tags_2[0]) - 1, /* 1 */
	asn_DEF_radioframeAllocationPeriod_tags_2,	/* Same as above */
	sizeof(asn_DEF_radioframeAllocationPeriod_tags_2)
		/sizeof(asn_DEF_radioframeAllocationPeriod_tags_2[0]), /* 2 */
	&asn_PER_type_radioframeAllocationPeriod_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_radioframeAllocationPeriod_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_subframeAllocation_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_SubframeConfig__subframeAllocation, choice.oneFrame),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_oneFrame_constraint_10,
		&asn_PER_memb_oneFrame_constr_11,
		0,
		"oneFrame"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_SubframeConfig__subframeAllocation, choice.fourFrames),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_fourFrames_constraint_10,
		&asn_PER_memb_fourFrames_constr_12,
		0,
		"fourFrames"
		},
};
static asn_TYPE_tag2member_t asn_MAP_subframeAllocation_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* oneFrame at 4062 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fourFrames at 4063 */
};
static asn_CHOICE_specifics_t asn_SPC_subframeAllocation_specs_10 = {
	sizeof(struct MBSFN_SubframeConfig__subframeAllocation),
	offsetof(struct MBSFN_SubframeConfig__subframeAllocation, _asn_ctx),
	offsetof(struct MBSFN_SubframeConfig__subframeAllocation, present),
	sizeof(((struct MBSFN_SubframeConfig__subframeAllocation *)0)->present),
	asn_MAP_subframeAllocation_tag2el_10,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_subframeAllocation_10 = {
	"subframeAllocation",
	"subframeAllocation",
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
	&asn_PER_type_subframeAllocation_constr_10,
	asn_MBR_subframeAllocation_10,
	2,	/* Elements count */
	&asn_SPC_subframeAllocation_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MBSFN_SubframeConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_SubframeConfig, radioframeAllocationPeriod),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_radioframeAllocationPeriod_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioframeAllocationPeriod"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_SubframeConfig, radioframeAllocationOffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_radioframeAllocationOffset_constraint_1,
		&asn_PER_memb_radioframeAllocationOffset_constr_9,
		0,
		"radioframeAllocationOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_SubframeConfig, subframeAllocation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_subframeAllocation_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"subframeAllocation"
		},
};
static ber_tlv_tag_t asn_DEF_MBSFN_SubframeConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MBSFN_SubframeConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioframeAllocationPeriod at 4059 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* radioframeAllocationOffset at 4060 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* subframeAllocation at 4062 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBSFN_SubframeConfig_specs_1 = {
	sizeof(struct MBSFN_SubframeConfig),
	offsetof(struct MBSFN_SubframeConfig, _asn_ctx),
	asn_MAP_MBSFN_SubframeConfig_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBSFN_SubframeConfig = {
	"MBSFN-SubframeConfig",
	"MBSFN-SubframeConfig",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_MBSFN_SubframeConfig_tags_1,
	sizeof(asn_DEF_MBSFN_SubframeConfig_tags_1)
		/sizeof(asn_DEF_MBSFN_SubframeConfig_tags_1[0]), /* 1 */
	asn_DEF_MBSFN_SubframeConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBSFN_SubframeConfig_tags_1)
		/sizeof(asn_DEF_MBSFN_SubframeConfig_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBSFN_SubframeConfig_1,
	3,	/* Elements count */
	&asn_SPC_MBSFN_SubframeConfig_specs_1	/* Additional specs */
};

