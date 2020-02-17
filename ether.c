#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <time.h>
#include <sys/ioctl.h>
#include <netpacket/packet.h>
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>
#include <netinet/if_ether.h>
#include <linux/if.h>
#include <arpa/inet.h>
#include "sock.h"
#include "ether.h"
#include "arp.h"
#include "ip.h"
#include "icmp.h"
#include "param.h"

extern PARAM Param;

u_int8_t AllZeroMac[6] = {0, 0, 0, 0, 0, 0};
u_int8_t BcastMac[6] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

char *my_ether_ntoa_r(u_int8_t *hwaddr, char *buf)
{
}

int my_ether_aton(char *str, u_int8_t *mac)
{
}

int print_hex(u_int8_t *data, int size)
{
}

void print_ether_header(struct ether_header *eh)
{
}

int EtherSend(int soc, u_int8_t smac[6], u_int8_t dmac[6], u_int16_t type, u_int8_t *data, int len)
{
}

int EtherRecv(int soc, u_int8_t *in_ptr, int in_len)
{
}
