/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "pkcs7.asn1"
 */

#ifndef	_KEKRecipientInfo_H_
#define	_KEKRecipientInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CMSVersion.h"
#include "KEKIdentifier.h"
#include "KeyEncryptionAlgorithmIdentifier.h"
#include "EncryptedKey.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* KEKRecipientInfo */
typedef struct KEKRecipientInfo {
	CMSVersion_t	 version;
	KEKIdentifier_t	 kekid;
	KeyEncryptionAlgorithmIdentifier_t	 keyEncryptionAlgorithm;
	EncryptedKey_t	 encryptedKey;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} KEKRecipientInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_KEKRecipientInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _KEKRecipientInfo_H_ */
#include <asn_internal.h>