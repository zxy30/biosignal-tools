/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#ifndef	_DsaRangeSpec_H_
#define	_DsaRangeSpec_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FEFFloat.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DsaRangeSpec */
typedef struct DsaRangeSpec {
	FEFFloat_t	 first_element_value;
	FEFFloat_t	 last_element_value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DsaRangeSpec_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DsaRangeSpec;

#ifdef __cplusplus
}
#endif

#endif	/* _DsaRangeSpec_H_ */