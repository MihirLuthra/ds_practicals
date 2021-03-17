gcc -c -o transfer_clnt.o transfer_clnt.c
gcc -c -o transfer_client.o transfer_client.c
gcc -c -o transfer_xdr.o transfer_xdr.c
gcc -o transfer_client transfer_clnt.o transfer_client.o transfer_xdr.o 
gcc -c -o transfer_svc.o transfer_svc.c
gcc -c -o transfer_server.o transfer_server.c
gcc -o transfer_server transfer_svc.o transfer_server.o transfer_xdr.o 
