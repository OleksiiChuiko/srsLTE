/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "T-Reordering.h"

int
T_Reordering_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
T_Reordering_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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

void
T_Reordering_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	T_Reordering_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
T_Reordering_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	T_Reordering_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
T_Reordering_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	T_Reordering_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
T_Reordering_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	T_Reordering_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
T_Reordering_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	T_Reordering_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
T_Reordering_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	T_Reordering_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
T_Reordering_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	T_Reordering_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
T_Reordering_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	T_Reordering_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_T_Reordering_constr_1 = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_T_Reordering_value2enum_1[] = {
	{ 0,	3,	"ms0" },
	{ 1,	3,	"ms5" },
	{ 2,	4,	"ms10" },
	{ 3,	4,	"ms15" },
	{ 4,	4,	"ms20" },
	{ 5,	4,	"ms25" },
	{ 6,	4,	"ms30" },
	{ 7,	4,	"ms35" },
	{ 8,	4,	"ms40" },
	{ 9,	4,	"ms45" },
	{ 10,	4,	"ms50" },
	{ 11,	4,	"ms55" },
	{ 12,	4,	"ms60" },
	{ 13,	4,	"ms65" },
	{ 14,	4,	"ms70" },
	{ 15,	4,	"ms75" },
	{ 16,	4,	"ms80" },
	{ 17,	4,	"ms85" },
	{ 18,	4,	"ms90" },
	{ 19,	4,	"ms95" },
	{ 20,	5,	"ms100" },
	{ 21,	5,	"ms110" },
	{ 22,	5,	"ms120" },
	{ 23,	5,	"ms130" },
	{ 24,	5,	"ms140" },
	{ 25,	5,	"ms150" },
	{ 26,	5,	"ms160" },
	{ 27,	5,	"ms170" },
	{ 28,	5,	"ms180" },
	{ 29,	5,	"ms190" },
	{ 30,	5,	"ms200" },
	{ 31,	6,	"spare1" }
};
static unsigned int asn_MAP_T_Reordering_enum2value_1[] = {
	0,	/* ms0(0) */
	2,	/* ms10(2) */
	20,	/* ms100(20) */
	21,	/* ms110(21) */
	22,	/* ms120(22) */
	23,	/* ms130(23) */
	24,	/* ms140(24) */
	3,	/* ms15(3) */
	25,	/* ms150(25) */
	26,	/* ms160(26) */
	27,	/* ms170(27) */
	28,	/* ms180(28) */
	29,	/* ms190(29) */
	4,	/* ms20(4) */
	30,	/* ms200(30) */
	5,	/* ms25(5) */
	6,	/* ms30(6) */
	7,	/* ms35(7) */
	8,	/* ms40(8) */
	9,	/* ms45(9) */
	1,	/* ms5(1) */
	10,	/* ms50(10) */
	11,	/* ms55(11) */
	12,	/* ms60(12) */
	13,	/* ms65(13) */
	14,	/* ms70(14) */
	15,	/* ms75(15) */
	16,	/* ms80(16) */
	17,	/* ms85(17) */
	18,	/* ms90(18) */
	19,	/* ms95(19) */
	31	/* spare1(31) */
};
static asn_INTEGER_specifics_t asn_SPC_T_Reordering_specs_1 = {
	asn_MAP_T_Reordering_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_T_Reordering_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_T_Reordering_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_T_Reordering = {
	"T-Reordering",
	"T-Reordering",
	T_Reordering_free,
	T_Reordering_print,
	T_Reordering_constraint,
	T_Reordering_decode_ber,
	T_Reordering_encode_der,
	T_Reordering_decode_xer,
	T_Reordering_encode_xer,
	T_Reordering_decode_uper,
	T_Reordering_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_T_Reordering_tags_1,
	sizeof(asn_DEF_T_Reordering_tags_1)
		/sizeof(asn_DEF_T_Reordering_tags_1[0]), /* 1 */
	asn_DEF_T_Reordering_tags_1,	/* Same as above */
	sizeof(asn_DEF_T_Reordering_tags_1)
		/sizeof(asn_DEF_T_Reordering_tags_1[0]), /* 1 */
	&asn_PER_type_T_Reordering_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_T_Reordering_specs_1	/* Additional specs */
};

