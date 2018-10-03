
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
struct sockaddr {
   unsigned short    sa_family;    // address family, AF_xxx
   char              sa_data[14];  // 14 bytes of protocol address
};


struct sockaddr_in {
    short            sin_family;   // e.g. AF_INET, AF_INET6
    unsigned short   sin_port;     // e.g. htons(3490)
    struct in_addr   sin_addr;     // see struct in_addr, below
    char             sin_zero[8];  // zero this if you want to
};


struct sockaddr_in6 {
    u_int16_t       sin6_family;   // address family, AF_INET6
    u_int16_t       sin6_port;     // port number, Network Byte Order
    u_int32_t       sin6_flowinfo; // IPv6 flow information
    struct in6_addr sin6_addr;     // IPv6 address
    u_int32_t       sin6_scope_id; // Scope ID
};

struct sockaddr_storage {
    sa_family_t  ss_family;     // address family

    // all this is padding, implementation specific, ignore it:
    char      __ss_pad1[_SS_PAD1SIZE];
    int64_t   __ss_align;
    char      __ss_pad2[_SS_PAD2SIZE];
};
```

## Convert IPv4 and IPv6 from text to binary.
This function converts the character string src into a network address structure in the af address family, then copies the network address structure to dst.  The af argument must be either AF_INET or AF_INET6.  dst is written in network byte order.
Unix provides various function calls to help you manipulate IP addresses. These functions convert Internet addresses between ASCII strings (what humans prefer to use) and network byte ordered binary values
```C

    int inet_aton(const char *strptr, struct in_addr *addrptr)
    in_addr_t inet_addr(const char *strptr)
    char *inet_ntoa(struct in_addr inaddr)

```


## Byte Ordering Functions






### Resources: 
[Beej's Guide to Network Programming Using Internet Sockets](https://beej.us/guide/bgnet/pdf/bgnet_A4_2.pdf)
