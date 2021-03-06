/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "transfer.h"

bool_t
xdr_filebytes(XDR *xdrs, filebytes objp)
{

	if (!xdr_opaque(xdrs, objp, MAXLEN))
		return (FALSE);
	return (TRUE);
}

bool_t
xdr_file(XDR *xdrs, file *objp)
{

	if (!xdr_vector(xdrs, (char *)objp->name, MAXLEN, sizeof(char), (xdrproc_t)xdr_char))
		return (FALSE);
	if (!xdr_filebytes(xdrs, objp->data))
		return (FALSE);
	if (!xdr_int(xdrs, &objp->nbytes))
		return (FALSE);
	return (TRUE);
}
