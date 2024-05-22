/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "pkcs7.asn1"
 */

#ifndef	_SvceAuthInfo_H_
#define	_SvceAuthInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GeneralName.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SvceAuthInfo */
typedef struct SvceAuthInfo {
	GeneralName_t	 service;
	GeneralName_t	 ident;
	OCTET_STRING_t	*authInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SvceAuthInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SvceAuthInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _SvceAuthInfo_H_ */
#include <asn_internal.h>