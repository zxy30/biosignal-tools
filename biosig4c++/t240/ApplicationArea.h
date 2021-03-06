/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#ifndef	_ApplicationArea_H_
#define	_ApplicationArea_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ApplicationArea {
	ApplicationArea_area_unspec	= 0,
	ApplicationArea_area_operating_room	= 1,
	ApplicationArea_area_intensive_care	= 2
} e_ApplicationArea;

/* ApplicationArea */
typedef INTEGER_t	 ApplicationArea_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ApplicationArea;
asn_struct_free_f ApplicationArea_free;
asn_struct_print_f ApplicationArea_print;
asn_constr_check_f ApplicationArea_constraint;
ber_type_decoder_f ApplicationArea_decode_ber;
der_type_encoder_f ApplicationArea_encode_der;
xer_type_decoder_f ApplicationArea_decode_xer;
xer_type_encoder_f ApplicationArea_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _ApplicationArea_H_ */
