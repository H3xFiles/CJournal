
## What is a socket? 
Socket allow communications between two different processes on the same or different machine, specisesly using a unix file descriptor.
A file descriptor is nothing but an integer associated with an open file and it can be a file, a connection or a text file.

## Socket types:

- Stream socket
  - Guarantee transmission through the tcp protocol
- Datagram socket
  - Not guarantee they are connectionless, they are sent out without checking if the connection is open.
- Raw sockets 
  - Used for developping communication protocols
- Sequenced Packet sockets
  - It provides reliable, flow-controlled, two-way transmission of data for an application program. It is a byte-stream protocol used to support the SOCK_STREAM abstraction. The SPP protocol uses the standard Network Systems (NS) address formats.

## Host Name
The process of findding the ip address on given alpahanumeric host. The hot name resolution is done by the DNS Domanin name System, that map the ip address of tthe corrisponding host name. 

The corrensponding map is stored in 
```Bash
/etc/hosts

127.0.0.1 localhost
192.217.44.204 some.service.com
153.30.30.129 some.other.service.com
```

## Type of server
- Iterative server
  - classic server process sequentially each request
- Concurrent server
  - process multiple requests at the same time, on unix the easiest way is to use fork() to handle each requests separately
  
## How to make a client
- create a socket with socket system call 
- connect the socket to the server using connect
- use read and write to send a receive data

## Struct
To hold information in unix socket programming most socket functions require a pointer to a socket address structure as an argument. When you program you don't know if you will have to store ipv4 or ipv6 or maybe both so it is important to have something bigger enough to hold them both. 
```C
struct sockaddr_storage {
  sa_family_t ss_family; //check if it is an IPv4 or IPv6
  char    __ss_pad1[[__SS_PAD1SIZE];
  int64_t __ss_align;
  char    __ss_pad2[_SS_PAD2SIZE];
};
```



### Resources: 
[Beej's Guide to Network Programming Using Internet Sockets](https://beej.us/guide/bgnet/pdf/bgnet_A4_2.pdf)
