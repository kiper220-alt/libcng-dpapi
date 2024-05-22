/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "pkcs7.asn1"
 */

#ifndef	_AttCertValidityPeriod_H_
#define	_AttCertValidityPeriod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <GeneralizedTime.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AttCertValidityPeriod */
typedef struct AttCertValidityPeriod {
	GeneralizedTime_t	 notBeforeTime;
	GeneralizedTime_t	 notAfterTime;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AttCertValidityPeriod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AttCertValidityPeriod;

#ifdef __cplusplus
}
#endif

#endif	/* _AttCertValidityPeriod_H_ */
#include <asn_internal.h>