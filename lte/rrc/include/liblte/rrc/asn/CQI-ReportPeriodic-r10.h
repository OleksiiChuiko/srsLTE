/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_CQI_ReportPeriodic_r10_H_
#define	_CQI_ReportPeriodic_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportPeriodic_r10_PR {
	CQI_ReportPeriodic_r10_PR_NOTHING,	/* No components present */
	CQI_ReportPeriodic_r10_PR_release,
	CQI_ReportPeriodic_r10_PR_setup
} CQI_ReportPeriodic_r10_PR;
typedef enum CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10_PR {
	CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10_PR_NOTHING,	/* No components present */
	CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10_PR_widebandCQI_r10,
	CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10_PR_subbandCQI_r10
} CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10_PR;
typedef enum CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10__csi_ReportMode_r10 {
	CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10__csi_ReportMode_r10_submode1	= 0,
	CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10__csi_ReportMode_r10_submode2	= 1
} e_CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10__csi_ReportMode_r10;
typedef enum CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10__periodicityFactor_r10 {
	CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10__periodicityFactor_r10_n2	= 0,
	CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10__periodicityFactor_r10_n4	= 1
} e_CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10__periodicityFactor_r10;
typedef enum CQI_ReportPeriodic_r10__setup__cqi_Mask_r9 {
	CQI_ReportPeriodic_r10__setup__cqi_Mask_r9_setup	= 0
} e_CQI_ReportPeriodic_r10__setup__cqi_Mask_r9;
typedef enum CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10_PR {
	CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10_PR_NOTHING,	/* No components present */
	CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10_PR_release,
	CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10_PR_setup
} CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10_PR;

/* CQI-ReportPeriodic-r10 */
typedef struct CQI_ReportPeriodic_r10 {
	CQI_ReportPeriodic_r10_PR present;
	union CQI_ReportPeriodic_r10_u {
		NULL_t	 release;
		struct CQI_ReportPeriodic_r10__setup {
			long	 cqi_PUCCH_ResourceIndex_r10;
			long	*cqi_PUCCH_ResourceIndexP1_r10	/* OPTIONAL */;
			long	 cqi_pmi_ConfigIndex;
			struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10 {
				CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10_PR present;
				union CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10_u {
					struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__widebandCQI_r10 {
						long	*csi_ReportMode_r10	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} widebandCQI_r10;
					struct CQI_ReportPeriodic_r10__setup__cqi_FormatIndicatorPeriodic_r10__subbandCQI_r10 {
						long	 k;
						long	 periodicityFactor_r10;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} subbandCQI_r10;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} cqi_FormatIndicatorPeriodic_r10;
			long	*ri_ConfigIndex	/* OPTIONAL */;
			BOOLEAN_t	 simultaneousAckNackAndCQI;
			long	*cqi_Mask_r9	/* OPTIONAL */;
			struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10 {
				CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10_PR present;
				union CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10_u {
					NULL_t	 release;
					struct CQI_ReportPeriodic_r10__setup__csi_ConfigIndex_r10__setup {
						long	 cqi_pmi_ConfigIndex2_r10;
						long	*ri_ConfigIndex2_r10	/* OPTIONAL */;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} setup;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *csi_ConfigIndex_r10;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportPeriodic_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_ReportMode_r10_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_periodicityFactor_r10_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_cqi_Mask_r9_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodic_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportPeriodic_r10_H_ */
#include <asn_internal.h>
