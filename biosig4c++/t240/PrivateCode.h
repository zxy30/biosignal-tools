/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#ifndef	_PrivateCode_H_
#define	_PrivateCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PrivateCode */
typedef INTEGER_t	 PrivateCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PrivateCode;
asn_struct_free_f PrivateCode_free;
asn_struct_print_f PrivateCode_print;
asn_constr_check_f PrivateCode_constraint;
ber_type_decoder_f PrivateCode_decode_ber;
der_type_encoder_f PrivateCode_encode_der;
xer_type_decoder_f PrivateCode_decode_xer;
xer_type_encoder_f PrivateCode_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _PrivateCode_H_ */
